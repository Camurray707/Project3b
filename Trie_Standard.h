#ifndef PROJECT3_TRIE_STANDARD_H
#define PROJECT3_TRIE_STANDARD_H

#include <iostream>

using namespace std;

//struct Node{
//    Node *children [26];
//    bool isWord;
//};

class Trie_Standard {

private:
    Trie_Standard *children[26];
    bool isWord;
public:
    Trie_Standard();
    ~Trie_Standard();

    void insert(string word, int &opCount);
    int find(string word);
    Trie_Standard* getRoot() {return this;};
    void auto_complete(Trie_Standard* root, string word, int &opCount);
    void query(Trie_Standard* root, string word, int &opCount);
    int getSpace(Trie_Standard* node);


};


#endif //PROJECT3_TRIE_STANDARD_H
