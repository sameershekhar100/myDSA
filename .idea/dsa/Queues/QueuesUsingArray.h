#include "bits/stdc++.h"

using namespace std;

template<typename T>
class QueuesUsingArrays {

    int nextIndex;
    int firstIndex;
    int size;
    T *data;
    int capacity;

public:

    QueuesUsingArrays() {
        data = new T[4];
        firstIndex = -1;
        size = 0;
        nextIndex = 0;
        capacity=4;

    }

    int getsize() {
        return size;
    }

    bool isEmpty() {
        return size == 0;
    }

    void enqueue(T nums) {
        if (size == capacity){
            T *newdata=new T[2*capacity];
            int j=0;
            for(int i=firstIndex;i<capacity;i++){
                newdata[j]=data[i];
                j++;
            }
            for(int i=0;i<firstIndex;i++){
                newdata[j]=data[i];
                j++;
            }
            delete []data;
            data=newdata;
            firstIndex=0;
            nextIndex=capacity;
            capacity=2*capacity;
//            cout << "Queuue is full" << endl;
//            return;
        }
        data[nextIndex]=nums;
        nextIndex=(nextIndex+1)%capacity;
        if(firstIndex==-1)
            firstIndex=0;
        size++;

    }

    T front(){
        if(isEmpty()){
            cout<<"Queue is empty"<<endl;
            return 0;
        }
        return data[firstIndex];
    }
    T dequeue() {
        if(isEmpty()){
            cout<<"Queue is empty"<<endl;
            return 0;
        }
        T ans=data[firstIndex];
        firstIndex=(firstIndex+1)% capacity;
        size--;
        if(size==0){
            firstIndex=-1;
            nextIndex=0;
        }
        return ans;


    }

};