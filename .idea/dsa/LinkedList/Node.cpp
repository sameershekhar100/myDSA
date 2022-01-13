//
// Created by LENOVO on 24-05-2021.
//

#include "Node.h"
#include "bits/stdc++.h"

using namespace std;

//function for taking input and making a Linked List
Node *takeInput() {
    int data;
    cin >> data;
    Node *head = NULL;
    Node *tail = NULL;

    while (data != -1) {
        Node *newnode = new Node(data);
        if (head == NULL) {
            head = newnode;
            tail = newnode;
        } else {
            tail->next = newnode;
            tail = tail->next;
        }
        cin >> data;
    }

    return head;
}


//function for printing the linked list
void print(Node *head) {
    Node *temp = head;   // we should never try to alter our head node so we assing the head node to a temp node
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

}


//function for inserting a new node at ith position
Node* insertNode(Node *head,int i,int data){
    Node *newnode=new Node(data);
    Node *temp=head;
    int count=0;
    if(i==0){
        newnode->next=head;
        head=newnode;
        return head;
    }
    //here we are finding the i-1th position and
    // temp!=Null is to handlethe case when insert index is greater than tha size of the list
    while(temp!=NULL&&count<i-1){
        temp=temp->next;
        count++;
    }
    if(temp!=NULL){
        newnode->next=temp->next;
        temp->next=newnode;
    }
    return head;
}
//function for deleating node at ith position
int deleteNode(Node *head,int i){
    int data;
    if(i==0){
        data=head->data;
        head=head->next;
        return data;
    }
    Node *temp=head;
    for(int j=1;j<i;j++){
        temp=temp->next;
    }
    Node *x=temp->next;
    temp=temp->next->next;
    data=x->data;
    delete x;

    return data;
}
//int main() {
//    Node *head = takeInput();//inserts all nodes except -1

//    int i,data;
//    cin>>i>>data;
//    head= insertNode(head,i,data);


 //   print(head);//here &head means the address of my head pointer ,head stores the address of the 1st node and
    // *head refers to that node
//    cout<<endl<<deleteNode(head,2);
//    cout<<endl;
//    print(head);
//
//
//
//
////Statically
////    Node n1(1);
////    Node  *head=&n1;
////    Node n2(2);
////    Node n3(3);
////    Node n4(4);
////    Node n5(5);
////    Node n6(6);
////    n1.next=&n2;
////    n2.next=&n3;
////    n3.next=&n4;
////    n4.next=&n5;
////    n5.next=&n6;
//
//
//
//    //Dynamically
////    Node *n3=new Node(10);
////    Node *head1=n3;
////    Node *n4=new Node(20);
////    n3->next=n4;
//
//    return 0;
//}
