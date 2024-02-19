#include <iostream>
#include <math.h>
#include <numeric>
#include <algorithm>
using namespace std;
long long power(long long n){
  long long count = 1;
  for (long long i = 1; i <=n;i++){
    count *= 2;
  }
  return count;
}
bool checkfermat(long long n){
  if (power(n) % n == 2) return true;
  else return false;
}
bool checkprime(long long n){
  for (long long i = 2; i * i <= n; i++){
    if (n % i == 0)return false;
  }
  return true;
}
bool checkcuoicung (long long n){
  if (checkprime(n))return false;
  else return true;
}
int main(){
  for (long long i = 2; i <= 1000000; i++){
    if (checkfermat(i)){
      if (checkcuoicung(i)){
        cout << i << " ";
      }
    }
  }
}
