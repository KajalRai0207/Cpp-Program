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
void insert(Node* &head,int val)
{
    Node* n=new Node(val);
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
void reverse_list(Node* &head)
{
    Node* prev=NULL;
    Node* currNode=head;
    Node* temp=NULL;
    while(currNode!=NULL)
    {
        temp=currNode->next;
        currNode->next=prev;
        prev=currNode;
        currNode=temp;
    }
    head=prev;
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
    insert(head,5);
    display(head);
    reverse_list(head);
    display(head);
}