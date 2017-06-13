#ifndef BINARY_EXPR_NODE_H
#define BINARY_EXPR_NODE_H

#include "Expr_Node.h"


class Binary_Expr_Node : public Expr_Node
{
    public:
        Binary_Expr_Node();
        virtual ~Binary_Expr_Node();
        virtual int evaluate();
        virtual void accept(Expr_Node_Visitor & v);
        virtual int evaluate(int n1,int n2) = 0;
        virtual void accepted(Expr_Node_Visitor & v) = 0;
        virtual void setLeftChild(Expr_Node* c1);
        virtual void setRightChild(Expr_Node* c2);
        Expr_Node* getLeftChild();
        Expr_Node* getRightChild();
        virtual char getID() = 0;
    protected:
        Expr_Node * left_;
        Expr_Node * right_;
    private:
};

#endif // BINARY_EXPR_NODE_H
