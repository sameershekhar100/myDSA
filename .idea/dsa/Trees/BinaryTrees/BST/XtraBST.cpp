//#include "bits/stdc++.h"
//#include "C:\Users\LENOVO\CLionProjects\myDSA\.idea\dsa\Trees\BinaryTrees\BinaryTreeNode.h"
//#include "C:\Users\LENOVO\CLionProjects\myDSA\.idea\dsa\LinkedList\Node.h"
//#include "BSTclass.h"
//
//
//using namespace std;

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
//vector<int> *rootToNodePath(BinaryTree<int> *root, int data) {
//    if (root == NULL) {
//        return NULL;
//    }
//    if (root->data == data) {
//        vector<int> *v = new vector<int>;
//        v->push_back(root->data);
//        return v;
//    }
//    vector<int> *lout = rootToNodePath(root->left, data);
//    if (lout != NULL) {
//        lout->push_back(root->data);
//        return lout;
//    }
//    vector<int> *rout = rootToNodePath(root->right, data);
//    if (rout != NULL) {
//        rout->push_back(root->data);
//        return rout;
//    }
//    return NULL;
//}
//
//int_fast32_t main() {
//    BST b;
//    b.insertData(10);
//    b.insertData(5);
//    b.insertData(20);
//    b.insertData(7);
//    b.insertData(3);
//    b.insertData(15);
//    b.deleteData(10);
//    b.deleteData(100);
//    b.printTree();
//
//}