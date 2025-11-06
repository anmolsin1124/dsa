#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node*next;
    node(int value){
        data = value;
        next+=NULL;
    }

};
int main (){

    //////////////////////crate node
//     node*head;
//     head = new node(4);
//     head->data=4;
//     head->next= NULL;

// cout<<head->data;
node*head;
int temp;

if(head==NULL){
    head  = new node(45);
}else{
    node*temp;
    temp= new node(454);
    temp->next= head;
    head = temp;

}
cout<<head->data<<endl;
cout<<head->next;
    return 0;
}