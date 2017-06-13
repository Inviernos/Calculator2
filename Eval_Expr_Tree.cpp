#include "Eval_Expr_Tree.h"

Eval_Expr_Tree::Eval_Expr_Tree()
{
    //ctor
}

Eval_Expr_Tree::~Eval_Expr_Tree()
{
    //dtor
}

void Eval_Expr_Tree::Visit_Addition_Node(Addition_Node& node)
{
    Expr_Node* left = node.getLeftChild();
    Expr_Node* right = node.getRightChild();


    int num1;
    int num2;

  // COMMENT: You are not using the visitor pattern correctly.
  // Instead, you have mixed the visitor with the composite version
  // of evaluate. You are to visit the left and right node via the
  // accept method to correctly implement the visitor pattern.
  // (e.g., left->accept (*this))

  // I address this comment by visiting left and right node of tree
  // so that they can get the value from their left and right child.
  // Then do their operation to get the result.


    left->accept(*this);
    num1 = this->result();

    right->accept(*this);
    num2 = this->result();

    result_ = num1 + num2;

}

void Eval_Expr_Tree::Visit_Subtraction_Node(Subtraction_Node& node)
{
    Expr_Node* left = node.getLeftChild();
    Expr_Node* right = node.getRightChild();

    int num1;
    int num2;

  // COMMENT: You are not using the visitor pattern correctly.
  // Instead, you have mixed the visitor with the composite version
  // of evaluate. You are to visit the left and right node via the
  // accept method to correctly implement the visitor pattern.
  // (e.g., left->accept (*this))

  // I address this comment by visiting left and right node of tree
  // so that they can get the value from their left and right child.
  // Then do their operation to get the result.

    right->accept(*this);
    num2 = this->result();

    left->accept(*this);
    num1 = this->result();

    result_ = num1 - num2;
}

void Eval_Expr_Tree::Visit_Multiply_Node(Multiply_Node& node)
{
    Expr_Node* left = node.getLeftChild();
    Expr_Node* right = node.getRightChild();

    int num1;
    int num2;

  // COMMENT: You are not using the visitor pattern correctly.
  // Instead, you have mixed the visitor with the composite version
  // of evaluate. You are to visit the left and right node via the
  // accept method to correctly implement the visitor pattern.
  // (e.g., left->accept (*this))

  // I address this comment by visiting left and right node of tree
  // so that they can get the value from their left and right child.
  // Then do their operation to get the result.

    left->accept(*this);
    num1 = this->result();

    right->accept(*this);
    num2 = this->result();

    result_ = num1 * num2;

}

void Eval_Expr_Tree::Visit_Division_Node(Division_Node& node)
{
    Expr_Node* left = node.getLeftChild();
    Expr_Node* right = node.getRightChild();

    int num1;
    int num2;

  // COMMENT: You are not using the visitor pattern correctly.
  // Instead, you have mixed the visitor with the composite version
  // of evaluate. You are to visit the left and right node via the
  // accept method to correctly implement the visitor pattern.
  // (e.g., left->accept (*this))

  // I address this comment by visiting left and right node of tree
  // so that they can get the value from their left and right child.
  // Then do their operation to get the result.

    right->accept(*this);
    num2 = this->result();

    left->accept(*this);
    num1 = this->result();

    //You can't divide by zero
    if(num2 != 0)
    {
        result_ = num1 / num2;
    }
    else
    {
        throw std::exception();
    }



}

void Eval_Expr_Tree::Visit_Mod_Node(Mod_Node& node)
{
    Expr_Node* left = node.getLeftChild();
    Expr_Node* right = node.getRightChild();

    int num1;
    int num2;

  // COMMENT: You are not using the visitor pattern correctly.
  // Instead, you have mixed the visitor with the composite version
  // of evaluate. You are to visit the left and right node via the
  // accept method to correctly implement the visitor pattern.
  // (e.g., left->accept (*this))

  // I address this comment by visiting left and right node of tree
  // so that they can get the value from their left and right child.
  // Then do their operation to get the result.

    right->accept(*this);
    num2 = this->result();

    left->accept(*this);
    num1 = this->result();

    result_ = num1 % num2;
}

void Eval_Expr_Tree::Visit_Number_Node(Number_Node& node)
{
  // COMMENT: You are not using the visitor pattern correctly.
  // Instead, you have mixed the visitor with the composite version
  // of evaluate. Here, you need to accumulate the state so the
  // other visit method can use the number.

  // I address this comment by getting the number from the node
  // and then set it equal to result. I also use result in
  // all the other visit node methods so that the value can
  // be used by the other nodes.

    result_ = node.getNumber();
}

int Eval_Expr_Tree::result()
{
    return this->result_;
}
