#include<iostream>
using namespace std;
///////////////////////using recursion to create a node in my program 

class node


{  
     public:
     int data;
    node*next;
    node(int value){
        data  =  value;
        next = NULL;

    }

};
node*createlinkedlist(int arr[],int index,int size){
    if(index==size){
        return NULL;
    }
    node*temp;
    temp = new node(arr[index]);
    temp->next = createlinkedlist(arr,index+1,size);    
    return temp;
}
int main(){
    int arr[5] = {10,20,30,40,50};
    node*head = createlinkedlist(arr,0,5);
    node*temp = head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    return 0;
}