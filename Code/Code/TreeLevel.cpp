#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
#include "common/Node.h"

int main()
{
   Node* root = new Node();
   Node* left = new Node();
   Node* right = new Node();
   left->data = 3;
   right->data = 4;
   root->data = 1;
   root->left = left;
   root->right = right;

   int level = treeLevel(root);
   std::cout<<"tree Level is "<< level << std::endl;
   delete right;
   delete left;
   delete root;
   
}