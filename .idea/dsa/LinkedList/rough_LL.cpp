////
//// Created by LENOVO on 31-05-2021.
////
//
//#include "bits/stdc++.h"
//#include "Node.h"
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
//Node* swap(Node *head,int a,int b){
//    Node *n1=head,*n2=head;
//    Node *curr=NULL,*curr2=NULL;
//    int count =1;
//    while(count!=a){
//        curr2=n1;
//        n1=n1->next;
//        count++;}
//    count=1;
//    while (count!=b) {
//        curr=n2;
//        n2 = n2->next;
//        count++;}
//        if(a==1) {
//            Node *p = n2->next;
//            if (a + 1 == b) {
//                n2->next = n1;
//                n1->next = p;
//            } else {
//                n2->next = n1->next;
//                curr->next = n1;
//                n1->next = p;}
//            return n2;}
//        else{
//            Node *p = n2->next;
//            if(a+1==b){
//                n2->next=n1;
//                curr2->next=n2;
//                n1->next=p;
//            } else{
//                n2->next=n1->next;
//                curr2->next=n2;
//                curr->next=n1;
//                n1->next=p;}}
//    return head;
//}
//
//Node* Partition(Node *A,int B){
//    Node *l1,*l2,*r1,*r2;
//    if(A==NULL||A->next==NULL){
//        return A;
//    }
//    while(A!=NULL){
//        if(A->data>=B){
//            if(l1==NULL){
//                l1=A;
//                l2=A;
//            }
//            else{
//                l2->next=A;
//                l2=l2->next;
//            }
//        }
//        else if(A->data<B){
//            if(r1==NULL){
//                r1=A;
//                r2=A;
//            }
//            else{
//                r2->next=A;
//                r2=r2->next;
//            }
//        }
//
//        A=A->next;
//    }
//    if(l1==NULL){
//        return r1;
//    }
//    if(r1==NULL){
//        return l1;
//    }
//    r2->next=l1;
//    l2->next=NULL;
//    return r1;
//}
////int main()
////{
////    Node *head=new Node(1);
////    Node *n1=new Node(2);
////
////    Node *n2=new Node(3);
////    Node *n3=new Node(4);
////    Node *n4=new Node(5);
////
////    head->next=n1;
////    n1->next=n2;
////    n2->next=n3;
////    n3->next=n4;
////
//////    print1(head);
////
////    cout<<endl;
//////    print1(swap(head,4,5));
//////    int n;
//////    cin>>n;
////    Node *nn=Partition(head,5);
////    print1(nn);
////    vector<vector<int> a(2*A-1,vector<int>(2*A-1,0));
////
////    return 0;
////
////}