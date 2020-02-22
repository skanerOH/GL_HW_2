#include "Leaf.h"

Leaf::Leaf(int val)
{
    this->value=val;
    this->left= nullptr;
    this->right= nullptr;
    this->root= nullptr;
}

Leaf::Leaf(int val, Leaf* parent)
{
    this->value = val;
    this->root = parent;
    this->right = nullptr;
    this->left = nullptr;
}

Leaf::~Leaf()
{
    if (right)
        delete right;
    if (left)
        delete left;
}

void Leaf::Add(int val)
{
    if (val>this->value)
    {
        if (this->right)
        {
            right->Add(val);
        } else
        {
            right=new Leaf(val, this);
        }
    }
    else if (val<this->value)
    {
        if (this->left)
        {
            left->Add(val);
        } else
        {
            left=new Leaf(val, this);
        }
    }
}

void Leaf::PrintGrOrdered(Leaf* currleaf) {

    if (currleaf->left){
        PrintGrOrdered(currleaf->left);
    }

    std::cout << currleaf->value << " ";

    if (currleaf->right){
        PrintGrOrdered(currleaf->right);
    }

}
