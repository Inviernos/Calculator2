#include "Binary_Expr_Node.h"

Binary_Expr_Node::Binary_Expr_Node()
{
    //ctor
}

Binary_Expr_Node::~Binary_Expr_Node()
{
    //dtor
}

int Binary_Expr_Node::evaluate()
{
    int n1 = left_->evaluate();
	int n2 = right_->evaluate();
	return this->evaluate(n1,n2);
}

void Binary_Expr_Node::accept(Expr_Node_Visitor & v)
{
    this->accepted(v);
}

void Binary_Expr_Node::setLeftChild(Expr_Node* c1)
{
    left_ = c1;
}

void Binary_Expr_Node::setRightChild(Expr_Node* c2)
{
    right_ = c2;
}

Expr_Node* Binary_Expr_Node::getLeftChild()
{
    return left_;
}

Expr_Node* Binary_Expr_Node::getRightChild()
{
    return right_;
}

