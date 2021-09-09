//--------------------------------------------------------------------------------------------------------------------------------------------

#include<bits/stdc++.h>

using namespace std;

//--------------------------------------------------------------------------------------------------------------------------------------------
//checking scrambled words

bool isScramble(string word,string scrambledword){
    if(word.size() != scrambledword.size()) return false;
    map<char, int>alphamap;
    for(int i=0;i<word.size();i++)
        alphamap[word[i]]++;

    bool isscram = false;
    for(int i = 0;i<scrambledword.size();i++){
        if(alphamap[scrambledword[i]] > 0) isscram = true;
        else return false;
    }
    for(int i = 0;i<word.size();i++)
    {
        if(word[i] == scrambledword[i]) return false;
        isscram = true;
    }
    return true;
}

//---------------------------------------------------------------------------------------------------------------------
//Driver Code

int main(){
    int testcase;
    cin>>testcase;
    while(testcase--){
        string word;
        string scrambledword;
        cin>>word>>scrambledword;
    
        bool c=isScramble(word,scrambledword);
        if(c)
            cout<<"Correct"<<endl;
        else
            cout<<"InCorrect"<<endl;

    }

    return 0;
}

//----------------------------------------------------------------------------------------------------------------------