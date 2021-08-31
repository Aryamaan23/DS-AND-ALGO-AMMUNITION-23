#include<bits/stdc++.h>
using namespace std;

int CountWays(int n){
    if(n<0)
    {
        return 0;
    }
    if(n==0)
    {
        return 1;
    }
    return CountWays(n-1) + CountWays(n-2) + CountWays(n-3);
}

int main(){
    int n;
    cin>>n;
    cout<<CountWays(n)<<endl;
    
    return 0;
}
