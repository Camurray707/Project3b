#ifndef PROJECT3_TRIE_BST_H
#define PROJECT3_TRIE_BST_H
#include <iostream>


class Trie_BST{

public:
    char data;
    bool isEndOfWord;
    Trie_BST *left, *eq, *right;

    Trie_BST(){

        this->isEndOfWord = false;
        this->left = NULL;
        this->eq = NULL;
        this->right = NULL;
    }

   // TrieNode *createTrieNode(char data);   :OLD CREATE NODE not in use anymore
    void insert(Trie_BST ** root, std::string word, int index, int &opCount);
    bool find( Trie_BST *root, std::string word);
   // Trie_BST * getRoot(){return this;};
    void auto_complete( Trie_BST* root, std::string word, int &opCount);
    void query( Trie_BST* root, std::string word, int &opCount);
    int getSpace( Trie_BST* root);
};



#endif //PROJECT3_TRIE_BST_H
