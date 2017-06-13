#ifndef SUBTRACTION_NODE_H
#define SUBTRACTION_NODE_H

#include "Binary_Expr_Node.h"


class Subtraction_Node : public Binary_Expr_Node
{
    public:
        Subtraction_Node();
        Subtraction_Node(Expr_Node*e1,Expr_Node*e2);
        virtual ~Subtraction_Node();
        virtual int evaluate(int n1,int n2);
        virtual void accepted(Expr_Node_Visitor & v);
        virtual char getID();

        // COMMENT: The accessor method should be on the binary node class.

        // I address this comment by putting it in the binary node class
    protected:
    private:
};

#endif // SUBTRACTION_NODE_H
