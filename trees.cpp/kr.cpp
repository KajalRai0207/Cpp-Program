/* C++ program to check if a tree
is height-balanced or not */
#include <bits/stdc++.h>
using namespace std;
#define bool int
 
/* A binary tree node has data,
pointer to left child and
a pointer to right child */
class node {
public:
    int data;
    node* left;
    node* right;
};
bool isBalanced(node* root, int* height)
{
    int lh = 0, rh = 0;
    int l = 0, r = 0;
    if (root == NULL) {
        *height = 0;
        return 1;
    }
    l = isBalanced(root->left, &lh);
    cout<<"lh="<<lh<<endl;
    r = isBalanced(root->right, &rh);
    *height = (lh > rh ? lh : rh) + 1;
    if (abs(lh - rh) >= 2)
        return 0;
    else
        return l && r;
}
node* newNode(int data)
{
    node* Node = new node();
    Node->data = data;
    Node->left = NULL;
    Node->right = NULL;
 
    return (Node);
}
 
// Driver code
int main()
{
    int height = 0;
 
    /* Constructed binary tree is
            1
            / \
            2 3
            / \ /
            4 5 6
            /
            7
    */
    node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->left->left->left = newNode(7);
 
    if (isBalanced(root, &height))
        cout << "Tree is balanced";
    else
        cout << "Tree is not balanced";
 
    return 0;
}