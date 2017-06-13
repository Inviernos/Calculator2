#include "Subtraction_Node.h"

Subtraction_Node::Subtraction_Node()
{
    //ctor
}

Subtraction_Node::Subtraction_Node(Expr_Node * e1,Expr_Node * e2)
{
	this->left_ = e1;
	this->right_ = e2;
}

Subtraction_Node::~Subtraction_Node()
{
    //dtor
}

//execute the command to add two numbers
int Subtraction_Node::evaluate(int n1,int n2)
{
	return n1-n2;
}

void Subtraction_Node::accepted(Expr_Node_Visitor & v)
{
    v.Visit_Subtraction_Node(*this);
}

char Subtraction_Node::getID()
{
    return '-';
}

