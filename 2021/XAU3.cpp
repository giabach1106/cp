#include <bits/stdc++.h>
using namespace std;

int main(){
    int s[100];
	char a,b;
	cin >>a>>b;
		cout << b-a-1<<endl;
		for(int i=0;i<b-a-1;i++)
		    cout << char(a+i+1)<<" ";
	return 0;
}