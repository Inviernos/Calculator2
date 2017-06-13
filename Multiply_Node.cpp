#include "Multiply_Node.h"

Multiply_Node::Multiply_Node()
{
    //ctor
}

Multiply_Node::Multiply_Node(Expr_Node * e1,Expr_Node * e2)
{
	this->left_ = e1;
	this->right_ = e2;
}

Multiply_Node::~Multiply_Node()
{
    //dtor
}



//execute the command to add two numbers
int Multiply_Node::evaluate(int n1,int n2)
{
	return n1*n2;
}

void Multiply_Node::accepted(Expr_Node_Visitor & v)
{
    v.Visit_Multiply_Node(*this);
}

char Multiply_Node::getID()
{
    return '*';
}

