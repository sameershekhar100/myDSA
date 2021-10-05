//#include "bits/stdc++.h"
//#include "C:\Users\LENOVO\CLionProjects\myDSA\.idea\dsa\LinkedList\Node.h"
//
//using namespace std;
//
//Node *takeInput() {
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
//Node *addTwoNumbers(Node *l1, Node *l2) {
//    int x = 0, sum = 0, rem = 0;
//    Node *head = new Node(0);
//    Node *temp = head;
//    while (l1 != NULL && l2 != NULL) {
//        x = (l1->data) + (l2->data);
//        sum = x + rem;
//        Node *data = new Node(sum % 10);
//        temp->next = data;
//        rem = sum / 10;
//        temp = temp->next;
//        l1 = l1->next;
//        l2 = l2->next;
//    }
//
//    while (l1 != NULL) {
//        x = l1->data;
//        sum = x + rem;
//        Node *data = new Node(sum % 10);
//        temp->next = data;
//        rem = sum / 10;
//        temp = temp->next;
//        l1 = l1->next;
//
//    }
//
//    while (l2 != NULL) {
//        x = l2->data;
//        sum = x + rem;
//        Node *data = new Node(sum % 10);
//        temp->next = data;
//        rem = sum / 10;
//        temp = temp->next;
//        l2 = l2->next;
//    }
//
//    if (rem != 0) {
//        Node *data = new Node(rem);
//        temp->next = data;
//    }
//    head = head->next;
//    return head;
//}
//
//int main() {
//    Node *l1 = takeInput();
//    Node *l2 = takeInput();
//    Node *ans = addTwoNumbers(l1, l2);
//    while (ans != NULL) {
//        cout << ans->data << " ";
//        ans = ans->next;
//    }
//
//}