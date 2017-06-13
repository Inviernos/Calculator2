#ifndef EXPR_BUILDER_H
#define EXPR_BUILDER_H



class Expr_Builder
{
    public:
        Expr_Builder();
        virtual ~Expr_Builder();
        virtual void start_expression(void) = 0;
        virtual void build_number(int n) = 0;
        virtual void build_add_operand(void) = 0;
        virtual void build_subtract_operand(void) = 0;
        virtual void build_multiply_operand(void) = 0;
        virtual void build_division_operand(void) = 0;
        virtual void build_mod_operand(void) = 0;
        virtual void finish_expression(void) = 0;

};

#endif // EXPR_BUILDER_H
