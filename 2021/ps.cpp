#include<bits/stdc++.h>
using namespace std ;
int A[1001] , B[1001] ;
void file(){
	freopen("PS.INP","r",stdin);
	freopen("PS.OUT","w",stdout);
}
bool comp(pair<int , int > a , pair < int  , int > b )
{
    return a.first * b.second < b.first * a.second ;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	//file();
    int n , m , k ;
    cin >> n >> m >> k;
    for(int i = 1 ; i<= n ; i++) cin >> A[i] ;
    for(int i = 1 ; i<= m ; i++) cin >> B[i];
    vector< pair < int , int > >  T ;
    for(int i = 1 ; i<= n ; i++)
    {
        for(int j = 1 ; j <= m ; j++)
        {
            T.push_back(make_pair(A[i] , B[j])) ;
        }
    }
    sort(T.begin() , T.end() , comp ) ;
    int k1 = 0 ;
    for(int i = 0 ; i< n*m ; i++)
    {
        if(i==0)
        {
            k1 ++ ;
        }
        else
        {
            if(T[i-1].first*T[i].second < T[i].first*T[i-1].second) k1 ++ ;
        }
        if(k1==k)
        {
            int gcd = __gcd(T[i].second , T[i].first) ;
            cout << T[i].first/gcd << " " << T[i].second/gcd ;
            break ;
        }
    }
}


