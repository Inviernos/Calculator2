#include <stdio.h>
#include <cstdlib>
#include <sstream>
#include "Expr_Node_Visitor.h"
#include "Expr_Node.h"
#include "Expr_Builder.h"
#include "Expr_Tree_Builder.h"

//function prototypes
bool evaluate_expr(const std::string&, int& result);
bool parse_expr(const std::string&, Expr_Builder&);

#define MAX 32

int main()
{
    //variables
    std::string infix = "";
	char expression[MAX] = "";
	bool quitting = false;
	std::string answer = "";
	int result = 0;

    //Wait until the user quits
	while(!quitting)
	{
	    //ask for input
	    fprintf(stdout,"\nInput an Expression\n");
	    fgets(expression,MAX,stdin);
	    infix = expression;

        //user quits the calculator
		if(infix.compare(0,4,"QUIT") == 0)
		{
			quitting = true;
		}
		else
		{
		    //The expression is not empty
		    if(infix != "\n")
            {
                if(evaluate_expr(infix,result))
                {
                    fprintf(stdout,"\nThe answer is %d \n",result);
                }
            }
            else
            {
                fprintf(stdout,"You entered blank. Try again.\n");
            }


        }
	}

	return 0;
}

//Take the input and build the expression tree
bool parse_expr (const std::string & infix, Expr_Builder &b)
{
    std::istringstream input (infix); // create a input stream parser
    std::string token; // current token in string/stream
    b.start_expression (); // start a new expression
    std::string lasttoken = "";
    int value = 0;

    //You have not reached the end of the input
    while (!input.eof ())
    {

        input >> token;

        if(lasttoken != token)
        {
            if (token == "+")
            {
                b.build_add_operand ();
            }
            else if(token == "-")
            {
                b.build_subtract_operand ();
            }
            else if(token == "*")
            {
                 b.build_multiply_operand ();
            }
            else if(token == "/")
            {
                b.build_division_operand();
            }
            else if(token == "%")
            {
                b.build_mod_operand();
            }
            else if(token == "")
            {

            }
            else
            {
                value = atoi(token.c_str());
                b.build_number(value);
            }
        }


        lasttoken = token;
    }

    b.finish_expression();

    return true;
}

//Compute the infix expression using the expression tree
bool evaluate_expr (const std::string & infix, int& result)
{
    Expr_Tree_Builder builder;

    //Is the tree built or not
    if (!parse_expr (infix, builder))
    {
        return false;
    }

    //Get the tree
    Expr_Tree * expr = builder.get_expression ();

    //There is no expression
    if (expr == 0)
    {
        return false;
    }

    // evaluate the expression
    result = expr->eval();

    return true;
}
