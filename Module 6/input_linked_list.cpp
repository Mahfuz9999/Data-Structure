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
void print_linked_list(Node *head)
{
    cout<<"Your Linked List- "<<endl;
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
        
    }

}
int main()
{
    int val;
    Node* head = NULL;

    while(true)
    {
        
        cin>>val;
        if(val == -1) break;
        insert_a_tail(head,val);
        
    }
    print_linked_list(head);
    
    return 0;
}