#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node* Next;
};
Node* head;
void push_back(int num)
{
  Node* temp=head;
  while(temp->Next!=NULL)
  {
      temp=temp->Next;
  }
  temp->Next= new Node;
  Node* temp2=temp->Next;
  temp2->data=num;
  temp2->Next=NULL;
}
void print()
{
   Node* temp=head;
  while(temp->Next!=NULL)
  {
      temp=temp->Next;
      cout<<(temp->data)<<endl;
  }
}
int main()
{
    head=NULL;
    Node* LinkedList=new Node;
    head=LinkedList;
    push_back(5);
    push_back(6);
    push_back(7);
    push_back(11);
    push_back(12);
    print();
    return 0;
}
