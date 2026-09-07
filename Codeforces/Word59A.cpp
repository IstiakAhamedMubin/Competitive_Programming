#include<bits/stdc++.h>
using namespace std;
int main (){
    string word;
    cin>> word;
    int upper = 0, lower = 0;

    for ( int i = 0; i < word.size();i++){
        if(isupper(word[i])) {
           upper++;
        }
        else {
            lower ++;
        }
    }
    if (lower>=upper){
        for(int i = 0; i< word.size(); i++) {
            cout<< char(tolower(word[i]));
        }
    }
    else{
        for(int i = 0; i< word.size(); i++) {
            cout<< char(toupper(word[i]));
        }
    }
}