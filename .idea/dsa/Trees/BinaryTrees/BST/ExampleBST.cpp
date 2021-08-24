//#include "bits/stdc++.h"
//#include "C:\Users\LENOVO\CLionProjects\myDSA\.idea\dsa\Trees\BinaryTrees\BinaryTreeNode.h"
//#include "C:\Users\LENOVO\CLionProjects\myDSA\.idea\dsa\LinkedList\Node.h"
//
//
//using namespace std;
//
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
//bool searchBST(BinaryTree<int> *root, int val) {
//    if (root->data == val) {
//        return true;
//    } else if (root->data < val) {
//        return searchBST(root->right, val);
//    }
//    return searchBST(root->left, val);
//}
//
////prints elemnts lying under a range
//void printRange(BinaryTree<int> *root, int a, int b) {
//    if (root == NULL) {
//        return;
//    }
//    if (root->data >= a && root->data <= b) {
//
//        printRange(root->left, a, b);
//        cout << root->data << " ";
//        printRange(root->right, a, b);
//    } else if (root->data > b) {
//        printRange(root->left, a, b);
//    } else if (root->data < a) {
//        printRange(root->right, a, b);
//    }
//}
//
//int maxi(BinaryTree<int> *root) {
//    if (root == NULL)
//        return INT16_MIN;
//    int maxima = max(maxi(root->left), maxi(root->right));
//    return max(root->data, maxima);
//}
//
//int mini(BinaryTree<int> *root) {
//    if (root == NULL)
//        return INT16_MAX;
//    int maxima = min(mini(root->left), mini(root->right));
//    return min(root->data, maxima);
//}
//
//class triplet {
//public:
//    int max;
//    int min;
//    bool isBST;
//};
//
//triplet checkBST(BinaryTree<int> *root) {
//    if (root == NULL) {
//        triplet t;
//        t.min = INT32_MAX;
//        t.max = INT16_MIN;
//        t.isBST = true;
//        return t;
//    }
//    triplet t1 = checkBST(root->left);
//    triplet t2 = checkBST(root->right);
//    int maxi = max(root->data, max(t1.max, t2.max));
//    int mini = min(root->data, min(t1.min, t2.min));
//    bool b = root->data > t1.max && root->data <= t2.min && t1.isBST && t2.isBST;
//
//    triplet output;
//    output.max = maxi;
//    output.min = mini;
//    output.isBST = b;
////    brute-force
////    bool output = root->data > maxi(root->left) && root->data <= mini(root->right) && checkBST(root->left) &&
////                  checkBST(root->right);
//    return output;
//}
//
//bool checkBST2(BinaryTree<int> *root, int min = INT32_MIN, int max = INT32_MAX) {
//    if (root == NULL)
//        return true;
//    if (root->data < min || root->data > max) {
//        return false;
//    }
//    bool left = checkBST2(root->left, min, root->data - 1);
//    bool right = checkBST2(root->right, root->data, max);
//    return left && right;
//}
//
//BinaryTree<int> *makeBSTfromsortedArray(int *a, int s, int e) {
//    if (s > e) {
//        return NULL;
//    }
//    int mid = (s + e) / 2;
//    int rootData = a[mid];
//    BinaryTree<int> *root = new BinaryTree<int>(rootData);
//    BinaryTree<int> *l = makeBSTfromsortedArray(a, s, mid - 1);
//    BinaryTree<int> *r = makeBSTfromsortedArray(a, mid + 1, e);
//    root->left = l;
//    root->right = r;
//    return root;
//}
//
//void preorder(BinaryTree<int> *root) {
//    if (root == NULL) {
//        return;
//    }
//    cout << root->data << " ";
//    preorder(root->left);
//    preorder(root->right);
//}
//
//pair<Node *, Node *> makeLLfromBST(BinaryTree<int> *root) {
//    if (root == NULL) {
//        pair<Node *, Node *> p;
//        p.first = NULL;
//        p.second = NULL;
//        return p;
//    }
//    Node *node = new Node(root->data);
//    pair<Node *, Node *> l = makeLLfromBST(root->left);
//    pair<Node *, Node *> r = makeLLfromBST(root->right);
//    pair<Node *, Node *> p;
//    if(l.first==NULL&&r.second==NULL){
//        p.first=node;
//        p.second=node;
//        return p;
//    }
//    if (l.first == NULL&&r.second!=NULL) {
//        p.first = node;
//        node->next = r.second;
//        p.second=r.second;
//        return p;
//    }
//    if (r.second == NULL&&l.first!=NULL) {
//        p.second = node;
//        p.first=l.first;
//        l.second->next=node;
//        return p;
//    }
//    p.first=l.first;
//    l.second->next=node;
//    node->next=r.first;
//    p.second=r.second;
//    return p;
//
//
//}
//
//int main() {
//    BinaryTree<int> *node = takeLevelInput();
////    triplet b = checkBST(node);
////    int arr[7]={1,2,3,4,5,6,7};
////    BinaryTree<int> *root= makeBSTfromsortedArray(arr,0,6);
////    preorder(root);
////Node *h=new Node(3);
//
//    Node* h= makeLLfromBST(node).first;
//    while (h != NULL){
//        cout << h->data << " ";
//        h=h->next;
//    }
//
//    return 0;
//
//
//}