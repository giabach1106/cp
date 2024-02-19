#include <bits/stdc++.h>
using namespace std;

struct PS{
	int tu;
	int mau;
};

PS a, b, c;
int x, y, z;

PS chuyenPhanSo(int x, int y, int z){
	PS p;
	p.tu = z * x + y;
	p.mau = z;
	return rutGon(p);
}

int ucln(int a, int b){
	
}

PS rutGon(PS a){
	int uc = ucln(a.tu, a.mau);
	a.tu /= uc;
	a.mau /= uc;
	return a;
}


int main(){
	cin >> x >> y >> z;
	a = chuyenPhanSo(x, y, z);
	cin >> x >> y >> z;
	b = chuyenPhanSo(x, y, z);
	cin >> x >> y >> z;
	c = chuyenPhanSo(x, y, z);
	
	cout << a.tu << " " << a.mau;
	
	return 0;
}


