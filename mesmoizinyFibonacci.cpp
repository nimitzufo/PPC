#include <iostream>
using namespace std;
#define MAX 30
vector<int> fs(MAX, -1)

int fib(int n) {
if (n==1||n==2) return 1;
if (fs[n]!-1) return fs[n];
int Fn = fib(n-1) + fib(n-2);
fs[n]=Fn;
return Fn;
}

int main(){
int n, fN;
cin >> n;
fN=fib(n);
cout << fN << endl;

return 0;
}

