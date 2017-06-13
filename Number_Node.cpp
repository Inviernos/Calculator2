#include "Number_Node.h"

Number_Node::Number_Node(int n):
    n_(n)
{
    //ctor
}

Number_Node::~Number_Node()
{
    //dtor
}

int Number_Node::evaluate()
{
    return n_;
}

int Number_Node::getNumber()
{
    return n_;
}

void Number_Node::accept(Expr_Node_Visitor & v)
{
    v.Visit_Number_Node(*this);
}
