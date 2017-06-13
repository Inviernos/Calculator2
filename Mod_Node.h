#ifndef MOD_NODE_H
#define MOD_NODE_H

#include "Binary_Expr_Node.h"


class Mod_Node : public Binary_Expr_Node
{
    public:
        Mod_Node();
        Mod_Node(Expr_Node* e1,Expr_Node*e2);
        virtual ~Mod_Node();
        virtual int evaluate(int n1,int n2);
        virtual void accepted(Expr_Node_Visitor & v);
        virtual char getID();

        // COMMENT: The accessor method should be on the binary node class.

        // I address this comment by putting it in the binary node class
    protected:
    private:
};

#endif // MOD_NODE_H
