////search an element is a sorted rotated array
//#include "bits/stdc++.h"
//using namespace std;
//int findKRotation(vector<int> nums, int target) {
//    // code here
//    int start =0,end=nums.size()-1;
//    int res=-1;
//    while(start<=end){
//        int mid=start+(end-start)/2;
//        if(nums[mid]==target){
//            res=mid;
//            break;
//        }
//            else if(nums[start]==target){
//                return start;
//            }
//            else if(nums[end]==target){
//                return end;
//            }
//        else if(nums[start]<nums[mid]){
//            if(nums[start]<=target&&nums[mid]>target)
//                end=mid-1;
//            else
//                start=mid+1;
//        }
//        else{
//            if(nums[end]>=target&&nums[mid]<target){
//                start=mid+1;
//            }
//            else{
//                end=mid-1;
//            }
//        }
//    }
//
//    return res;
//}
//int main(){
//    int n=5;
//    int x=10;
//    vector<int> arr={3,1};
//    int ans=findKRotation(arr,1);
//    cout<<ans<<endl;
//}