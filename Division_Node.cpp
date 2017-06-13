#include "Division_Node.h"

Division_Node::Division_Node()
{
    //ctor
}

Division_Node::Division_Node(Expr_Node * e1,Expr_Node * e2)
{
	this->left_ = e1;
	this->right_ = e2;
}

Division_Node::~Division_Node()
{
    //dtor
}

int Division_Node::evaluate(int n1,int n2)
{
    if(n2 == 0)
	{
		throw std::exception();
	}
	else
	{
       return n1 / n2;
	}

}

void Division_Node::accepted(Expr_Node_Visitor & v)
{
    v.Visit_Division_Node(*this);
}

char Division_Node::getID()
{
    return '/';
}

