#ifndef EXPR_NODE_H
#define EXPR_NODE_H

class Expr_Node_Visitor;
#include "Expr_Node_Visitor.h"

class Expr_Node
{
    public:
        Expr_Node();
        virtual ~Expr_Node();
        virtual int evaluate() = 0;
        virtual void accept(Expr_Node_Visitor & v) = 0;
    protected:
    private:



};

#endif // EXPR_NODE_H
