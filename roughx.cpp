#include "bits/stdc++.h"

using namespace std;

////Heapify function to maintain heap property.
//void heapify(int arr[], int n, int i) {
//    // Your Code Here
//    while (i > 0) {
//        int parent = (i - 1) / 2;
//        if (arr[parent] < arr[i]) {
//            swap(arr[parent], arr[i]);
//            i = parent;
//        } else {
//            break;
//        }
//    }
//}
//
////Function to build a Heap from array.
//void buildHeap(int arr[], int n) {
//    // Your Code Here
//    for (int i = 1; i < n; i++)
//        heapify(arr, n, i);
//
//
//}
//
//
//void heapSort(int arr[], int n) {
//    //code here
//    buildHeap(arr, n);
//    int size = n;
//    while (size > 1) {
//        swap(arr[0], arr[size - 1]);
//        size--;
//
//        int parent = 0, l = 2 * parent + 1, r = 2 * parent + 2;
//        while (l < size) {
//            int mini = parent;
//            if (arr[mini] < arr[l]) mini = l;
//            if (r < size and arr[mini] < arr[r]) mini = r;
//            if (parent == mini) break;
//            swap(arr[mini], arr[parent]);
//            parent = mini;
//            l = 2 * parent + 1;
//            r = 2 * parent + 2;
//        }
//    }
//
//
//}
//
//void selection(int arr[],int n){
//
//    for(int i=0;i<n;i++){
//        int mini=i;
//        for(int j=i+1;j<n;j++){
//            if(arr[j]<arr[mini]){
//                mini=j;
//            }
//        }
//        swap(arr[i],arr[mini]);
//    }
//
//}
//
//void insertion(int arr[],int n){
//    for(int i=1;i<n;i++){
//        int p=arr[i],j=i-1;
//        while(j>=0 and arr[j]>p){
//            arr[j+1]=arr[j];
//            j--;
//        }
//        arr[j+1]=p;
//    }
//}
//void bubble(int arr[],int n){
//    for(int i=0;i<n;i++){
//        for(int j=i+1;j<n;j++){
//            if(arr[j]<arr[i]){
//                swap(arr[j],arr[i]);
//            }
//        }
//    }
//}



string decodeString(string s) {
    stack<string> s1;
    stack<char> s2,s3;
    string ans="";
    string temp="";
    for(int i=0;i<s.length();i++){
        char c=s[i];
        if(isalpha(c)){
            temp+=c;
        }
        else if(isdigit(c)){
            s2.push(c);
            if(temp!=""){
                s1.push(temp);
                temp="";
            }
        }
        else if(c=='['){
            s3.push('[');
        }
        else{
            if(temp!=""){
            s1.push(temp);
            temp="";}
            int rep=(s2.top()-'0');
            s2.pop();
            string ss=s1.top();
            s1.pop();
            s3.pop();
            while(rep--){
                temp+=ss;
            }
            ans+=temp;
            temp="";
        }
    }
    return ans;
}
int main() {
    string s="3[a2[c]]";
    cout<<decodeString(s)<<endl;
    return 0;
}