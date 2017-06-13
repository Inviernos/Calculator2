#ifndef EXPR_TREE_BUILDER_H
#define EXPR_TREE_BUILDER_H

#include "Expr_Builder.h"
#include "Expr_Tree.h"
#include "Binary_Expr_Node.h"
#include "Stack.h"

class Expr_Tree_Builder : public Expr_Builder
{
    public:
        Expr_Tree_Builder();
        virtual ~Expr_Tree_Builder();
        virtual void start_expression(void);
        virtual void check(Binary_Expr_Node*);
        virtual void build_number(int n);
        virtual void build_add_operand(void);
        virtual void build_subtract_operand(void);
        virtual void build_multiply_operand(void);
        virtual void build_division_operand(void);
        virtual void build_mod_operand(void);
        virtual void finish_expression(void);
        Expr_Tree * get_expression(void);
    protected:
    private:
        Expr_Tree * tree;
        Binary_Expr_Node * temp1;
        Stack<Expr_Node *> list1;
        Stack<Binary_Expr_Node *> list2;
};

#endif // EXPR_TREE_BUILDER_H
