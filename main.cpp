#include <iostream>
#include "Trie_BST.h"
#include "Trie_Standard.h"

int main() {
    Trie_Standard test;
    test.insert("test");
    test.insert("testing");
    test.insert("tested");
    test.insert("tester");
    test.insert("tessa");
    test.insert("testosterone");
    test.insert("testify");
    test.insert("testra");
    test.insert("testaslone");
    test.insert("testcrude");
    test.insert("apple");
    test.insert("tesla");
    test.insert("tesco");
    test.insert("tesho");
    test.insert("tease");
    test.insert("testy");
    test.insert("zesty");
    test.insert("tesoon");




    test.query(test.getRoot(), "ze");

    return 0;
}