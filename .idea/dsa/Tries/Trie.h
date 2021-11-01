#include "TrieNode.h"

class Trie {
    TrieNode *root;
public:
    Trie() {
        root = new TrieNode('\0');
    }

private:
    void insert(TrieNode *root, string word) {
        //base case
        if (word.size() == 0) {
            root->isTerminal = true;
            return;
        }

        //small calculation
        int idx = word[0] - 'a';
        TrieNode *child;
        if (root->children[idx] != NULL) {
            child = root->children[idx];
        } else {
            child = new TrieNode(word[0]);
            root->children[idx] = child;
        }
        //recursive call
        insert(child, word.substr(1));
    }

public:
    void insert(string word) {
        insert(root, word);
    }

private:
    bool search(TrieNode *root, string word) {
        //base case
        if (word.size() == 0) {
            return root->isTerminal;
        }
        //small calculation
        int idx = word[0] - 'a';
        if (root->children[idx] == NULL) {
            return false;
        }
        //recursive call
        TrieNode *child = root->children[idx];
        return search(child, word.substr(1));
    }

public:
    bool search(string word) {
        return search(root, word);
    }

private:
    void remove(TrieNode *root, string word) {
        //base case
        if (word.size() == 0) {
            root->isTerminal = false;
            return;
        }
        //small calculation
        TrieNode *child;
        int idx = word[0] - 'a';
        if (root->children[idx] != NULL) {
            child = root->children[idx];
        }
        //word not found
        else {
            return;
        }
        //recursive call
        remove(child, word.substr(1));

        //remove useless child node
        if(!child->isTerminal){
            for (int i = 0; i < 26; ++i) {
                if(child->children[i]!=NULL){
                    return;
                }
            }
            delete child;
            root->children[idx]=NULL;
        }
        return;
    }

public:
    void remove(string word) {
        return remove(root, word);
    }
};