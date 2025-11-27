#include<bits/stdc++.h>
using namespace std;

class TrieNode{
    public:
    char data;
    TrieNode* children[26];
    bool isTerminal;

    TrieNode(char ch){
        data=ch;
        for (int i = 0; i < 26; i++)
        {
                children[i]=NULL;
        }
        isTerminal=false;
    }
};

class Trie{
    public:
    TrieNode* root;

    Trie(){
        root=new TrieNode('\0');
    }

    void insertUtil(TrieNode* root,string word){

        //base case
        if(word.length()==0){
            root->isTerminal=true;
            return;
        }

        int index=word[0]-'A';//assumption all string are caps
        TrieNode* child;

        if(root->children[index]!=NULL){ //present
            child=root->children[index];
        }else{ // absent
            child=new TrieNode(word[0]);
            root->children[index]=child;
        }

        insertUtil(child,word.substr(1));
    }

    void insertWord(string word){
        insertUtil(root,word);
    }

    void deleteUtil(TrieNode* root,string word){

        //base case
        if(word.length()==0){
            root->isTerminal=false;
            return;
        }

        int index=word[0]-'A';//assumption all string are caps
        TrieNode* child;

        if(root->children[index]!=NULL){ //present
            child=root->children[index];
        }else{ // absent
            child=new TrieNode(word[0]);
            root->children[index]=child;
        }

        deleteUtil(child,word.substr(1));
    }

    void deleteWord(string word){
        deleteUtil(root,word);
    }

    bool searchUtil(TrieNode* root,string word){
        if(word.length()==0){
            return root->isTerminal;
        }

        int index=word[0]-'A';

        if(root->children[index]!=NULL){
            return searchUtil(root->children[index],word.substr(1));
        }else{
            return false;
        }
    }

    bool search(string word){
        return searchUtil(root,word);
    }
};

int main()
{
    Trie* t=new Trie();

    t->insertWord("ARM");
    t->insertWord("DO");
    t->insertWord("TIME");

    cout<<"Present or not: "<<t->search("TIME")<<endl;
    t->deleteWord("TIME");
    cout<<"Present or not: "<<t->search("TIME")<<endl;
    cout<<"Present or not: "<<t->search("TIM")<<endl;
return 0;
}