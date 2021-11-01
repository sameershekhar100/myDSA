//#include "bits/stdc++.h"
//
//using namespace std;
//
////recursive approach
//int num_codes(int *n, int size, int *arr) {//this arr should be an n -size zero array.
//    if (size == 0)
//        return 1;
//    if (size == 1)
//        return 1;
//    if (arr[size] > 0) {
//        return arr[size];
//    }
//    int nums = num_codes(n, size - 1, arr);
//    if (n[size - 2] * 10 + n[size - 1] <= 26) {
//        nums += num_codes(n, size - 2, arr);
//    }
//    arr[size] = nums;
//    return nums;
//}
////itreative approach
//
//int num_codes2(int *n, int size){
//    int *arr=new int [size+1];
//    arr[0]=1;
//    arr[1]=0;
//    for(int i=2;i<size+1;i++){
//        arr[i]=arr[i-1];
//        if(arr[i-1]+arr[i-2]*10<=26){
//            arr[i]+=arr[i-2];
//        }
//    }
//    int ans=arr[size];
//    delete []arr;
//    return ans;
//}
//int main() {

//}