#ifndef DIVISION_NODE_H
#define DIVISION_NODE_H

#include "Binary_Expr_Node.h"
#include <stdexcept>

class Division_Node : public Binary_Expr_Node
{
    public:
        Division_Node();
        Division_Node(Expr_Node*e1,Expr_Node*e2);
        virtual ~Division_Node();
        virtual int evaluate(int n1,int n2);
        virtual void accepted(Expr_Node_Visitor & v);
        virtual char getID();

        // COMMENT: The accessor method should be on the binary node class.

        // I address this comment by putting it in the binary node class
    protected:
    private:
};

#endif // DIVISION_NODE_H
