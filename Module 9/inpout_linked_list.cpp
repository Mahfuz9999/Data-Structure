#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;
    Node* prev;
    
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
        this->next=NULL;
    }

};
void print_front(Node* head)
{
    Node*tmp = head;
    while(tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}
void print_reverse(Node* tail)
{
    Node* tmp = tail;
    while(tmp != NULL)
    { 
        cout<<tmp->val<<" ";
        tmp = tmp->prev;
    }
    cout<<endl;
}
void insert_at_position(Node* head,int pos,int val)
{
    Node* newNode = new Node(val);
    Node* tmp = head;
    for (int i = 1; i <= (pos-1); i++)
    {
        tmp = tmp->next;
    }
    newNode->next= tmp->next;
    tmp->next= newNode;
    newNode->prev = tmp;
    newNode->next->prev = newNode;
    
}
void insert_head(Node* &head,Node*& tail,int val)
{
    Node* newNode = new Node(val);
    if( head == NULL)
    {
        head= newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;

    head = newNode;
}
int size(Node* head)
{
    Node * tmp = head;
    int cnt=0;
    while(tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}
void insert_tail(Node* &head,Node* &tail,int val)
{
    Node* newNode = new Node(val);
    if (tail == NULL)
    {
        head= newNode;
        tail= newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail= newNode;
}
void delete_node(Node* head,int pos)
{
    Node* tmp = head;
    Node* deleteNode = NULL;

    for (int i = 1; i < (pos-1); i++)
    {
        tmp = tmp->next;
    }
    deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    tmp->next->prev= tmp;
    delete deleteNode;

}
void delete_tail(Node* tail)
{
    Node* deleteNode = tail;
    tail = tail->prev;
    tail->next= NULL;
    delete deleteNode;
    
}
void delete_head(Node* head)
{
    Node * deleteNode = head;
    head= head->next;
    delete deleteNode;
    head->prev= NULL;

}
int main()
{
    Node * head = NULL;
    Node * tail = NULL;
    int val;
    while(true){
        cin>>val;
        if(val == -1) break;

        insert_tail(head,tail,val);
    }
    print_front(head);
 
    
    return 0;
} 