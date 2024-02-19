#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void file (){
  freopen ("ghepso.inp", "r", stdin);
  freopen ("ghepso.out", "w", stdout);
}
void file1(){
  freopen ("i", "r", stdin);
  freopen ("o", "w", stdout);
}
int main() {
  //file();
  //file1();
  string a, b;
  cin >> a >> b;
  string a1 = a;
  string b1 = b;
  string benhat = "";
  string lonnhat = ""; 
  vector <char> vmax;// 4181
  vector <char> vmin;//20
  while (a1.size() != 0 && b1.size() != 0){
    if (a1[0] > b1[0]){
      vmin.push_back(b1[0]);
      b1.erase(0, 1);
    }
    else{
      vmin.push_back(a1[0]);
      a1.erase(0, 1);
    }
  }
  for (ll i = 0; i < vmin.size(); i++){
    benhat = benhat + vmin[i];
  }
  benhat = benhat + a1 + b1;
  cout << benhat << endl;
  while (a.size() != 0 && b.size() != 0){
    if (a[0] > b[0]){
      vmax.push_back(a[0]);
      a.erase(0, 1);
    }
    else{
      vmax.push_back(b[0]);
      b.erase(0, 1);
    }
  }
  for (ll i = 0; i < vmax.size(); i++){
    lonnhat = lonnhat + vmax[i];
  }
  lonnhat = lonnhat + a + b;
  cout << lonnhat;
}

