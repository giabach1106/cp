#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,max=0,s=1,j;
    int a[1000000];
    cin>>n;
    for(i=1;i<=n;i++) cin>>a[i];
    for(i=1;i<n;i++)
    {
        if(a[i+1]-a[i]==a[i+2]-a[i+1]) s++;
        else s=1;
        if(s>max) max=s;
    }
    cout<<max+1;
    return 0;
}
