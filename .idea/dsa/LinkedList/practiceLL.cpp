//#include "bits/stdc++.h"
//#include "Node.h"
//
//Node *takeInput1() {
//    int data;
//    cin >> data;
//    Node *head = NULL;
//    Node *tail = NULL;
//
//    while (data != -1) {
//        Node *newnode = new Node(data);
//        if (head == NULL) {
//            head = newnode;
//            tail = newnode;
//        } else {
//            tail->next = newnode;
//            tail = tail->next;
//        }
//        cin >> data;
//    }
//
//    return head;
//}
//
//
////function for printing the linked list
//void print1(Node *head) {
//    if(head==NULL)
//    {
//        cout<<-1;
//        return;
//    }
//    Node *temp = head;   // we should never try to alter our head node so we assing the head node to a temp node
//    while (temp != NULL) {
//        cout << temp->data << " ";
//        temp = temp->next;
//    }
//
//
//}
//int findIndex(Node *head,int val){
//    if(head==NULL)
//        return -1;
//    Node *temp=head;
//    int index=0;
//    bool b= false;
//    while(temp!=NULL) {
//        if (temp->data == val) {
//            b = true;
//            break;
//        }
//        index++;
//        temp=temp->next;
//    }
//    if(b)
//    return index;
//    return -1;
//}
//Node* insertFromLast(Node *head,int m){
//    Node *temp=head;
//    int count=0;
//    Node* n=NULL;
//    if(m-2<0)
//        return NULL;
//
//        while(temp->next!=NULL){
//        if(count==m-2){
//            n=temp;
//        }
//        count++;
//        temp=temp->next;
//    }
//    temp->next=head;
//    head=n->next;
//    n->next=NULL;
//    return head;
//}
//Node *solve(Node* head ,int x){
//    Node *newNode= new Node(x);
//
//    // Cpde here
//    if(head==NULL)
//        head=newNode;
//    Node* tail=head;
//    Node* temp=head->next;
//    int count=0;
//    while(temp!=NULL&&temp->next!=NULL){
//
//        tail=tail->next;
//        temp=temp->next->next;
//    }
//    if(tail!=NULL){
//        newNode->next=tail;
//        tail->next=newNode;
//    }
//    else
//        tail->next=newNode;
//    return head;
//}
//int main(){
//    Node *head=takeInput1();
//    int m;
//    cin>>m;
//    Node *p=solve(head,m);
//    print1(p);
////    cout<<findIndex(head,val);
////   Node* h= insertFromLast(head,m);
////    print1(h);
//
//}