#ifndef TREE_H
#define TREE_H
#include "Node.h"
#include <iostream>

using namespace std;

class Tree{
    public:
        Tree();
        Node * root;
        int cant;
    private:
        void insertNode(Node * n);
        void insertNode(Node ** sRoot, Node * n);
};

#endif // TREE_H
