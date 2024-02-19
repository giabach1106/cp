#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,a[100]; 	
	cin >> n;
	for(int i=0;i<n;i++)
		cin >> a[i];

	
	for(int i=0;i<n-1;i++){
		for(int j=i;j<n;j++){
			if(a[j]%2==0){
		      int tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
			}
            
		}

	}for(int i=0;i<n;i++)
		cout << a[i]<<" ";

return 0;
	
}