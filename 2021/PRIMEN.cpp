#include<bits/stdc++.h>
using namespace std ; 
int main ()
{
    string s ; 
    cin >> s ; 
    long long ans = 0 ; 
    for(long long i = 0 ; i< s.size() ; i++){
        if(s[i]=='2'||s[i]=='3'||s[i]=='5'||s[i]=='7') ans ++ ; 
    }
    cout << ans ; 
}