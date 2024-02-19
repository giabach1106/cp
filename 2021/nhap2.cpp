#include <bits/stdc++.h>
using namespace std;


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int test;
	cin >> test;
	for(int j=0; j<test; j++){
		int a[2001];
		int n;
		cin >> n;
		for(int i=1;i<n;i++)
			cin >> a[i];


	}
	return 0;
}


#include <bits/stdc++.h>
using namespace std;
int check(int q){
	int ans = 0;
	int p = 5,i;
	for( i=5;i<1000;i++){
		while((i>p)>0){
			ans += i/p;
			p = p*5;
		}if(ans == q)
			break;
		
	}return i;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long test,a[100000000];
	cin >> test;
	for(int i=0;i<test;i++)
		cin >> a[i];

	for(int i=0;i<test;i++){
		cout << check(a[i]) << endl;
	}

	return 0;
}


#include <bits/stdc++.h>
using namespace std;
int so0(int x)
{
    int ans=0;
    while(x)
    {
        ans+=x/5;
        x/=5;
    }
    return ans;
}
int main()
{
    int test,o=1;
    int q;
    cin >> test;
    while(t--)
    {
        cin >> q;
        int l=0,r=10000000000,mid;
        int ans=0;
        while(l<=r)
        {
            int mid=(l+r)/2;
            int kk=so0(mid);
            if(kk==q)
            {
                ans=mid;
                r=mid-1;
            }
            else if(kk<q)
            {
                l=mid+1;
            }
            else
                r=mid-1;
        }
        if(!ans)
            printf("Case %d: impossible\n",o++);
        else
            printf("Case %d: %d\n",o++,ans);
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
  int test, n, q;
  string ketqua = "";
  cin >> test;
  for(int j=0; j<test; j++){
    ketqua += "Case: " + to_string(j+1) + "\n";
    int a[99999], b[50000];
    cin >> n >> q;
    for (int i = 0; i<n; i++){
        cin >> a[i];
    }
    for (int i=0; i<q; i++){
        int dem = 0;
        int a1, a2;
        cin >> a1 >> a2;
        for(int ii=0; ii<n; ii++){
            if((a[ii]>=a1) && (a[ii]<=a2)){
                dem++;
            }
        }
        ketqua += to_string(dem) + "\n";
    }
  }
  cout << ketqua;
  return 0;
  
}


#include <bits/stdc++.h>
using namespace std;
const int Maxn = 1e5+5;
int n,a[Maxn],q;
int main(){
	int test,l,r;
	cin >> test;
	for(int c=1;c<=test;i++){
		cout << "Case " << i << ":/n";
		cin >> n >> q;
		for(int i=0;i<n;i++) 
			cin >> a[i];
		for(int i=0;i<q;i++){
			cin >> l >> q;
			cout << upper_bound(a,a+n,r) -lower_bound(a,a+n,l);
		}

	}
	return 0;
}

#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e5+5, oo = 1e9+9;
int n, h, a[maxn];
bool check(int speed){
	int sum = 0;
	for (int i = 0; i < n; i++)
		sum += (a[i] + speed - 1) / speed; // sum += a[i] / speed + (a[i] % speed > 0)
		/*
		sum += a[i] / speed;
		if (a[i] % speed > 0) sum++;
		*/
	return sum <= h;
}
 int solve(){
	int l = 1, r = 1e9+9;
	while (l <= r){
		int mid = (l + r) / 2;
		if (!check(mid)) l = mid + 1;
		else if (!check(mid - 1)) return mid;
		else r = mid - 1;
	}
	return -1;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int test,testt[15],l,r;
	cin >> test;
	
	while(test--){
		int n,h,tong=0;
		cin >> n >> h;
		for (int i = 0; i < n; i++) cin >> a[i];
			cout << solve();
	}
	return 0;
}

#include <bits/stdc++.h>
using namespace std;
const int maxn = 101;
int a[maxn];
void file(){
	freopen(".INP","r",stdin);
	freopen(".OUT","w",stdout);
}
bool solution(int i, int j, int n){
	if(j>n){
		i++;
		j=i+1;
	}if(i>n) return 0;
	for(int x=1;x<=n;x++){
		if(a[i] + a[j] == x)
			return 1;
		else return solution(i,j++,n);
	}
}
void nhap(){
	int t;
	cin >> t;
	for(int i=0;i<t;i++){
		int n;
		cin >> n;
		for(int i=0;i<n;i++)
			cin >> a[i];
		for(int i=0;i<n;i++){
			if(solution(1,1,n)) cout << "YES" << endl;
			else cout << "NO" << endl;
		}
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	//file();
	nhap();
	//solution();

	return 0;
}

#include <bits/stdc++.h>
using namespace std;
const int maxn = 1001 ;
int A[maxn];
void file(){
	freopen(".INP","r",stdin);
	freopen(".OUT","w",stdout);
}
void nhap(){
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> A[i];
	}
}
void solution(){
	int max=0, dem=0;
	for(int i=0;i<n;i++){
		if(A[i] < A[i+1])
			dem++;
	}cout << dem+1;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	//file();
	nhap();
	solution();
	

//cout<<setprecision(3)<<fixed<<
	return 0;
}


