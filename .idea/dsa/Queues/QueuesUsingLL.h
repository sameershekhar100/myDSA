#include "bits/stdc++.h"

using namespace std;
template<typename T>
class Node{
public:
    T data;
    Node<T> *next;
    Node(T data){
        this->data=data;
        next= nullptr;
    }
};
template<typename T>
class QueuesUsingLL {
    Node<T> *head;
    Node<T> *tail;
    int size;

public:
    QueuesUsingLL() {
        head = NULL;
        tail = NULL;
        size = 0;
    }


    int getsize() {
        return size;
    }

    bool isEmpty(){
        return size==0;
    }

    void enqueue(T data){
        Node<T> *newData=new Node<T>(data);
        if(size==0){
            head=newData;
            tail=newData;
            size++;
            return;
        }
        tail->next=newData;
        tail=tail->next;
        size++;
    }

    T front(){
        if(isEmpty()){
            cout<<"Queue is empty"<<endl<<"return ";
            return 0;
        }
        return head->data;
    }
    T dequeue(){
        if(isEmpty()){
            cout<<"Queue is empty"<<endl<<"return ";
            return 0;
        }
        Node<T> *ansNode=head;
        head=head->next;
        T ans=ansNode->data;
        delete ansNode;
        size--;
        return ans;
    }
};