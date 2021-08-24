//#include "C:\Users\LENOVO\CLionProjects\myDSA\.idea\dsa\Trees\BinaryTrees\BinaryTreeNode.h"
#include "iostream"

class BST {
    BinaryTree<int> *root;

public:

    BST() {
        root = NULL;
    }

    ~BST() {
        delete root;
    }

//    int mini(BinaryTree<int> *node) {
//        if (node == NULL) {
//            return INT32_MAX;
//        }
//        int l = mini(node->left);
//        int r = mini(node->right);
//        return min(l, min(r, node->data));
//    }

private:
    BinaryTree<int> *deleteData(int data, BinaryTree<int> *node) {
        //if root==NULL
        if (node == NULL) {
            return NULL;
        }
//        if data<root's data call to the left part
        if (node->data > data) {
            node->left = deleteData(data, node->left);
            return node;
        }
//        if data>root's data call to the right part
        else if (node->data < data) {
            node->right = deleteData(data, node->right);
            return node;
        }
//       if data to be deleted is root data
        else {
            if (node->left == NULL && node->right == NULL) {
                delete node;
                return NULL;
            }
//            if left side is null delete root data nd pass the right subtree through a temp tree
            else if (node->left == NULL) {
                BinaryTree<int> *temp = node->left;
                node->left = NULL;
                delete node;
                return temp;
            } else if (node->right == NULL) {
                BinaryTree<int> *temp = root->right;
                node->right = NULL;
                delete node;
                return temp;
            }
//            worst case where tree has its both children here we will find the min of root's right child delete that node and
//            set the root data to tha min value
            else {
                BinaryTree<int> *minNode = node->right;
                while (minNode->left != NULL) {
                    minNode = minNode->left;    ///fun to find the min value
                }
                int mini = minNode->data;
                node->data = mini;
                node->right = deleteData(mini, node->right);
                return node;
            }
        }
    }

public:
    void deleteData(int data) {
        this->root = deleteData(data,this->root);
    }

private:
    BinaryTree<int> *insertData1(int data, BinaryTree<int> *node) {
        if (node == NULL) {
            BinaryTree<int> *newNode = new BinaryTree<int>(data);
            return newNode;
        }
        if (data < node->data) {
            node->left = insertData1(data, node->left);
        } else
            node->right = insertData1(data, node->right);

        return node;
    }

public:
    void insertData(int data) {
        this->root = insertData1(data, this->root);
    }

private:
    bool hasData1(int data, BinaryTree<int> *node) {
        if (node == NULL) {
            return false;
        }
        if (root->data == data) {
            return true;
        } else if (data < root->data) {
            return hasData1(data, root->left);
        } else {
            bool b2 = hasData1(data, root->right);
            return b2;
        }
    }


void printBT(BinaryTree<int> *node) {
    if (node == NULL)
        return;
    cout << node->data << " : ";
    if (node->left != NULL)
        cout << "L" << node->left->data;
    if (node->right != NULL)
        cout << " R" << node->right->data;
    cout << endl;
    printBT(node->left);
    printBT(node->right);
}
public:
    bool hasData(int data) {
        return hasData1(data, root);
    }

    void printTree() {
        printBT(this->root);
    }
};