#ifndef EVAL_EXPR_TREE_H
#define EVAL_EXPR_TREE_H

#include "Expr_Node_Visitor.h"
#include "Addition_Node.h"
#include "Subtraction_Node.h"
#include "Multiply_Node.h"
#include "Division_Node.h"
#include "Mod_Node.h"
#include "Number_Node.h"
#include <stdexcept>

class Eval_Expr_Tree : public Expr_Node_Visitor
{
    public:
        Eval_Expr_Tree();
        virtual ~Eval_Expr_Tree();
        virtual void Visit_Addition_Node (Addition_Node & node);
        virtual void Visit_Subtraction_Node (Subtraction_Node & node);
        virtual void Visit_Multiply_Node (Multiply_Node & node);
        virtual void Visit_Division_Node (Division_Node & node);
        virtual void Visit_Mod_Node (Mod_Node & node);
        virtual void Visit_Number_Node (Number_Node & node);
        int result();
    protected:
    private:
        int result_;

};

#endif // EVAL_EXPR_TREE_H
