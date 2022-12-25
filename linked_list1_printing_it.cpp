#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node *next;

    node(int data)
    {
        this->data=data;
        next=NULL;
    }
};
void print(node *headi) // always if u get the head , u get everything of the linked list
{
    node *temp=headi; // so that headi wont become NULL since then we cannot use it for other purposes
    while(temp!=NULL)  // but if u dont want to print the last node , write temp->next!=NULL
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    //if u dont use temp ,when u reach here the value of headi will be NULL
}

int main()
{
    //create a linked list with 5 nodes statically
    node n1(1);
    node n2(2);
    node n3(3);
    node n4(4);
    node n5(5);
    node *head=&n1;

    // we have to connect these nodes
    n1.next=&n2;
    n2.next=&n3;
    n3.next=&n4;
    n4.next=&n5;
    print(head); // here head is passed by value , so head value here will not be changed
    return 0;
}