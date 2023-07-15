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

void insert_a_tail(Node *&head,int val)
{
    Node * newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        return;
    }

    Node * tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;

    }
    tmp->next= newNode;
}
void print_linked_list(Node *head,int sz)
{
    
    Node *tmp = head;
    while (tmp != NULL)
    {
        sz++;
        tmp = tmp->next;
        
    }
    cout<<sz<<endl;
}
int main()
{
    int val;
    Node* head = NULL;
    int sz=0;

    while(true)
    {
        
        cin>>val;
        if(val == -1) break;
        insert_a_tail(head,val);
        
    }
    print_linked_list(head,sz);
    
    return 0;
}