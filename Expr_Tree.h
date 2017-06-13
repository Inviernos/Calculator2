#ifndef EXPR_TREE_H
#define EXPR_TREE_H

#include "Expr_Node.h"
#include "Eval_Expr_Tree.h"

class Expr_Tree
{
    public:
        Expr_Tree();
        ~Expr_Tree();
        Expr_Node* getRoot();
        void setRoot(Expr_Node* node);
        int eval();
    protected:
    private:
        Expr_Node * root;
};

#endif // EXPR_TREE_H
