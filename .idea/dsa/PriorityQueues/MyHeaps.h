//#include "bits/stdc++.h"
//
//using namespace std;
//
//class heap {
//    vector<int> v;
//public:
//    heap() {
//
//    }
//
//    bool isEmpty() {
//        return v.size() == 0;
//    }
//
//    int getSize() {
//        return v.size();
//    }
//
//    int getMin() {
//        if (isEmpty())
//            return 0;
//        return v[0];
//    }
//
//    void insert(int data) {
//        v.push_back(data);
//        int childIdx = v.size() - 1;
//        while (childIdx > 0) {
//            if (v[(childIdx - 1) / 2] > v[childIdx]) //in case of max heap,comparison is opposite//
//            {
//                swap(v[(childIdx - 1) / 2], v[childIdx]);
//                childIdx = (childIdx - 1) / 2;
//            } else {
//                break;
//            }
//        }
//    }
//
//    int removeMin() {
//        if (v.empty()) {
//            return 0;
//        }
//        int ans = v[0];
//        v[0] = v[v.size() - 1];
//        v.pop_back();
//        int parent = 0, lidx = 2 * parent + 1, ridx = 2 * parent + 2;
//        //down-heapify
//        while (lidx < v.size()) {
//            int mini = parent;
//            if (v[mini] > v[lidx])//in case of max heap,comparison is opposite//
//                mini = lidx;
//            if (ridx < v.size() && v[mini] > v[ridx])//in case of max heap,comparison is opposite//
//                mini = ridx;
//            if (parent == mini) {
//                break;
//            }
//            swap(v[mini], v[parent]);
//            parent = mini;
//            lidx = 2 * parent + 1;
//            ridx = 2 * parent + 2;
//        }
//        return ans;
//    }
//};
//
