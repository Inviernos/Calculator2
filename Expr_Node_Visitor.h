#ifndef EXPR_NODE_VISITOR_H
#define EXPR_NODE_VISITOR_H

class Addition_Node;
class Subtraction_Node;
class Multiply_Node;
class Division_Node;
class Mod_Node;
class Number_Node;

class Expr_Node_Visitor
{
    public:
        Expr_Node_Visitor();
        virtual ~Expr_Node_Visitor();
        virtual void Visit_Addition_Node (Addition_Node & node) = 0;
        virtual void Visit_Subtraction_Node (Subtraction_Node & node)=0;
        virtual void Visit_Multiply_Node (Multiply_Node & node)=0;
        virtual void Visit_Division_Node (Division_Node & node)=0;
        virtual void Visit_Mod_Node (Mod_Node & node)=0;
        virtual void Visit_Number_Node (Number_Node & node)=0;
    protected:
    private:
};

#endif // EXPR_NODE_VISITOR_H
