// #include<bits/stdc++.h>
// using namespace std;
// struct Node
// {
//     int data;
//     struct Node *right,*left;
//     public:
//     Node(int val)
//     {
//         data=val;
//         right=NULL;
//         left=NULL;

//     }
// };
// int height(Node* root)
// {
//     if(root==NULL)
//     {
//         return 0;
//     }
//     return max(height(root->left),height(root->right))+1;
// }
// int diameter(Node* root)
// {
//     if(root==NULL)
//     {
//         return 0;
//     }
//     int left_height=height(root->left);
//     int right_height=height(root->right);
//     int currdiameter=left_height+right_height+1;


//     int left_diameter=diameter(root->left);
//     int right_diameter=diameter(root->right);

//     return max(currdiameter,max(left_diameter,right_diameter));
// }
// int main()
// {
//     Node* root=new Node(5);
//     root->left=new Node(6);
//     root->left->left=new Node(9);
//     root->left->right=new Node(1);
//     root->left->left->left=new Node(2);
//     root->left->right->right=new Node(1);
//     cout<<diameter(root);
// }

                        // O(N)

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
int diameter(Node* root , int * height)
{
    int lh=0,rh=0;
    if(root==NULL)
    {
        *height=0;
        return 0;
    }
    int left_diameter=diameter(root->left,&lh);
    int right_diameter=diameter(root->right,&rh);
    *height=max(lh,rh)+1;
    return max(lh+rh+1,max(left_diameter,right_diameter));
}
int main()
{
    Node* root=new Node(5);
    root->left=new Node(6);
    root->left->left=new Node(9);
    root->left->right=new Node(1);
    root->left->left->left=new Node(2);
    root->left->right->right=new Node(1);
    int height=0;
    cout<<diameter(root,&height);
}