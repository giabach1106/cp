#include<iostream>
using namespace std ;
int main ()
{
    string n ;
    while(cin >> n ){
        if(n=="Nam"){
            cout << "Bong";
        } else {
            cout << n ;
        }
        cout << " " ;
    }
}