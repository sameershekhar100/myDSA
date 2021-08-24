//#include "bits/stdc++.h"
//using namespace std;
//
//int lis(int* arr,int n){
//      int* output=new int [n];
//      output[0]=1;
//      for(int i=1;i<n;i++) {
//          output[i] = 1;
//          for (int j = i - 1; j >= 0; j--) {
//              if (arr[j] > arr[i])
//                  continue;
//              int possible = output[j] + 1;
//              if(possible>output[i])
//                  output[i]=possible;
//          }
//      }
//      int best=*max_element(output,output+n);
//
//      delete[] output;
//      return best;
//}
//int optimisedLIS(int* arr,int n){
//    vector<int> lis_arr;
//    lis_arr.push_back(arr[0]);
//    for (int i = 0; i < n; ++i) {
//        if(lis_arr.back()<arr[i]){
//            lis_arr.push_back(arr[i]);
//        }
//        else{
//            int idx= lower_bound(lis_arr.begin(),lis_arr.end(),arr[i])-lis_arr.begin();
//            lis_arr[idx]=arr[i];
//        }
//    }
//    return lis_arr.size();
//}
//int main()
//{
//
//    int n;
//    cin>>n;
//    int* arr=new int [n];
//    for(int i=0;i<n;i++){
//        cin>>arr[i];
//    }
//
//    int ans=optimisedLIS(arr,n);
//
//    cout<<ans<<endl;
//    delete[] arr;
//
//    return 0;
//
//}
////    auto start = std::chrono::high_resolution_clock::now();
////    auto finish = std::chrono::high_resolution_clock::now();
////    std::chrono::duration<long double> total=finish-start;
////    cout<<total.count();