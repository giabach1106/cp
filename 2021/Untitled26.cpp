#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <stdio.h>
#include <sstream>
#include <iomanip>
#include<stdlib.h>
#include<string.h>
#define f1(i, n) for(int i = 1; i <= n; i++)
#define all(x) x.begin(),x.end()
#define ll long long
#define ld long double
#define pii pair<int, int>
#define pll pair<ll , ll>
#define vll vector<ll>
#define fi first
#define se second
#define mod
#define nmax 100009
using namespace std;
int n, k;
ll a[nmax], b[nmax];
vector<ll> x;
vector<ll> s;
//vector<ll> v;
ll ans;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> k;
    f1(i , n)
    {
        cin >> a[i] >> b[i];
        x.push_back(a[i]);
        x.push_back(b[i]);
    }
    sort(all(x));
    x.resize(unique(all(x)) - x.begin());
    s.resize(2 * x.size());
    //v.resize(2 * x.size());
    int l, r;
    f1(i , n)
    {
        l = lower_bound(x.begin(), x.end(), a[i]) - x.begin();
        r = lower_bound(x.begin(), x.end(), b[i]) - x.begin();
        s[l * 2] ++;
        s[r * 2 + 1] --;
    }
    for(int i = 1; i < s.size(); i++) s[i] += s[i - 1];
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == k)
        {
            if(i & 1) ans += (x[(i + 1)>>1] - x[(i - 1)>>1] - 1);
            else ans++;
        }
    }
    cout << ans;
    return 0;
}
