#include <bits/stdc++.h>
using namespace std;
long long n , m , ans = 1 , ans1 = 0 , ans2 = 1 ;
char A[201][201] , R[4] ;
long long T[2][4] ;
void file(){
	freopen("bangmau.INP","r",stdin);
	freopen("bangmau.OUT","w",stdout);
}
void solve(int r)
{
    for(long long i = 1 ; i<= n ; i++)
    {
        long long r1 = 0 , sum = 0 ;
        for(long long j = 1 ; j <= m ; j++)
        {
            if(A[i][j]==R[r]||A[i][j]=='T') r1++ ;
            else
            {
                r1 = 0 ;
            }
            sum = max(sum , r1 ) ;
        }
        r1 = 0  ;
        long long r2 = 0  ;
        for(long long j =1  ; j<= m ; j++)
        {
            if(A[i][j]==R[r]||A[i][j]=='T') r1++ ;
            else
            {
                break  ;
            }
        }
        for(long long j = m ; j>= 1 ; j-- )
        {
            if(A[i][j]==R[r]||A[i][j]=='T') r2++ ;
            else
            {
                break  ;
            }
        }
        sum = max(sum , min(r1+r2 , m)) ;
        if(T[0][r]<sum)
        {
            T[0][r] = sum ;
            T[1][r] = i ;
        }
    }
}
bool comp(pair <long long , pair<long long , char > > a , pair < long long , pair <long long , char > > b )
{
    if(a.first<b.first) return 0 ;
    else if(a.first > b.first) return 1 ;
    else
    {
        if(a.second.first<b.second.first) return 1 ;
        else if(a.second.first>b.second.first) return 0 ;
        else
        {
            return a.second.second < b.second.second ;
        }
    }
}
int main(){   
    ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	//file();
    cin >> n >> m ;
    vector < pair <long long  , pair < long long , char > > >  M ;
    for(int i = 1 ; i<= n ; i++)
    {
        for(int j = 1 ; j<= m ; j++) cin >> A[i][j] ;
    }
    R[1] = 'X' ;
    R[2] = 'D' ;
    R[3] = 'V' ;
    for(int i = 1 ; i<= 3 ; i++)
    {
        solve(i) ;
        M.push_back(make_pair(T[0][i] , make_pair(T[1][i] , R[i]))) ;
    }
    sort(M.begin() , M.end() , comp) ;
    cout << M[0].first << "\n" << M[0].second.first << " " << M[0].second.second ;
    return 0;
}
