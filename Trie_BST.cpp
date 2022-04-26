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

void Trie_BST::insert(Trie_BST ** root, std::string word, int index, int &opCount) {
    /*
     * Check to see if the current node is the same length of
     * the word.  if true will set the boolen isEndOfWord to true.
     */
    /*
        if (index == word.length()) {
            if ((*root) == nullptr) {
                (*root) = new Trie_BST;
                opCount++;
                (*root)->isEndOfWord = true;fixme::moved this logic to line 44
                return;
            }
        }
*/
        /*
         * Check to see if the current root node is NULL
         * If it is null, create a node and then set the data
         *  of that node to the word[index] letter.
         */
         if( (*root) == nullptr){
             (*root) = new Trie_BST;
             (*root)->data = word[index];
             opCount++;
             if(index == word.length()) {
                 opCount++;
                 (*root)->isEndOfWord = true;
                 return;        //fixme::once ending node is created and boolean is set to true, end inserting.
             }
        }
        /*
         * Checks to see if the word[index] letter is the same as the root value
         * if it is, we will check the next letter by increasing the index.
         * If the letter is larger than the current root->data it will insert the
         * letter in the right node.  else it will insert the letter in the left node.
         * This allows the BST to function with letter values.
         */

        if (word[index] == (*root)->data) {
            insert(&(*root)->eq, word, index + 1, opCount);
        } else if (word[index] > (*root)->data) {
            insert(&(*root)->right, word, index, opCount);
        } else if (word[index] < (*root)->data) {
            insert(&(*root)->left, word, index, opCount);
        }

    //this->isEndOfWord = true;
}

//fixme::find function works
bool Trie_BST::find(Trie_BST *root, std::string word) {

    if (word[0] < root->data) {root = root->left;}
    else if (word[0] > root->data) {root = root->right;}
    else {root = root->eq;}

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
            i--;
            root = root->right;
        }else if(root->data > word[i]){
            i--;
            root = root->left;
        }else{
            return false;
        }
        }
   //returns isEndOfWord once there is a full match for length of word string.
    return root->isEndOfWord;
}

void Trie_BST::query(Trie_BST *root, std::string word, int &opCount) {

     Trie_BST * temp = root;

    for (int i = 0; i < word.size(); i++) {

        if (temp->data == word[i]) {
            temp = temp->eq;
        }else if(temp->data < word[i]){
            temp = temp->right;
        } else if (temp->data > word[i]) {
            temp = temp->left;
        }else{
                std::cout<<"No query for \'"<<word<<"\' found."<< std::endl;
                return;
            }
    }
    auto_complete(temp, word, opCount);
}


void Trie_BST::auto_complete(Trie_BST * root, std::string word, int &opCount) {
    if (root->isEndOfWord) {
        std::cout << word << ", ";
    }

    if (root != nullptr) {
        std::string newWord;
        if (root->left != nullptr) {
            opCount++;
            newWord = word + root->data;
            auto_complete(root->left, word, opCount);
        }
        if (root->eq != nullptr) {
            opCount++;
            newWord = word + root->data;
            auto_complete(root->eq, word, opCount);
        }
        if (root->right != nullptr) {
            opCount++;
            newWord = word + root->data;
            auto_complete(root->right, word, opCount);
        }

    }
}

int Trie_BST::getSpace(Trie_BST *root) {
        if (root == NULL) {
            return 0;
        }
        return 1 + getSpace(root->left) + getSpace(root->eq) + getSpace(root->right);
}



