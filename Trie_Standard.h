#ifndef PROJECT3_TRIE_STANDARD_H
#define PROJECT3_TRIE_STANDARD_H

#include <iostream>

using namespace std;

class Trie_Standard {
private:
    Trie_Standard* children;
    bool isWord;
public:
    Trie_Standard() {
        children  = new Trie_Standard[26];
        isWord = false;
    };
    ~Trie_Standard();

    void insert(string word) {

    }
};


#endif //PROJECT3_TRIE_STANDARD_H
