#ifndef UNARY_EXPR_NODE_H
#define UNARY_EXPR_NODE_H

#include "Expr_Node.h"


class Unary_Expr_Node : public Expr_Node
{
    public:
        Unary_Expr_Node();
        Unary_Expr_Node(Expr_Node* c);
        virtual ~Unary_Expr_Node();
        virtual int evaluate();
        virtual void accept(Expr_Node_Visitor & v);
    protected:
        Expr_Node * child_;
    private:
};

#endif // UNARY_EXPR_NODE_H
