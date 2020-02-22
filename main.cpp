#include "Leaf.h"

int main() {
    int a;
    std::cin>>a;
    Leaf tree=Leaf(a);
    while (true){
        std::cin>>a;
        if (a!=0)
            tree.Add(a);
        else
            break;
    }
    tree.PrintGrOrdered(&tree);
    return 0;
}
