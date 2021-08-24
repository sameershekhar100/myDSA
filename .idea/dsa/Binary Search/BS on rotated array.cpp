//#include "bits/stdc++.h"
//using namespace std;
//int findKRotation(vector<int> nums, int n) {
//    // code here
//    int start=0,end=n-1,ans=-1;
//    while(start<=end){
//        int mid=start+(end-start)/2;
//        //finding mid element
//        if((nums[(mid - 1 + n) % n] >= nums[mid]) && (nums[(mid + 1) % n] >= nums[mid])){
//            ans=mid;
//            break;
//        }
//        //if the element is not minimum then go for the unsorted part
//        else if(nums[start] > nums[mid]){
//
//            end=mid-1;
//        }
//        else{
//            start=mid+1;
//        }
//    }
//    return nums[ans];
//}
//int main(){
//    int n=5;
//    int x=10;
//    vector<int> arr={4,5,6,7,0,1,2};
//    int ans=findKRotation(arr,n);
//    cout<<ans<<endl;
//}