#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

struct TrieNode {
    bool isEnd;
    TrieNode* children[26];
    TrieNode() {
        isEnd = false;
        for(int i = 0; i < 26; i++)
            children[i] = NULL;
    }
};

class Trie {
private:
    TrieNode* root;
public:
    Trie() { root = new TrieNode(); }
    
    void insert(string word) {
        TrieNode* node = root;
        for(int i = 0; i < word.length(); i++){
            int idx = word[i] - 'a';
            if(node->children[idx] == NULL)
                node->children[idx] = new TrieNode();
            node = node->children[idx];
        }
        node->isEnd = true;
    }
    
    vector<string> getSuggestions(string prefix) {
        vector<string> res;
        TrieNode* node = root;
        string cur = "";
        for(int i = 0; i < prefix.length(); i++){
            int idx = prefix[i] - 'a';
            if(node->children[idx] == NULL) return res;
            node = node->children[idx];
        }
        // DFS from node to get suggestions
        dfs(node, prefix, res);
        return res;
    }
    
    void dfs(TrieNode* node, string word, vector<string> &res){
        if(res.size() == 3) return;
        if(node->isEnd) res.push_back(word);
        for(int i = 0; i < 26; i++){
            if(node->children[i] != NULL)
                dfs(node->children[i], word + char('a'+i), res);
        }
    }
};
