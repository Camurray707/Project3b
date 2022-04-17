#include "Trie_Standard.h"

Trie_Standard::Trie_Standard() {
    this->isWord = false;
    for (int i = 0; i < 26; i++) {
        this->children[i] = nullptr;
    }
}
Trie_Standard::~Trie_Standard() {}
void Trie_Standard::insert(string word) {
    Trie_Standard *temp = this;

    for (int i = 0; i < word.size(); i++){
        int index = word[i] - 'a';           //'a' - 'a' = 0 signifying letter 'a' is at index 0
        if (temp->children[index] == nullptr) {
            temp->children[index] = new Trie_Standard();
        }
        temp = temp->children[index];
    }
    temp->isWord = true;
}

bool Trie_Standard::find(string word) {
    Trie_Standard* temp = this;

    for (int i = 0; i < word.size(); i++) {
        int index = word[i] - 'a';
        if (temp->children[index] != nullptr) {
            temp = temp->children[index];

        }else {
            return false;
        }
    }
    bool result = (temp->isWord) ?  true :  false;
    return result;
}
void Trie_Standard::query(Trie_Standard* root, string word) {
    Trie_Standard* temp = root;

    for (int i = 0; i < word.size(); i++) {
        int index = word[i] - 'a';
        if (temp->children[index] != nullptr) {
            temp = temp->children[index];

        }
    }
    auto_complete(temp, word);
}
void Trie_Standard::auto_complete(Trie_Standard* root, string word) {
    if (root->isWord) {
        cout<<word<<endl;
    }
    Trie_Standard* temp = root;
    for (int i = 0; i < 26; i++) {
        if (temp->children[i] != nullptr) {
            char add = 'a' + i;
            string newWord = word + add;
            auto_complete(root->children[i], newWord);
        }
    }

}