#include <iostream>
#include "Trie_BST.h"
#include "Trie_Standard.h"
#include <istream>
#include <fstream>

string stringSimplify(string word);         //helper function that removes punctuations and upper-case letters

int main(int argc, char *argv[]) {
    std::cout << "TOP" << std::endl;
    //Make sure there are only two arguments: a.out and txt file input
    if (argc != 3) {
        cout<<"WRONG NUMBER OF ARGUMENTS"<<endl;
        exit(1);
    }

    //Open file from argv[1] to read
    ifstream input_file;
    input_file.open(argv[1]);
    if(!input_file.is_open()) {
        cout<<"Failed to open: "<<argv[1]<<endl;
        exit(2);
    }


    Trie_Standard standardTrie;
    Trie_BST (*root) = new Trie_BST;
    string inputWord;
    int buildTime = 0;
    int buildTimeBST = 0;
    int searchTime = 0;
    int autoCompleteTime = 0;
    int autoCompleteTimeBST = 0;
    int fullSearchTime = 0;
    int fullSearchTimeBST = 0;
    string searchWord;



    //read entire file and insert into tries
    while (!input_file.eof()) {
        input_file>>inputWord;
        standardTrie.insert(stringSimplify(inputWord), buildTime);
        root->insert( &root, stringSimplify(inputWord), 0, buildTimeBST);
    }




    if(*argv[2] == '1') {

        cout<<"Time taken to build the standard Trie is "<< buildTime <<" operations"
            <<" and space occupied by it is "<<standardTrie.getSpace(standardTrie.getRoot())<<" nodes"<<endl<<endl;
        cout<<"Time taken to build the standard Trie is "<< buildTimeBST <<" operations"
            <<" and space occupied by it is "<<(*root).getSpace((root))<<" nodes"<<endl<<endl;

        //FIXME::add BST trie here

        cout<<"Enter search string:";
        while(cin>>searchWord) {

            cout<<"Time taken to search in the standard Trie is "<<standardTrie.find(stringSimplify(searchWord))<<" comparisons"<<endl;
            cout<<"Auto-complete results using standard Trie are: ";
            standardTrie.query(standardTrie.getRoot(), stringSimplify(searchWord), autoCompleteTime);
            cout<<endl<<"Time taken to find auto-complete results in the standard Trie is "<<autoCompleteTime<<" comparisons"<<endl<<endl;

            cout<< "Time taken to search in the BST based Trie is " << root->find(root, stringSimplify((searchWord))) << " comparisons" << endl;
            cout <<"Auto-complete results using BST based Trie are: ";
            root->query(root,stringSimplify(searchWord),autoCompleteTimeBST);
            cout << endl << "Time taken to find auto-complete results in the BST based Trie is " << autoCompleteTimeBST <<" comparisons" << endl << endl;

            cout<<"Enter search string:";
        }
    }else if (*argv[2] == '2'){

        cout<<"flag: 2"<<endl;

        cout << "Time taken to build the standard Trie is " << buildTime <<
        " and the space occupied by it is " << standardTrie.getSpace(standardTrie.getRoot()) << " nodes" << endl << endl;
        cout << "Time taken to build the BST based Trie is " << buildTimeBST <<
        " and the space occupied by it is " << root->getSpace( root) << " nodes" << endl << endl;

        cout << "Time tekan to search all the strings in the standard Trie is " << fullSearchTime << " comparisons" << endl << endl;

        cout << "Time taken to search all the strings in the BST Trie is " << fullSearchTimeBST << " comparisons" << endl << endl;

    }else {
        cout<<"Wrong flag input."<<endl;
    }

    return 0;
}

string stringSimplify(string word) {
    string newWord;
    for (char i : word) {
        if (ispunct(i)) {
            continue;
        }else {
            newWord += (char(tolower(i)));
        }
    }
    return newWord;
}