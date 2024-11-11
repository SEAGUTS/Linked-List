#include <iostream>
using namespace std;
class node
{
    public:
    int data;
    node *next;
    node(int simen)
    {
        data = simen;
        next = NULL;
    }
};
void insert(node*&head,int d)
{
    node *temp = new node(d);
    temp -> next = head;
    head = temp;
}
void print(node*&head)
{
    node *temp = head;
    while (temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp = temp->next;
    }   
}
int main()
{
    node *node1 = new node(13);
    node *head = node1;
    insert(head,10);
    print(head);
    return 0;
}