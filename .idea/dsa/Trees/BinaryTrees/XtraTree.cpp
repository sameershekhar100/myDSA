//#include "bits/stdc++.h"
//#include "BinaryTreeNode.h"
//
//using namespace std;
//
////taking level order input
//BinaryTree<int> *takeLevelInput() {
//    int data;
//    cout << "enter root data" << endl;
//    cin >> data;
//    if (data == -1) {
//        return NULL;
//    }
//    BinaryTree<int> *root = new BinaryTree<int>(data);
//    queue<BinaryTree<int> *> q;
//    q.push(root);
//    while (!q.empty()) {
//        BinaryTree<int> *front = q.front();
//        q.pop();
//
//        cout << "enter left child of " << front->data << endl;
//        int leftData;
//        cin >> leftData;
//        if (leftData != -1) {
//            BinaryTree<int> *leftNode = new BinaryTree<int>(leftData);
//            front->left = leftNode;
//            q.push(leftNode);
//        }
//        cout << "enter right child of " << front->data << endl;
//        int rightData;
//        cin >> rightData;
//        if (rightData != -1) {
//            BinaryTree<int> *rightNode = new BinaryTree<int>(rightData);
//            front->right = rightNode;
//            q.push(rightNode);
//        }
//    }
//    return root;
//}
//
////level order printing
//void printlevelBT(BinaryTree<int> *node) {
//    if (node == NULL)
//        return;
//    queue<BinaryTree<int> *> q;
//    q.push(node);
//    while (!q.empty()) {
//        int count = q.size();
//        while (count > 0) {
//            BinaryTree<int> *root = q.front();
//            q.pop();
//            cout << root->data << "  ";
//            if (root->left != NULL) {
//                q.push(root->left);
//            }
//            if (root->right != NULL) {
//                q.push(root->right);
//            }
//
//            count--;
//        }
//        cout << endl;
//    }
//}
//
//pair<int, int> solve(BinaryTree<int> *root) {
//    if (root == NULL) {
//        pair<int, int> p;
//        p.first = 0;
//        p.second = 0;
//        return p;
//    }
//    pair<int, int> pair, p1, p2;
//    p1 = solve(root->left);
//    p2 = solve(root->right);
//    pair.first = 1 + max(p1.first, p2.first);
//    pair.second = max(p1.first + p2.first, max(p1.second, p2.second));
//    return pair;
//}
//
//int diameter(BinaryTree<int> *root) {
//    pair<int, int> p = solve( root);    //here we make a pair object which gives the height and diametre of my tree together
//    return p.second;
//}
//
//pair<int ,int> minmax(BinaryTree<int>* root){
//    if (root==NULL){
//        return pair<int,int>(INT32_MAX,INT16_MIN);
//    }
//    pair<int,int> l= minmax(root->left);
//    pair<int,int> r=minmax(root->right);
//
//    pair<int,int> p;
//    p.first=min(root->data,min(l.first,r.first));
//    p.second=max(root->data,max(l.second,r.second));
//
//    return p;
//}
//
//int main() {
//    BinaryTree<int> *root = takeLevelInput();
////    cout << diameter(root)<<endl;
//    cout<<minmax(root).first<<" "<<minmax(root).second;
//}