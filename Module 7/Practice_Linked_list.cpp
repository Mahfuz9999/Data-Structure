#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;
    
    Node(int val)
    {
        this->val=val;
        this->next=NULL;

    }

};

void insert_at_position(Node* head,int pos,int val)
{
    Node* tmp = head;
    Node* newNode = new Node(val);
    for (int i = 1; i <= pos-1; i++)
    {
        tmp = tmp->next;

    }
    newNode->next= tmp->next;
    tmp->next= newNode;
}
void print_linked_list(Node* head)
{
    Node* tmp = head;
    while (tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp= tmp->next;
    }
    
}
int size(Node * head)
{
    Node * tmp = head;
    int sz=0;
    while( tmp != NULL)
    {
        sz++;
        tmp = tmp->next;
    }
    return sz;
}
void insert_head(Node *&head,int v)
{
    Node * newNode= new Node(v);
    if(head = NULL)
    {
        head = newNode;
    }
    else{
        newNode->next = head;
        head = newNode;
    }
}
void insert_tail(Node * &head,Node *& tail,int v)
{
    Node* newNode = new Node(v);
    if(head== NULL)
    {
        head = newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail = newNode;
}
void delete_node(Node* head, int pos)
{
    Node* tmp = head;
    
    for (int i = 1; i <= pos-1; i++)
    {
        tmp = tmp->next;
    }
    Node* deleteNode = tmp->next;
    tmp->next= tmp->next->next;
    delete deleteNode;
    

}
int main()
{
    Node* head=new Node(10);
    Node* a=new Node(20);
    Node* b=new Node(30);
    Node* c=new Node(40);
    Node* d=new Node(50);
    Node* e=new Node(60);
    Node* f=new Node(70);
    Node* tail = f;


    head->next=a;
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    e->next=f;

    
    print_linked_list(head);



    return 0;
}