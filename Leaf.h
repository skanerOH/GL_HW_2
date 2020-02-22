#include <iostream>

class Leaf
{
public:
    int value;
    Leaf* root;
    Leaf* right;
    Leaf* left;

    Leaf(int);

    Leaf(int, Leaf*);

    ~Leaf();

    void Add(int);

    void PrintGrOrdered(Leaf*);
};

