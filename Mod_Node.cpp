#include "Mod_Node.h"

Mod_Node::Mod_Node()
{
    //ctor
}

Mod_Node::Mod_Node(Expr_Node * e1,Expr_Node * e2)
{
	this->left_ = e1;
	this->right_ = e2;
}

Mod_Node::~Mod_Node()
{
    //dtor
}

int Mod_Node::evaluate(int n1,int n2)
{
    return n1 % n2;
}

void Mod_Node::accepted(Expr_Node_Visitor & v)
{
    v.Visit_Mod_Node(*this);
}

char Mod_Node::getID()
{
    return '%';
}

