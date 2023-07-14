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

    cout<<endl<<endl<<"Inserted at tail."<<endl<<endl;
}
void print_linked_list(Node *head)
{
    cout<<"Your Linked List- "<<endl;
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout<<tmp->val<<" "<<endl;
        tmp = tmp->next;
        
    }

}
void insert_at_position(Node* head,int pos,int v)
{
    Node * newNode = new Node(v);
    Node* tmp = head;

    for(int i=1;i<=pos-1;i++)
    {
        tmp = tmp->next;

    }
    newNode->next=tmp->next;
    tmp->next= newNode;
cout<<endl<<endl<<"Inserted a new node"<<endl<<endl;
}
int main()
{
    Node* head = NULL;

    while(true)
    {
    cout<<"Option 1- Insert a tail- "<<endl;
    cout<<"Option 2- Print linked list- "<<endl;
    cout<<"Option 3- Insert at any positoion- "<<endl;
    cout<<"Option 4- Terminate "<<endl;
    int op;
    cin>>op;
    
    if(op ==1)
    {
        int v;
        cout<<"Enter a value- "<<endl;
        cin>>v;
        insert_a_tail(head,v);

    }
    
    else if( op == 2)
    {
        print_linked_list(head);
    }
    else if(op ==3)
    {
        int pos,v;
        cout<<"Enter Position-"<<endl;
        cin>>pos;
        cout<<"Enter Value-"<<endl;
        cin>>v;
        insert_at_position(head,pos,v);

    }
    else if (op ==4)
    {
        
        break;
    }
    }


    return 0;
}