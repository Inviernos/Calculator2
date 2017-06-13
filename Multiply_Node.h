#ifndef MULTIPLY_NODE_H
#define MULTIPLY_NODE_H

#include "Binary_Expr_Node.h"


class Multiply_Node : public Binary_Expr_Node
{
    public:
        Multiply_Node();
        Multiply_Node(Expr_Node* e1,Expr_Node*e2);
        virtual ~Multiply_Node();
        virtual int evaluate(int n1,int n2);
        virtual void accepted(Expr_Node_Visitor & v);
        virtual char getID();

        // COMMENT: The accessor method should be on the binary node class.

        // I address this comment by putting it in the binary node class

    protected:
    private:
};

#endif // MULTIPLY_NODE_H
