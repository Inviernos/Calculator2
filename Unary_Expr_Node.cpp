#include "Unary_Expr_Node.h"

Unary_Expr_Node::Unary_Expr_Node()
{
    //ctor
}

Unary_Expr_Node::Unary_Expr_Node(Expr_Node* c):
    child_(c)
{
    //ctor
}

Unary_Expr_Node::~Unary_Expr_Node()
{
    //dtor
}

int Unary_Expr_Node::evaluate()
{
    if (this->child_)
	{
		return this->child_->evaluate();
	}
}

void Unary_Expr_Node::accept(Expr_Node_Visitor & v)
{
    //make a visitor method for unary.
}
