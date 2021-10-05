//#include "bits/stdc++.h"
//using namespace std;
//int findPeak(int nums[],int n){
//    int s=0,e=n-1;
//    int ans=0;
//    if(n>1) {
//        while (s <= e) {
//            int mid = s + (e - s) / 2;
//            if(mid>0&&mid<n-1){
//                if(nums[mid]>nums[mid+1]&&nums[mid]>nums[mid-1]){
//                    ans=mid;
//                    break;
//                }
//                else if(nums[mid]<nums[mid+1]){
//                    s=mid+1;
//                } else if(nums[mid]<nums[mid-1]){
//                    e=mid-1;
//                }
//            } else if(mid==0){
//                if(nums[0]>nums[1]){
//                    ans=0;
//                }
//                else{
//                    ans=1;
//                }
//            }
//            else if(mid==n-1) {
//                if (nums[n-1] > nums[n-2]) {
//                    ans = n-1;
//                } else {
//                    ans = n-2;
//                }
//            }
//        }
//    }
//    return ans;
//}
//int main(){
//    int arr[]={1,2,1,3,5,6,4};
//    int peak=findPeak(arr,sizeof(arr)/sizeof (int));
//    cout<<arr[peak]<<endl;
//}