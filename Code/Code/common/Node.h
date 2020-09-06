
#include <iostream>


struct Node
{
    int data;
    Node* left;
    Node* right;
};
 
 //获取树的深度
int treeLevel(Node* node)
{
    if(NULL == node)
    {
        return 0;
    }
    int left = treeLevel(node->left);
    int right = treeLevel(node->right);
    return left > right ? left + 1 : right + 1;
}