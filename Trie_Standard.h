#ifndef PROJECT3_TRIE_STANDARD_H
#define PROJECT3_TRIE_STANDARD_H

#include <iostream>

using namespace std;

class Trie_Standard {

private:
    Trie_Standard *children[26];
    bool isWord;
public:
    Trie_Standard();
    ~Trie_Standard();

    void insert(string word, int &opCount);                                 //Inserts word into trie, and count number of operations it takes
    int find(string word);                                                  //Finds first occurrence of word and returns number of operations it took
    void findAll(Trie_Standard* root, int& opCount);                        //Loop through entire trie and keep count of operations it takes
    Trie_Standard* getRoot() {return this;};                                //Returns root node
    void auto_complete(Trie_Standard* root, string word, int &opCount);     //Prints all words in trie starting with 'word' and keep count of operations
    void query(Trie_Standard* root, string word, int &opCount);             //Wrapper function to make sure 'word' is in the trie
    int getSpace(Trie_Standard* node);                                      //Return total nodes used in building trie
};

#endif //PROJECT3_TRIE_STANDARD_H
