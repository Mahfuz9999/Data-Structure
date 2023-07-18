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

int main()
{
    Node * head = NULL;
    Node * tail = NULL;

    Node * head2 = NULL;
    Node * tail2 = NULL;

    while(true)
    {
        int val;
        int pos;
        cin>>val;
        if( val == -1)
        break;
        insert_tail(head,tail,val);
         
    }
    while(true)
    {
        int val;
        int pos;
        cin>>val;
        if( val == -1)
        break;
        insert_tail(head2,tail2,val);
         
    }
    bool test=false;

    int sz= size(head);
    int sz2= size(head2);

    if ( sz != sz2)
    {
        test = true;
    }
    else{
        Node* tmp = head;
        Node* tmp2 = head2;

        while (tmp != NULL )
        {
            if(tmp->val != tmp2->val)
            {
                test= true;
            }
            
            tmp= tmp->next;
            tmp2 = tmp2->next;
        }


    }
    
    
    if(test == true )
    {
        cout<<"NO";
    }
    else
    {
        cout<<"YES";
    }
    
    return 0;
}