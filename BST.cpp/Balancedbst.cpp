#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *right,*left;
    public:
    Node(int val)
    {
        data=val;
        right=NULL;
        left=NULL;
    }
};
Node* BalancedBST(int array[],int start,int end)
{
    if(start>end)
    {
        return NULL;
    }
    int mid=(start+end)/2;
    Node* root=new Node(array[mid]);
    root->left=BalancedBST(array,start,mid-1);
    root->right=BalancedBST(array,mid+1,end);
    return root;
}
void printPreorder(Node* root)
{
    if(root==NULL)
    {
        return ;
    }
    cout<<root->data<<" ";
    printPreorder(root->left);
    printPreorder(root->right);
}
int main()
{
    int array[]={1,2,3,4,5,6,7};
    Node* root=BalancedBST(array,0,6);
    printPreorder(root);    
    return 0;
}