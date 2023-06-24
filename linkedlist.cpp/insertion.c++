#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
void insertAtTail(Node* &head,int val)
{
    Node* n=new Node(val);
    if(head==NULL){
        head=n;
    }
    else{
        Node* temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=n;
    }

}
void insertAtstart(Node* &head,int val)
{
    Node* n=new Node(val);
    if(head==NULL)
    {
        head=n;
    }
    else{
        Node* temp=head;
        n->next=temp;
        head=n;
    }

}
void insertAtpos(Node* &head,int val,int pos)
{
    Node* n=new Node(val);
    if(head==NULL){
        head=n;
    }
    else{
        int count=1;
        Node* temp=head;
        while(temp->next!=NULL && (count+1)!=pos){
            temp=temp->next;
            count++;
        }
        if(temp->next==NULL){
            cout<<"Not found";
        }
        else {
            n->next=temp->next;
            temp->next=n;    
        }   
    }
}
void display(Node* head)
{
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main()
{
    Node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    display(head);
    insertAtstart(head,4);
    insertAtstart(head,5);
    display(head);
    insertAtpos(head,100,3);
    display(head);
}