#ifndef ADDITION_NODE_H
#define ADDITION_NODE_H

#include "Binary_Expr_Node.h"


class Addition_Node : public Binary_Expr_Node
{
    public:
        Addition_Node();
        Addition_Node(Expr_Node* e1,Expr_Node * e2);
        virtual ~Addition_Node();
        virtual int evaluate(int n1,int n2);
        virtual void accepted(Expr_Node_Visitor & v);
        virtual char getID();

        // COMMENT: The accessor method should be on the binary node class.

        // I address this comment by putting it in the binary node class

    protected:
    private:
};

#endif // ADDITION_NODE_H
