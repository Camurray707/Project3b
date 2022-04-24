#include "Trie_BST.h"
// Code leveraged from: https://www.geeksforgeeks.org/ternary-search-tree/

//Node struct decleration
/*   OLD Create Node Not in use anymore.
Trie_BST::TrieNode *createTrieNode(char data) {

    Trie_BST::TrieNode *tempNode = new Trie_BST::TrieNode;
    tempNode->data = data;
    tempNode->isEndOfWord = false;
    tempNode->left = nullptr;
    tempNode->eq = nullptr;
    tempNode->right = nullptr;

    return tempNode;
}
*/
Trie_BST::TrieNode * Trie_BST::insert(struct Trie_BST::TrieNode *root, std::string word, int index, int &opCount){
        /*
         * Check to see if the current node is the same length of
         * the word.  if true will set the boolen isEndOfWord to true.
         */
         if(index == word.length()){
            if(root==nullptr){
                root = new TrieNode();
                opCount++;
                root->isEndOfWord = true;
                return root;
            }
        }

        /*
         * Check to see if the current root node is NULL
         * If it is null, create a node and then set the data
         *  of that node to the word[index] letter.
         */
         if( root == nullptr){
            root = new TrieNode();
            root->data = word[index];
             opCount++;
        }

         /*
          * Checks to see if the word[index] letter is the same as the root value
          * if it is, we will check the next letter by increasing the index.
          * If the letter is larger than the current root->data it will insert the
          * letter in the right node.  else it will insert the letter in the left node.
          * This allows the BST to function with letter values.
          */
        if(word[index] == root->data){
            root->eq = insert(root->eq, word, index+1, opCount);
        }else if(word[index] > root->data){
            root->right = insert(root->right, word, index, opCount);
        }else{
            root->left = insert(root->left, word, index, opCount);
        }
}

bool Trie_BST::find(struct Trie_BST::TrieNode *root, std::string word) {

   for(int i = 0; i < word.length(); i++){
        //Check if root is null Return 0 as it doesn't match our string
        if(root == nullptr) {
            return false;
        }
        //Check if data(letter) is > < or = to word[i] advance root to next node if any of these match
        //If these are all false, return 0 as there is no match.
        if(root->data == word[i]){
            root = root->eq;
        }else if(root->data < word[i]){
            root = root->right;
        }else if(root->data > word[i]){
            root = root->left;
        }else{
            return false;
        }
        }
   //returns isEndOfWord once there is a full match for length of word string.
    return root->isEndOfWord;
}

void Trie_BST::query(Trie_BST::TrieNode * root, std::string word, int &opCount) {

    //Check if root is null Return 0 as it doesn't match our string
    if(root == nullptr) {
        return false;
    }

    int i = 0;
    while(i < word.length()){

        //Check if data(letter) is > < or = to word[i] advance root to next node if any of these match
        //If these are all false, return 0 as there is no match.
        if(root->data == word[i]){
            if(root->eq != nullptr && i != word.length() -1) {
                root = root->eq;
                i++;
            }else{
                return 0;
            }

        }else if(root->data < word[i]){
            root = root->right;
        }else if(root->data > word[i]){
            root = root->left;
        }else{
            return false;
        }
    }
    //returns isEndOfWord once there is a full match for length of word string.
    return root->isEndOfWord;


}


void Trie_BST::auto_complete(Trie_BST::TrieNode * root, std::string word, int &opCount) {
    if (root->isEndOfWord) {
        std::cout << word << " ";
    }
    Trie_BST::TrieNode *temp = root;
    for (int i = 0; i < 26; i++) {
        if (root->data) {
            {
                opCount++;
                char add = 'a' + i;
                std::string newWord = word + add;
                auto_complete(root->data, newWord, opCount);
            }
        }


    }


    int Trie_BST::getSpace(Trie_BST::TrieNode *root) {
        int totalCount = 0;

        if (root == NULL) {
            return 0;
        } else {

            getSpace(root->left);
            totalCount++;
            getSpace(root->right);
        }

        return totalCount;
    }
}