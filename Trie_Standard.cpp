#include "Trie_Standard.h"

Trie_Standard::Trie_Standard() {
    this->isWord = false;
    for (int i = 0; i < 26; i++) {
        this->children[i] = nullptr;
    }
}
Trie_Standard::~Trie_Standard() {}

void Trie_Standard::insert(string word, int &opCount) {
    //FIXME::numbers are not defined in alphabet array.
    Trie_Standard *temp = this;

    for (int i = 0; i < word.size(); i++){
        int index = word[i] - 'a';           //'a' - 'a' = 0 signifying letter 'a' is at index 0
        if (temp->children[index] == nullptr) {
            //opCount++;
            temp->children[index] = new Trie_Standard();
        }
        opCount++;
        temp = temp->children[index];
    }
    temp->isWord = true;
}

int Trie_Standard::find(string word) {
    int opCount = 0;
    Trie_Standard* temp = this;

    for (int i = 0; i < word.size(); i++) {
        int index = word[i] - 'a';
        opCount++;
        if (temp->children[index] != nullptr) {
            temp = temp->children[index];

        }else {
            return opCount;
        }
    }
    return opCount;
}

void Trie_Standard::findAll(Trie_Standard* root, int& opCount) {
    Trie_Standard * temp = root;

    for (int i = 0; i < 26; i++) {
        if (root->children[i] != nullptr) {
            temp = root->children[i];
            opCount++;
            findAll(temp, opCount);
        }
    }

}
void Trie_Standard::query(Trie_Standard* root, string word, int &opCount) {
    Trie_Standard* temp = root;

    for (int i = 0; i < word.size(); i++) {
        int index = word[i] - 'a';
        if (temp->children[index] != nullptr) {
            temp = temp->children[index];

        }else {
            cout<<"No query for \'"<<word<<"\' found."<<endl;
            return;
        }
    }
    auto_complete(temp, word, opCount);
}
void Trie_Standard::auto_complete(Trie_Standard* root, string word, int &opCount) {

    if (root->isWord) {
        cout<<word<<" ";
    }
    Trie_Standard* temp = root;
    for (int i = 0; i < 26; i++) {
        if (temp->children[i] != nullptr) {
            opCount++;
            char add = 'a' + i;
            string newWord = word + add;
            auto_complete(root->children[i], newWord, opCount);
        }
    }

}

int Trie_Standard::getSpace(Trie_Standard* node) {
    int nodeCount = 0;
    for (Trie_Standard* i: node->children) {
        if (i == nullptr) {nodeCount++;}
        else {
            nodeCount++;
            nodeCount += getSpace(i);
        }
    }
    return nodeCount;
}