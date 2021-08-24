////
//// Created by LENOVO on 30-05-2021.
////
//#include "bits/stdc++.h"
//#include "Node.h"
//
//Node *takeInput1(int n) {
//    int data;
//    cin >> data;
//    Node *head = NULL;
//    Node *tail = NULL;
//    Node *newnode = new Node(data);
//
//    if (head == NULL) {
//        head = newnode;
//        tail = newnode;
//    }
//    if (n == 1)
//        return head;
//    for (int i = 1; i < n; i++) {
//        cin >> data;
//        Node *newnode1 = new Node(data);
//        tail->next = newnode1;
//        tail = tail->next;
//
//    }
//
//    return head;
//}
//
//
////function for printing the linked list
//void print1(Node *head) {
//    if (head == NULL) {
//        cout << -1;
//        return;
//    }
//    Node *temp = head;
//    // we should never try to alter our head node so we assing the head node to a temp node
//    while (temp != NULL) {
//        cout << temp->data << " ";
//        temp = temp->next;
//    }
//
//
//}
//
//Node *merge(Node *h1, Node *h2) {
//    Node *head = nullptr, *tail = nullptr;
//    if (h1->data <= h2->data) {
//        head = h1;
//        tail = h1;
//        h1 = h1->next;
//    } else {
//        head = h2;
//        tail = h2;
//        h2 = h2->next;
//    }
//    //till now we have added the smallest element in my final ll
//    while (h1 != nullptr && h2 != nullptr) {
//        if (h1->data <= h2->data) {
//            tail->next = h1;
//            tail = tail->next;
//            h1 = h1->next;
//        } else {
//            tail->next = h2;
//            tail = tail->next;
//            h2 = h2->next;
//        }
//    }
//    // we r simply just moving the heads and compare after anyone of the moved heads and assign the
//    // smaller element to tail pointer.next and moving the tail pointer for further addition
//    if (h1 != nullptr) {
//        tail->next = h1;
//    } else
//        tail->next = h2;
//    // here we are just checking that if any one of the sorted list is used up then simply join the tail pointer to the
//    //current node of the bogger list.
//    return head;
//
//}
//
//Node *mergeSort(Node *head) {
//    if (head == NULL || head->next == NULL)
//        return head;
//
//    Node *slow = head;
//    Node *fast = head->next;
//    while (fast != nullptr && fast->next != nullptr) {
//        slow = slow->next;
//        fast = fast->next->next;
//    }
//    //till here we find the mid element of my linked list
//    Node *x = head, *y = slow->next;
//    //here we assigned the 2 heads for my 1st half nd my 2nd half of my ll
//    slow->next = NULL;
//    //breaking my list into two halves
//
////    mergeSort(x);
////    mergeSort(y);
//
//    return merge(mergeSort(x), mergeSort(y));
//    //applying reursion by believing that the small function will bring back the sorted halves
//    //so we merge those two sorted halves using merge function
//}
//
//int main() {
//    int n;
//    cin >> n;
//    Node *head1 = takeInput1(n);
//
//    Node *head = mergeSort(head1);
//    print1(head);
//
//
//}
