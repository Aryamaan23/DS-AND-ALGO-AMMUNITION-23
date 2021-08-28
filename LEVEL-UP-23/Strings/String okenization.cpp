#include<bits/stdc++.h>
using namespace std;


int main(){
    string input;
    getline(cin,input);
    
    
    //create a string stream object
    stringstream ss(input);
    
    // >> and << operators
    string token;
    vector<string> tokens;
    while(getline(ss,token,' ')){
        tokens.push_back(token);
    }
    
    //print all tokens
    for(auto token:tokens){
        cout<<token<<",";
    }
    return 0;
}
