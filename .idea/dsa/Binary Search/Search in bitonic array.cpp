//#include "bits/stdc++.h"
//using namespace std;
//
//int find(vector<int> nums,int n){
//    int s=0,e=n-1;
//    int ans=0;
//    while(s<=e){
//        int mid = s + (e - s) / 2;
//        if(mid>0&&mid<n-1){
//            if(nums[mid]>nums[mid+1]&&nums[mid]>nums[mid-1]){
//                ans=mid;
//                break;
//            }
//            else if(nums[mid]<nums[mid+1]){
//                s=mid+1;
//            } else if(nums[mid]<nums[mid-1]){
//                e=mid-1;
//            }
//        } else if(mid==0){
//            if(nums[0]>nums[1]){
//                ans=0;
//            }
//            else{
//                ans=1;
//            }
//        }
//        else if(mid==n-1) {
//            if (nums[n-1] > nums[n-2]) {
//                ans = n-1;
//            } else {
//                ans = n-2;
//            }
//        }
//    }
//
//    return ans;
//}
//int getans1(vector<int> a,int s ,int n,int z){
//    int l=s,h=n;
//    while(l<=h){
//        int mid = l + (h - l) / 2;
//        if(a[mid]==z){
//            return mid;
//        }
//        else if(a[mid]>z){
//            h=mid-1;
//        }
//        else{
//            l=mid+1;
//        }
//    }
//    return -1;
//}
//int getans2(vector<int> a,int s ,int n,int z){
//    int l=s,h=n;
//    while(l<=h){
//        int mid = l + (h - l) / 2;
//        if(a[mid]==z){
//            return mid;
//        }
//        else if(a[mid]<z){
//            h=mid-1;
//        }
//        else{
//            l=mid+1;
//        }
//    }
//    return -1;
//}
//int main() {
//    vector<int> arr= { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11};
//    int idx=find(arr,arr.size());
//    cout<<idx<<endl;
//    string s="ubj";
//    int a= getans1(arr,0,idx-1,18);
//    int b=getans2(arr,idx,arr.size()-1,18);
//    cout<<max(a,b);
//
//}