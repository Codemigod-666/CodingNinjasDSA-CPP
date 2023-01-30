#include <bits/stdc++.h>
#include "TriNodeClass.h"

using namespace std;

class Trie{
    TriNode * root;
    
    public: 
    Trie(){
        root = new TriNode('\0');
    }

    private:
    void insertword(TriNode * root, string word){
        //base case:
        if(word.size() == 0){
            root->isTerminal = true;
            return;
        }

        // small calculation:
        TriNode *child;
        int index = word[0]-'a';
        if(root->children[index] != NULL){
            child= root->children[index];
        }
        else{
            child = new TriNode(word[0]);
            root->children[index] = child;

        }

        //recursive call;
        insertword(child, word.substr(1));
    }
    public:

    void insertWord(string word){
        insertword(root,word);
    }
    private:

    bool search(TriNode *root, string word){
        if(root->children[word[0]-'a']== NULL) return false;

        if(word.size() == 1){
            return root->children[word[0]-'a']->isTerminal;
        }
        
        return search(root->children[word[0]-'a'], word.substr(1) );
    }
    public:

    bool search(string word){
        return search(root,word);
    }

    private:
    void remove(TriNode * root, string word){
        //base case;
        if(word.size() == 0){
            root->isTerminal = false;
            return;
        }
        // small calculation:
        TriNode *child;
        int index = word[0]-'a';
        if(root->children[index] != NULL){
            child = root->children[index];
        }
        else return;

        remove(child, word.substr(1));
        // check if the  node is useless or not:

        if(child->isTerminal == false){
            for(int  i = 0 ; i<26 ; i++){
                if(child->children[i] != NULL) return;
            }
            delete child;
            root->children[index] = NULL;
        }
    }
    public:
    void remove(string word){
        remove(root,word);
    }
};

int main(){
    Trie t;
    t.insertWord("and");
    t.insertWord("are");
    t.insertWord("dot");
    cout<<t.search("and")<<endl;
    t.remove("and");
    cout<<t.search("and")<<endl;

}