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
void print_linked_list(Node* head)
{
    Node* tmp = head;
    while (tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp= tmp->next;
    }
    cout<<endl;
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
            if(i->val<j->val)
            {
                swap(i->val,j->val);
            }
        }
        
    }


    int sz = size(head);


    if(sz==1){
        cout<<head->val;

    }
    else if(sz==2){
        cout<<head->val<<" "<<head->next->val;

    }
    else if(sz % 2 == 1){
        Node* tmp = head;
        for (int i = 1; i < (sz/2); i++)
        {
            tmp = tmp->next;

        }
        cout<<tmp->next->val;
        
    }
    else if(sz % 2 == 0)
    {
        Node* tmp = head;
        for (int i = 1; i < (sz/2); i++)
        {
            tmp = tmp->next;
 
        }
        cout<<tmp->val<<" "<<tmp->next->val;;
    }

    
    
    return 0;
}