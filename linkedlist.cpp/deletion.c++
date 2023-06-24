#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};
void insert(Node* &head,int data)
{
    Node* n=new Node(data);
    if(head==NULL)
    {
        head=n;
    }
    else
    {
        Node* temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=n;
    }
}
void deleteafterdata(Node* &head,int d)
{
    if(head==NULL)
    {
        cout<<"no node present\n";
    }
    else{
        Node* temp=head;
        Node* x=NULL;
        while(temp->next!=NULL && temp->data!=d)
        {
            temp=temp->next;
        }
        if(temp->next==NULL)
        {
            cout<<"not found";
        }
        else{
            x=temp->next->next;
            temp->next->next=NULL;
            temp->next=x;
            
        }
    }
}
void display(Node* head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    Node* head=NULL;
    insert(head,1);
    insert(head,2);
    insert(head,3);
    insert(head,4);
    display(head);
    deleteafterdata(head,2);
    display(head);
    return 0;
}