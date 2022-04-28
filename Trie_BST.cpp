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
         * Check to see if the current root node is NULL
         * If it is null, create a node and then set the data
         *  of that node to the word[index] letter.
         */
         if( (*root) == nullptr){

                 (*root) = new Trie_BST;
                 (*root)->data = word[index];
                 opCount++;
            if(index == word.length() - 1){
               // opCount++;
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
            if (index == word.length() - 1) {
                return;
            }
            insert(&(*root)->eq, word, index + 1, opCount);
        } else if (word[index] > (*root)->data) {
            insert(&(*root)->right, word, index, opCount);
        } else if (word[index] < (*root)->data) {
            insert(&(*root)->left, word, index, opCount);
        }
}

bool Trie_BST::find(Trie_BST *root, std::string word, int &opCount) {
    Trie_BST *temp = root;
    int i = 0;
    while (!root->isEndOfWord && i < word.length() -1) {
        //Check if root is null Return 0 as it doesn't match our string
        if (temp == nullptr) {
            return false;
        }
        //Check if data(letter) is > < or = to word[i] advance root to next node if any of these match
        //If these are all false, return 0 as there is no match.
        if (temp->data == word[i]) {
            temp = temp->eq;
            i++;
        } else if (temp->data < word[i]) {
            temp = temp->right;
        } else if (temp->data > word[i]) {
            temp = temp->left;
        } else {
            return false;
        }
    }
    opCount = opCount + word.length();  //add last computation as the final letter also has the isEndOfWordFlag
    return temp->isEndOfWord;//returns isEndOfWord once there is a full match for length of word string.
}

void Trie_BST::query(Trie_BST *root, std::string word, int &opCount) {

    Trie_BST *temp = root;
    int i = 0;
    std::string newWord;
    while ((!temp->isEndOfWord ||  i < word.length()) && newWord != word) {
        if (temp->data == word[i]) {
            newWord = newWord + word[i];
            if (temp->eq != nullptr && newWord != word) {
                temp = temp->eq;
            }
            i++;
        } else if (temp->data < word[i]) {
            if ( temp->right == nullptr) {
                std::cout << "No query for \'" << word << "\' found." << std::endl;
                return;
            }
            temp = temp->right;
        } else if (temp->data > word[i]) {
            if (temp->left == nullptr) {
                std::cout << "No query for \'" << word << "\' found." << std::endl;
                return;
            }
            temp = temp->left;
        } else {
            std::cout << "No query for \'" << word << "\' found." << std::endl;
            return;
        }
    }
    opCount = opCount + word.size();
    auto_complete(temp, newWord, opCount);
}
void Trie_BST::auto_complete(Trie_BST * root, std::string word, int &opCount) {
    std::string newWord;
    if (root->isEndOfWord) {
        opCount++;
        std::cout<<word<<" ";
        if(root->eq != nullptr) {
            root = root->eq;
            newWord = word + root->data;
            auto_complete(root, newWord, opCount);
            return;
        }else{return;}
    }else {
        if (root->left != nullptr) {
            Trie_BST* leftRoot = root->left;
            std::string leftWord = word;
            leftWord.pop_back();
            leftWord = leftWord + leftRoot->data;
            auto_complete(leftRoot, leftWord, opCount);
        }
        if (root->right != nullptr){
            Trie_BST* rightRoot = root->right;
            std::string rightWord = word;
            rightWord.pop_back();
            rightWord = rightWord + rightRoot->data;
            auto_complete(rightRoot, rightWord, opCount);
        }
        if (root->eq != nullptr) {
            Trie_BST* middleRoot = root->eq;
            std::string middleWord =  word + middleRoot->data;
            auto_complete(middleRoot, middleWord, opCount);
        }

    }
}

/*****
void Trie_BST::auto_complete(Trie_BST * root, std::string word, int &opCount) {
    std::string leftWord;
    std::string middleWord;
    std::string rightWord;

    if (root->isEndOfWord) {
        //word = word + root->data;
        opCount++;
        std::cout << word << " ";
        if (root->eq != nullptr) {
            root = root->eq;
            middleWord = word + root->data;
            auto_complete(root, middleWord, opCount);
        } else { return; }
    } else {
        if (root != nullptr) {
            leftWord = middleWord = rightWord =  word + root->eq->data;
            root = root->eq;
            if (root->left != nullptr) {
                leftWord.pop_back();
                leftWord = leftWord + root->left->data;
                auto_complete(root->left, leftWord, opCount);
            }
            if (root->eq != nullptr) {
                opCount++;
                middleWord = middleWord + root->eq->data;
                auto_complete(root, middleWord, opCount);
            }
            if (root->right != nullptr) {
                rightWord.pop_back();
                rightWord = rightWord + root->right->data;
                auto_complete(root->right, rightWord, opCount);
            }
        }
    }
}
*****/
int Trie_BST::getSpace(Trie_BST *root) {
        if (root == NULL) {
            return 0;
        }
        return 1 + getSpace(root->left) + getSpace(root->eq) + getSpace(root->right);
}



