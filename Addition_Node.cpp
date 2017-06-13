#include "Addition_Node.h"

Addition_Node::Addition_Node()
{
    //ctor
}

Addition_Node::Addition_Node(Expr_Node*e1,Expr_Node*e2)
{
    this->left_ = e1;
    this->right_ = e2;
}

Addition_Node::~Addition_Node()
{
    //dtor
}

int Addition_Node::evaluate(int n1,int n2)
{
    return n1+n2;
}

void Addition_Node::accepted(Expr_Node_Visitor & v)
{
    v.Visit_Addition_Node(*this);
}

char Addition_Node::getID()
{
    return '+';
}

