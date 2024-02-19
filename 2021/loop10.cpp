#include <stdlib.h>
#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
	int n,a=0;
	cin >> n;
	while(n>0)
	{
		for(int i=1;i<n;i++)
			cout <<" ";
		for(int x=0;x<=a;x++)
			cout <<"*";
		for(int x=0;x<a;x++)
			cout <<"*";
		n--;
		a++;
		cout <<endl;
	}


	return 0;

}