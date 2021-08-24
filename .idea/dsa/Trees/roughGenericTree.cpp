//#include "bits/stdc++.h"
//#include "TreeNode.h"
//
//TreeNode<int> *takeLevelInput() {
//    int rootdata;
//    cin >> rootdata;
//    TreeNode<int> *root = new TreeNode<int>(rootdata);
//    queue<TreeNode<int> *> q;
//    q.push(root);
//    while (!q.empty()) {
//        int n;
//        TreeNode<int> *node = q.front();
//        q.pop();
//        cout << "enter number of child of " << node->data << "th node" << endl;
//        cin >> n;
//        for (int i = 1; i <= n; i++) {
//            int childdata;
//            cout << "enter " << i << "th child of " << node->data << endl;
//            cin >> childdata;
//            TreeNode<int> *child = new TreeNode<int>(childdata);
//            node->children.push_back(child);
//            q.push(child);
//        }
//    }
//    return root;
//}
//
//void solve(TreeNode<int> *root, int k) {
//    if (root == NULL)
//        return;
//    root->data = k;
////    cout<<root->data<<" ";
//
//    for (int i = 0; i < root->children.size(); i++) {
//        solve(root->children[i], k + 1);
//    }
//
//}
//
//void printLevelTree(TreeNode<int> *root) {
//    queue<TreeNode<int> *> queue;
//    queue.push(root);
//    while (!queue.empty()) {
//        TreeNode<int> *t = queue.front();
//        queue.pop();
//        cout << t->data << " : ";
//        for (int i = 0; i < t->children.size(); i++) {
////            cout << t->children[i]->data << " , ";
//            queue.push(t->children[i]);
//            if (i == t->children.size()) {
//                cout << endl;
//            }
//        }
////        cout << endl;
//    }
//}
//
//void postorder(TreeNode<int> *root) {
//    if (root == NULL)
//        return;
//
//    for (int i = 0; i < root->children.size(); i++) {
//        postorder(root->children[i]);
//        if (i == root->children.size())
//            cout << endl;
//    }
//    cout << root->data << " ";
//}
//
//pair<int, int> secondMax(TreeNode<int> *root) {
//    pair<int, int> p;       //pair of max and second max with root node
//    p.first = root->data;
//    p.second = INT32_MIN;
//    for (int i = 0; i < root->children.size(); i++) {
//        pair<int, int> p1 = secondMax(root->children[i]);
//        if (p.first > p1.first) {
//            p.second = max(p.second, p1.first);        //comparing with child pairs of max nd 2nd max
//        } else if(p.first<p1.first) {
//            int temp=p.first;
//            p.first=p1.first;
//            p.second= max(temp,p1.second);
//        }
//    }
//    return p;       //returning the resultant max pair of tree after all comparisons
//}
//int nextLarger(TreeNode<int>* root,int k){
//    int val=root->data;
//    int ans=INT32_MAX;
//    if(val>k)
//        ans=val;
//    for(int i=0;i<root->children.size();i++){
//        int p= nextLarger(root->children[i],k);
//
//        ans= min(p,ans);
//    }
//    return ans;
//}
//int main() {
//    TreeNode<int> *root = takeLevelInput();
//    cout<<nextLarger(root,21);
//}