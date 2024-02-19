#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int maxn = 10e5+5 ;
int A[maxn];
string s;
void file(){
	freopen("MAGICSEQ.INP","r",stdin);
	freopen("MAGICSEQ.OUT","w",stdout);
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	file();
    cin >> s ;
    char r = s[0] ;
    vector<int> T ;
    T.push_back(2) ;
    for(int i=1;i<s.size();i++){
        if(r==s[i]){
            T[T.size()-1] ++ ;
        }
        else{
            T.push_back(2) ;
            r = s[i] ;
        }
    }
    if(s[0]=='<'){
        int min = 1 ;
        for(int i = 0 ; i<T.size() ; i++){
            if(i%2==0){
                for(long long j = min ; j< min+T[i]-1 ; j++) cout << j << " " ;
                min = T[i] + min -1;
            }
    		else{
                for(long long j = min+T[i]-1 ; j >= min ; j--) cout << j << " " ;
                min = T[i] + min  ;
            }
        }
    }
    else{
        int min = 1 ;
        for(int i = 0 ; i<T.size() ; i++){
            if(i%2==1){
                for(long long j = min ; j< min+T[i]-1 ; j++) cout << j << " " ;
                min = T[i] + min -1;
            }
            else{
                for(long long j = min+T[i]-1 ; j >= min ; j--) cout << j << " " ;
                min = T[i] + min  ;
            }
        }
    }
    return 0;
}
