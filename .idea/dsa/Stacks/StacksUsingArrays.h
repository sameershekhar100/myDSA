//
// Created by LENOVO on 01-06-2021.
//

#include "iostream"
using namespace std;
template<typename T>
class StacksUsingArrays {

    T *data;
    int nextindex;
    int capacity;
public:
    StacksUsingArrays(){
        nextindex=0;
        capacity=4;
        data=new T[capacity];
    }
    int size(){
        return nextindex;
    }
    bool isEmpty(){
        return nextindex==0;
    }

    void push(T val){
        if(nextindex==capacity){
            T *newData=new T[2*capacity];   //here we have used dynamic arrays to remove the constraint of size
                                                // by just creating a new array of double the size of the old array;

            for(int i=0;i<capacity;i++){
                newData[i]=data[i];
            }
            capacity*=2;
            delete []data;
            data=newData;
//            cout<<"Stack overflow error"<<endl;
//            return;
        }
        data[nextindex]=val;
        nextindex++;
    }
    T pop(){
        if(isEmpty()){
            cout<<"Stack is empty"<<endl;
            return 0;
        }

        nextindex--;
        return data[nextindex];
    }

    T top(){
        if(isEmpty()){
            cout<<"stack is empty"<<endl;
            return 0;
        }
        return data[nextindex-1];
    }
};


