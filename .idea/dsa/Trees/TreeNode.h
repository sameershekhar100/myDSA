#include "bits/stdc++.h"
using namespace std;

template<typename T>
class TreeNode{
public:
    int data;
    vector<TreeNode<T>*> children;
    TreeNode(T data){
        this->data=data;
    }
    ~TreeNode(){
        for(int i=0;i<children.size();i++)
            delete children[i];
    }
};