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
void insert_at_head(Node* &head,int v)
{
    Node* newNode=new Node(v);
    newNode->next= head;
    head= newNode;
}
void delete_from_position(Node*head,int pos)
{
    Node* tmp=head;
    for (int i = 1; i <=pos-1; i++)
    {
        tmp = tmp->next;
    }
    Node* deleteNode=tmp->next;

    tmp->next=tmp->next->next;
    delete deleteNode;
    cout<<endl<<endl<<"Deleted Position"<<endl<<endl;
}
void delete_head(Node* &head)
{
    Node* deleteNode = head;
    head = head->next;
    delete deleteNode;
    cout<<endl<<endl<<"Deleted Head "<<endl<<endl;
}

int main()
{
    Node* head = NULL;

    while(true)
    {
        cout<<"Option 1- Insert a tail- "<<endl;
        cout<<"Option 2- Print linked list- "<<endl;
        cout<<"Option 3- Insert at any positoion- "<<endl;
        cout<<"Option 4- Inseart at head "<<endl;
        cout<<"Option 5- Deleete element "<<endl;
        cout<<"Option 6- Delete Head "<<endl;
        cout<<"Option 7- Terminate "<<endl;
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
            if(pos == 0)
            {
                insert_at_head(head,v);
                
            }
            else
            {
                insert_at_position(head,pos,v);
            }
            

        }
        else if (op ==4)
        {
            int v;
            cout<<"Enter Value-"<<endl;
            cin>>v;
            insert_at_head(head,v);
        }
        else if (op ==5)
        {
            int pos;
            cout<<"Enter Position-"<<endl;
            cin>>pos;
            delete_from_position(head,pos);
        }
        else if (op ==6)
        {
            delete_head(head);
        }
        else if (op ==7)
        {
            
            break;
        }
    }


    return 0;
}