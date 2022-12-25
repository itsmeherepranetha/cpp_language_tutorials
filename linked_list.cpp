#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node *next;

    //constructor
    node(int data)
    {
        this->data=data;
        next=NULL;
    }
};
int main()
{
    //statically creating an object of class node
    node n1(1); // this creates an object which containd an integer and an adress pointing to NULL
    node *head=&n1; // this is the head of the linked list
    //to the user  head will be directly accessible , otherwise the linked list will be lost
    
    node n2(2);

    //creating a linked list , like    (1,&n2) ---> (2,null) , where (1,&n2) is the head(first node) and (2,null) is the tail node(last node)
    // now i need to connect these two nodes , which is n1 stores address of n2 ,and the node n2 stores NULL
    n1.next=&n2;

    cout<<n1.data<<" "<<n2.data<<endl;
    cout<<n1.next<<" "<<n2.next<<endl;

    // to print the data in n1
    cout<<head->data<<endl; // n1.data


    //dynamically creating a node
    node *n3=new node(10); // n3 contains the address of the node
    node *n4=new node(20);
    head=n3;
    //now we want connect n3 and n4
    (*n3).next=n4; // not &n4...
    // or n3->next=n4;
    return 0;
}