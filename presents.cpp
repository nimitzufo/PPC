#include <bits/stdc++.h>
using namespace std;
 
int main(){
	int n,a;
	int array[101];
	cin >> n;
	for(int i=1;i!=n+1;i++){
		cin >> a;
		array[a]=i;
	}
	
	for(int i=1;i!=n+1;i++){
		cout << array[i] << " ";
	}
	
	return 0;
}
