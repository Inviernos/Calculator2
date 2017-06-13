#include "Expr_Tree.h"


Expr_Tree::Expr_Tree()
{
    //ctor
}

Expr_Tree::~Expr_Tree()
{
    //dtor
}

Expr_Node* Expr_Tree::getRoot()
{
    return root;
}

void Expr_Tree::setRoot(Expr_Node* node)
{
    root = node;
}

int Expr_Tree::eval()
{
    //Get the root of the tree
    Expr_Node * expr_tree = root;

    Eval_Expr_Tree eval;

    //Traverse through the tree
    expr_tree->accept (eval);

    return eval.result();
}
