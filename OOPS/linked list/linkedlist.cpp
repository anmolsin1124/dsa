// #include<iostream>
// using namespace std;
// class node{
//     public:
//     int data;
//  node*next;

// };

// int main(){
//  node*head = new node();
//  node*second = new node();
//  node*third = new node();
//  node *forth = new node();
//  head-> data = 10;
//  head->next = second;
//  second->data = 20;
//  second->next = third;
//  third->data = 30;
//  third->next = forth;
//  forth->data = 40;
//  forth->next = NULL;

//  node*temp = head;
//  while (temp!=NULL)
//  {
//     cout<<temp->data<<" ";
//     temp = temp->next;
//     //
//  }

//     return 0;
// }
// #include <iostream>
// using namespace std;
// class node
// {
// public:
//     int data;
//     node *next;
//     node(int value){
//         data = value;
//         next+=NULL;

//     }
// };

// int main()
// {
//    node*head;
//    if (head==NULL)
//    {
//     head = new node(10);

//    }
//    else
//    {
//     node*temp;
//     temp = new node(20);
//     temp->next = head;
//     head = temp;

//    }
//    cout<<head->data;

//     return 0;
// }
// #include <iostream>
// using namespace std;
// class node
// {
// public:
//     int data;
//     node *next;
//     node(int value)
//     {
//         data = value;
//         next += NULL;
//     }
// };

// int main()
// {
//     int arr[5] = {4, 6, 7, 8, 9};
//     node *head;
//     head = NULL;
//     for (int i = 0; i < 5; i++)
//     {
//         if (head == NULL)
//         {
//             head = new node(arr[i]);
//         }
//         else
//         {
//             node *temp;
//             temp = new node(arr[i]);
//             temp->next = head;
//             head = temp;
//         }
//     }
//     node *temp = head;

//     while (temp != NULL)
//     {
//         cout << temp->data << endl;
//         temp = temp->next;
//         if (temp !=NULL)
//         {
//             break;
//         }
        
//     }

//     return 0;
// }
#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int value)
    {
        data = value;
        next = NULL;
    }
};

int main()
{
    // node *head = NULL;
    // node *tail = NULL;
    // int arr[4] = {4, 6, 8, 7};

    // for (int i = 0; i < 4; i++)
    // {
    //     node *temp = new node(arr[i]);

    //     if (head == NULL)
    //     {
    //         // first node
    //         head = temp;
    //         tail = temp;
    //     }
    //     else
    //     {
    //         // add at end
    //         tail->next = temp;
    //         tail = temp;
    //     }
    // }

    // // print list
    // node *current = head;
    // while (current != NULL)
    // {
    //     cout << current->data << " -> ";
    //     current = current->next;
    // }
    // cout << "NULL" << endl;
    /////////////////////////////////////////////////////////insert
    // int arr[5] = {10, 20, 30, 40, 50};
    // node *head ;
    // head = NULL;

    // for (int i = 0; i < 5; i++)
    // {
    //     if (head ==NULL)
    //     {
    //         head = new node(arr[i]);
    //     }
    //     else{
    //         node* temp;
    //         temp = new node(arr[i]);
    //         temp->next = head;
    //         head = temp;
    //     }
    // }
        
    //     node* temp = head;
    //     while (temp != NULL)
    //     {
    //         cout << temp->data <<" ->";
    //         temp = temp->next;
    //     }
///////////////////////////////////////////////////////insert in end
        int arr[5] = {10, 20, 30, 40, 50};

        node *head ;
        head = NULL;
        head = new node(15); // initial node
        node*second = new node(25);
        head->next = second;
        for (int i = 0; i < 5; i++)
        {
            if (head==NULL)
            {
                head = new node(arr[i]);
            }
            else{
                node*tail = second;
                while (tail->next!=NULL)
                {
                    tail = tail->next;
                }
                node* temp = new node(arr[i]);
                tail->next = temp;
            }
            
        }
        node* temp = head;
        while (temp != NULL)
        {
            cout << temp->data <<" ->";
            temp = temp->next;
        }
        
        return 0;
    }


