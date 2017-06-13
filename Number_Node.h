#ifndef NUMBER_NODE_H
#define NUMBER_NODE_H

#include "Expr_Node.h"


class Number_Node : public Expr_Node
{
    public:
        Number_Node(int n);
        virtual ~Number_Node();
        virtual int evaluate();
        virtual void accept(Expr_Node_Visitor & v);
        virtual int getNumber();
    protected:
    private:
        int n_;
};

#endif // NUMBER_NODE_H
