#include <iostream>
#include <string>
using namespace std;

struct TrieNode {
    bool isEnd;
    TrieNode* children[26];
    TrieNode() {
        isEnd = false;
        for(int i = 0; i < 26; i++)
            children[i] = NULL; // use NULL instead of nullptr
    }
};

class Trie {
private:
    TrieNode* root;
public:
    Trie() {
        root = new TrieNode();
    }
    
    void insert(string word) {
        TrieNode* node = root;
        for(int i = 0; i < word.length(); i++) { // classic for loop
            char c = word[i];
            int idx = c - 'a';
            if(node->children[idx] == NULL)
                node->children[idx] = new TrieNode();
            node = node->children[idx];
        }
        node->isEnd = true;
    }
    
    bool search(string word) {
        TrieNode* node = root;
        for(int i = 0; i < word.length(); i++) {
            char c = word[i];
            int idx = c - 'a';
            if(node->children[idx] == NULL) return false;
            node = node->children[idx];
        }
        return node->isEnd;
    }
    
    bool startsWith(string prefix) {
        TrieNode* node = root;
        for(int i = 0; i < prefix.length(); i++) {
            char c = prefix[i];
            int idx = c - 'a';
            if(node->children[idx] == NULL) return false;
            node = node->children[idx];
        }
        return true;
    }
};

int main() {
    Trie trie;
    trie.insert("apple");
    cout << trie.search("apple") << endl;   // 1
    cout << trie.search("app") << endl;     // 0
    cout << trie.startsWith("app") << endl; // 1
    trie.insert("app");
    cout << trie.search("app") << endl;     // 1
    return 0;
}
