#ifndef PROJECT3_TRIE_BST_H
#define PROJECT3_TRIE_BST_H
#include <iostream>

class Trie_BST{

public:

    struct TrieNode
    {
        char data;
        bool isEndOfWord;
        TrieNode *left, *eq, *right;
        TrieNode(){
            isEndOfWord = false;
            left = nullptr;
            right = nullptr;
            eq = nullptr;
        }
    }*root;


   // TrieNode *createTrieNode(char data);   :OLD CREATE NODE not in use anymore
    TrieNode * insert(struct Trie_BST::TrieNode *root, std::string word, int index, int &opCount);
    bool find(struct TrieNode *root, std::string word);
    TrieNode * getRoot(){return root;};
    void auto_complete(Trie_BST::TrieNode * root, std::string word, int &opCount);
    void query(Trie_BST::TrieNode* root, std::string word, int &opCount);
    int getSpace(Trie_BST::TrieNode* root);
};

#endif //PROJECT3_TRIE_BST_H
