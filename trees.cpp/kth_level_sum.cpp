#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *right,*left;
    public:
    Node(int val)
    {
        data=val;
        right=NULL;
        left=NULL;
    }
};
int sum(Node* root,int k)
{
    if(root==NULL)
    {
        return -1;
    }
    int level=0,sum=0;
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        Node* node=q.front();
        q.pop();
        if(node!=NULL)
        {
            if(level==k)
            {
                sum+=node->data;
            }
            cout<<node->data<<" ";
            if(node->left!=NULL)
            {
                q.push(node->left);
            }
            if(node->right!=NULL)
            {
                q.push(node->right);
            }
        }
        else if(!q.empty())
        {
            level++;
            q.push(NULL);
        }
    }
    cout<<"\n Sum = ";
    return sum;
}
int main()
{
    Node* root=new Node(5);
    root->left=new Node(6);
    root->right=new Node(3);
    root->left->left=new Node(9);
    root->left->right=new Node(1);
    root->right->left=new Node(2);
    root->right->right=new Node(1);
    cout<<"Tree :";
    cout<<sum(root,2)<<" "<<endl;
    return 0;
}