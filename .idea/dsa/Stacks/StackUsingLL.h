#include "iostream"
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
class StackUsingLL{
int capacity;
Node<T> *head;
public:
    StackUsingLL(){
        head=NULL;
        capacity=0;
    }
    int size(){
        return capacity;
    }
    bool isEmpty(){
        return capacity==0;
    }
    void push(T data){
        Node<T> *node=new Node<T>(data);
        node->next=head;
        head=node;
        capacity++;
    }

    T pop(){
        if(head==NULL){
            cout<<"stack is empty"<<endl;
            return 0;
        }
        T ans=head->data;
        Node<T> *n=head;
        head=head->next;
        capacity--;
        delete n;

        return ans;
    }

    T top(){
        if(head==NULL){
            cout<<"stack is empty"<<endl;
            return 0;
        }
        return head->data;

    }

};
