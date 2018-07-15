#include "Expr_Tree_Builder.h"

Expr_Tree_Builder::Expr_Tree_Builder()
{
    //ctor
}

Expr_Tree_Builder::~Expr_Tree_Builder()
{
    //dtor
}

void Expr_Tree_Builder::start_expression(void)
{
    this->tree = new Expr_Tree();
}

void Expr_Tree_Builder::check(Binary_Expr_Node* node)
{
    bool checkpredence = false;
    bool popStack = false;

    //Check to see if there is precedence
    while(!checkpredence)
    {
         if(!list2.is_empty())
         {
            temp1 = list2.pop();

            //Go through all combinations of precedence
            if(node->getID() == '+' && temp1->getID() == '*')
            {
                popStack = true;
            }
            else if (node->getID() == '+' && temp1->getID() == '/')
            {
                popStack = true;
            }
            else if (node->getID() == '+' && temp1->getID() == '-')
            {
                popStack = true;
            }
            else if (node->getID() == '+' && temp1->getID() == '+')
            {
                popStack = true;
            }
            else if(node->getID() == '-' && temp1->getID() == '*')
            {
                popStack = true;
            }
            else if(node->getID() == '-' && temp1->getID() == '/')
            {
                popStack = true;
            }
            else if(node->getID() == '-' && temp1->getID() == '+')
            {
                popStack = true;
            }
            else if(node->getID() == '-' && temp1->getID() == '-')
            {
                popStack = true;
            }
            else if(node->getID() == '*' && temp1->getID() == '/')
            {
                popStack = true;
            }
            else if(node->getID() == '*' && temp1->getID() == '*')
            {
                popStack = true;
            }
            else if(node->getID() == '*' && temp1->getID() == '%')
            {
                popStack = true;
            }
            else if(node->getID() == '/' && temp1->getID() == '*')
            {
                popStack = true;
            }
            else if(node->getID() == '/' && temp1->getID() == '/')
            {
                popStack = true;
            }
            else if(node->getID() == '/' && temp1->getID() == '%')
            {
                popStack = true;
            }
            else if(node->getID() == '%' && temp1->getID() == '%')
            {
                popStack = true;
            }
            else if(node->getID() == '%' && temp1->getID() == '*')
            {
                popStack = true;
            }
            else if(node->getID() == '%' && temp1->getID() == '/')
            {
                popStack = true;
            }
            else
            {
                //There is no precedence
                list2.push(temp1);
                list2.push(node);
                checkpredence = true;
            }

         }
         else //Stack is empty
         {
             list2.push(node);
             checkpredence = true;

         }

        //There was precedence
         if(popStack)
         {
            temp1->setRightChild(list1.pop());
            temp1->setLeftChild(list1.pop());
            list1.push(temp1);
            popStack = false;
            list2.push(node);
            checkpredence = true;
         }
    }
}


void Expr_Tree_Builder::build_add_operand(void)
{
  // COMMENT: You are implementing the builder pattern incorrectly.
  // The logic you have in the tree should be placed here in the builder.
  // The tree should not have any logic for how to actually build itself.

  // I address this comment by putting all the logic for the tree by
  // moving it in here so that the tree does not know how to build
  // itself.

    Addition_Node* node = new Addition_Node();
    check(node);
}

void Expr_Tree_Builder::build_subtract_operand(void)
{
  // COMMENT: You are implementing the builder pattern incorrectly.
  // The logic you have in the tree should be placed here in the builder.
  // The tree should not have any logic for how to actually build itself.

  // I address this comment by putting all the logic for the tree by
  // moving it in here so that the tree does not know how to build
  // itself.

    Subtraction_Node* node = new Subtraction_Node();
    check(node);
}

void Expr_Tree_Builder::build_multiply_operand(void)
{
  // COMMENT: You are implementing the builder pattern incorrectly.
  // The logic you have in the tree should be placed here in the builder.
  // The tree should not have any logic for how to actually build itself.

  // I address this comment by putting all the logic for the tree by
  // moving it in here so that the tree does not know how to build
  // itself.

    Multiply_Node* node = new Multiply_Node();
    check(node);
}

void Expr_Tree_Builder::build_division_operand(void)
{
  // COMMENT: You are implementing the builder pattern incorrectly.
  // The logic you have in the tree should be placed here in the builder.
  // The tree should not have any logic for how to actually build itself.

  // I address this comment by putting all the logic for the tree by
  // moving it in here so that the tree does not know how to build
  // itself.

    Division_Node* node = new Division_Node();
    check(node);
}

void Expr_Tree_Builder::build_mod_operand(void)
{
  // COMMENT: You are implementing the builder pattern incorrectly.
  // The logic you have in the tree should be placed here in the builder.
  // The tree should not have any logic for how to actually build itself.

  // I address this comment by putting all the logic for the tree by
  // moving it in here so that the tree does not know how to build
  // itself.

    Mod_Node * node = new Mod_Node();
    check(node);
}

void Expr_Tree_Builder::build_number(int n)
{
  // COMMENT: You are implementing the builder pattern incorrectly.
  // The logic you have in the tree should be placed here in the builder.
  // The tree should not have any logic for how to actually build itself.

  // I address this comment by putting all the logic for the tree by
  // moving it in here so that the tree does not know how to build
  // itself.

    Number_Node* node = new Number_Node(n);
    list1.push(node);
}

Expr_Tree* Expr_Tree_Builder::get_expression(void)
{
    return this->tree;
}

void Expr_Tree_Builder::finish_expression(void)
{
    bool emptyStack = false;

    // The stack is not empty
    while(!emptyStack)
    {
        //pop an operand to set left and right child
        if(!list2.is_empty() && !list1.is_empty())
        {
            temp1 = list2.pop();
            temp1->setRightChild(list1.pop());
            temp1->setLeftChild(list1.pop());
            list1.push(temp1);
        }
        else //set the last operand to the root
        {

            tree->setRoot(list1.pop());
            emptyStack = true;
        }

    }
}
