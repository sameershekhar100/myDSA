////
//// Created by LENOVO on 31-05-2021.
////
//
//#include "bits/stdc++.h"
//#include "Node.h"
//
//using namespace std;
//
//void print1(Node *head) {
//    Node *temp = head;   // we should never try to alter our head node so we assing the head node to a temp node
//    while (temp != NULL) {
//        cout << temp->data << " ";
//        temp = temp->next;
//    }
//
//}
//
//Node *swap(Node *head, int a, int b) {
//    //just maintain 4 pointers one for 1st swap node 2nd for other swap nodes and othre two for the previous of both nodes
//    //here we can have 2 cases 1) if the 1st node is the head node and other that 1st node is not the head node.
//    //in these 22 cases we will also have 2 sub cases if the nodes to be swapped aur immediately next to each other or not.
//    Node *n1 = head, *n2 = head;
//    Node *curr2 = NULL, *curr1 = NULL;
//    int count = 1;
//
//    while (count != a) {
//        curr1 = n1;
//        n1 = n1->next;
//        count++;
//    }
//    count = 1;
//    while (count != b) {
//        curr2 = n2;
//        n2 = n2->next;
//        count++;
//    }
//    //till now we have located our pointers to their correct locations
//    if (a == 1) {       //1st case
//        Node *p = n2->next;
//        if (a + 1 == b) {
//            n2->next = n1;
//            n1->next = p;
//        } else {
//            n2->next = n1->next;
//            curr2->next = n1;
//            n1->next = p;
//        }
//        return n2;
//    } else {
//        Node *p = n2->next;
//        if (a + 1 == b) {
//            n2->next = n1;
//            curr1->next = n2;
//            n1->next = p;
//        } else {
//            n2->next = n1->next;
//            curr1->next = n2;
//            curr2->next = n1;
//            n1->next = p;
//        }
//    }
//    return head;
//}
//
////Node* Partition(Node *A,int B){
////    Node *l1,*l2,*r1,*r2;
////    if(A==NULL||A->next==NULL){
////        return A;
////    }
////    while(A!=NULL){
////        if(A->data>=B){
////            if(l1==NULL){
////                l1=A;
////                l2=A;
////            }
////            else{
////                l2->next=A;
////                l2=l2->next;
////            }
////        }
////        else if(A->data<B){
////            if(r1==NULL){
////                r1=A;
////                r2=A;
////            }
////            else{
////                r2->next=A;
////                r2=r2->next;
////            }
////        }
////
////        A=A->next;
////    }
////    if(l1==NULL){
////        return r1;
////    }
////    if(r1==NULL){
////        return l1;
////    }
////    r2->next=l1;
////    l2->next=NULL;
////    return r1;
////}
//int main() {
//    Node *head = new Node(1);
//    Node *n1 = new Node(2);
//
//    Node *n2 = new Node(3);
//    Node *n3 = new Node(4);
//    Node *n4 = new Node(5);
//
//    head->next = n1;
//    n1->next = n2;
//    n2->next = n3;
//    n3->next = n4;
//
//    print1(head);
//
//    cout << endl;
//    print1(swap(head, 3, 4));
////    int n;
////    cin>>n;
////    Node *nn=Partition(head,3);
////    print1(nn);
//
//    return 0;
//
//}