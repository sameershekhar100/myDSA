//#include "bits/stdc++.h"
//#include "BinaryTreeNode.h"
//
//using namespace std;
//
//
//
//BinaryTree<int> *makeTreefromPre(int *pre, int *in, int inS, int inE, int preS, int preE) {
//    if (inS > inE) {
//        return NULL;
//    }
//    int rootData = pre[preS];
//    int rootIdx = -1;
//    for (int i = inS; i <= inE; i++) {
//        if (in[i] == rootData) {
//            rootIdx = i;
//            break;
//        }
//    }
//    int linS = inS;
//    int linE = rootIdx - 1;
//    int lpreS = preS + 1;
//    int lpreE = linE - linS + lpreS;
//    int rpreS = lpreE + 1;
//    int rpreE = preE;
//    int rinS = rootIdx + 1;
//    int rinE = inE;
//    BinaryTree<int> *root = new BinaryTree<int>(rootData);
//    root->left = makeTreefromPre(pre, in, linS, linE, lpreS, lpreE);
//    root->right = makeTreefromPre(pre, in, rinS, rinE, rpreS, rpreE);
//    return root;
//}
//
//BinaryTree<int> *makeTreefromPost(int *post, int *in, int inS, int inE, int posS, int posE) {
//    if (inS > inE) {
//        return NULL;
//    }
//    int rootData = post[posE];
//    BinaryTree<int> *root = new BinaryTree<int>(rootData);
//    int rootIdx = -1;
//    for (int i = inS; i <= inE; i++) {
//        if (in[i] == rootData) {
//            rootIdx = i;
//            break;
//        }
//    }
//    int linS = inS;
//    int linE = rootIdx - 1;
//    int lposS = posS;
//    int lpoE = linE - linS + lposS;
//    int rinS = rootIdx + 1;
//    int rinE = inE;
//    int rposS = lpoE + 1;
//    int rposE = posE - 1;
//
//    root->left = makeTreefromPost(post, in, linS, linE, lposS, lpoE);
//    root->right = makeTreefromPost(post, in, rinS, rinE, rposS, rposE);
//
//    return root;
//
//}
//
//BinaryTree<int> *buildTree(int *post, int *in, int size) {
////    return makeTreefromPre(pre, in, 0, size - 1, 0, size - 1);
//    return makeTreefromPost(post, in, 0, size - 1, 0, size - 1);
//
//}
//
//int main() {
//    int pre[] = {1, 2, 4, 5, 3, 6, 7};
//    int post[] = {4, 5, 2, 6, 7, 3, 1};
//    int in[] = {4, 2, 5, 1, 6, 3, 7};
//    BinaryTree<int> *root = buildTree(post, in, 7);
//
//    printlevelBT(root);
//
//
//    delete root;
//}