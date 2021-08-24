//#include "bits/stdc++.h"
//#include "BinaryTreeNode.h"
//#include "list"
//
//using namespace std;
//
//void printBT(BinaryTree<int> *root) {
//    if (root == NULL)
//        return;
//    cout << root->data << " : ";
//    if (root->left != NULL)
//        cout << "L" << root->left->data;
//    if (root->right != NULL)
//        cout << " R" << root->right->data;
//    cout << endl;
//    printBT(root->left);
//    printBT(root->right);
//
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
////recursive and bakwaas way of taking input of BT
//BinaryTree<int> *takeInput() {
//    int data;
//    cin >> data;
//    if (data == -1) {
//        return NULL;
//    }
//    BinaryTree<int> *root = new BinaryTree<int>(data);
//    BinaryTree<int> *nodeleft = takeInput();
//    BinaryTree<int> *noderight = takeInput();
//    root->left = nodeleft;
//    root->right = noderight;
//    return root;
//}
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
//BinaryTree<int>* removeLeaves(BinaryTree<int>* node){
//    if(node==NULL||(node->left==NULL&&node->right==NULL))
//        return NULL;
//   BinaryTree<int>* left= removeLeaves(node->left);
//    BinaryTree<int>* right= removeLeaves(node->right);
//    node->left=left;
//    node->right= right;
//    return node;
//}
//BinaryTree<int> *mirrorTree(BinaryTree<int> *root) {
//    if (root == NULL) {
//        return NULL;
//    }
//    BinaryTree<int> *left = mirrorTree(root->left);
//    BinaryTree<int> *right = mirrorTree(root->right);
//    root->left = right;
//    root->right = left;
//    return root;
//
//}
//
////inorder traversal
//void inorder(BinaryTree<int>* root){
//    if (root==NULL){
//        return;
//    }
//    inorder(root->left);
//    cout<<root->data<<" ";
//    inorder(root->right);
//}
//
//void preorder(BinaryTree<int>* root){
//    if(root==NULL){
//        return;
//    }
//    cout<<root->data<<" ";
//    preorder(root->left);
//    preorder(root->right);
//}
//void postorder(BinaryTree<int>* root){
//    if(root==NULL){
//        return;
//    }
//
//    postorder(root->left);
//    postorder(root->right);
//    cout<<root->data<<" ";
//}
//
//void zigzag(BinaryTree<int>* root){
//    stack<BinaryTree<int>*> s1,s2;
//    if(root==NULL){
//        return;
//    }
//    s1.push(root);
//    while(!s1.empty()&&s2.empty()) {
//        while (!s1.empty()) {
//            BinaryTree<int> *node = s1.top();
//            s1.pop();
//            cout << node->data<<" ";
//            if (node->left != NULL) {
//                s2.push(node->left);
//            }
//            if (node->right != NULL) {
//                s2.push(node->right);
//            }
//        }
//        cout<<endl;
//        while (!s2.empty()){
//            BinaryTree<int> *node=s2.top();
//            s2.pop();
//            cout<<node->data<<" ";
//            if (node->right != NULL) {
//                s1.push(node->right);
//            }
//            if (node->left != NULL) {
//                s1.push(node->left);
//            }
//        }
//        cout<<endl;
//    }
//}
//
//
//
//int main() {
//
//    BinaryTree<int> *root = takeLevelInput();
//
////    printlevelBT(removeLeaves(root));
//    zigzag(root);
//
//    delete root;
//}
//
