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
    Node * head = NULL;
    Node * tail = NULL;

    while(true)
    {
        int val;
        int pos;
        cin>>val;
        if( val == -1)
        break;
        insert_tail(head,tail,val);
        
    }
    for (Node* i = head; i->next != NULL; i=i->next)
    {
        for (Node* j= i->next; j != NULL; j = j->next)
        {
            if(i->val>j->val)
            {
                swap(i->val,j->val);
            }
        }
        
    }



    return 0;
}