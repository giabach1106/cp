#include<bits/stdc++.h>
#define ll long long
using namespace std;
//const int maxn = 10e5+5 ;
//int A[maxn];
string A,B;
void file(){
	freopen("ghepso.INP","r",stdin);
	freopen("ghepso.OUT","w",stdout);
}
void max(){
	cout << endl ;
    int i = 0  , j = 0 ;
    while(i!=A.size()||j!=B.size()){
        if(i==A.size()){
            cout << B[j] ;
            j++ ;
        }
        else if(j==B.size()){
            cout << A[i] ;
            i++ ;
        }
        else{
            int check1 = i, check2 = j, checknum = 0;
            while(check1<A.size()&&check2<B.size() ){
                if(A[check1]>B[check2]){
                    checknum = 1 ;
                    break ;
                }
                else if(A[check1]<B[check2]){
                    checknum = 2 ;
                    break ;
                }
                else{
                    check1++ ;
                    check2++ ;
            	}
            }
            if(checknum==0){
                if(A.size()-i>B.size()-j){
                    cout << A[i] ;
                    i++ ;
                }
                else{
                    cout << B[j] ;
                    j++ ;
                }
            }
            else if(checknum==1){
                cout << A[i] ;
                i ++ ;
            }
            else{
                cout << B[j] ;
                j ++ ;
            }
        }
    }
}
void min(){
	int i = 0  , j = 0 ;
    while(i!=A.size()||j!=B.size()){
        if(i==A.size()){
            cout << B[j] ;
            j++ ;
        }
        else if(j==B.size()){
            cout << A[i] ;
            i++ ;
        }
        else{
            int check1 = i , check2 = j , checknum = 0 ;
            while(check1<A.size()&&check2<B.size() ){
                if(A[check1]<B[check2]){
                    checknum = 1 ;
                    break ;
                }
                else if(A[check1]>B[check2]){
                    checknum = 2 ;
                    break ;
                }
                else{
                    check1++ ;
                    check2++ ;
                }
            }
            if(checknum==0){
                if(A.size()-i>B.size()-j){
                    cout << A[i] ;
                    i++ ;
                }
                else{
                    cout << B[j] ;
                    j++ ;
                }
            }
            else if(checknum==1){
                cout << A[i] ;
                i ++ ;
            }
            else{
                cout << B[j] ;
                j ++ ;
            }
        }
    }
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	//file();
    cin >> A >> B ;
    min(); max();
    
    return 0;
}
