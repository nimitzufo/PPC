#include <bits/stdc++.h>
using namespace std;
 
int main(){
	int n, c, a, counter=0, i=0;
	vector<int> v;
	cin >> n >> c;
	while(n!=0){
		cin >> a;
		v.push_back(a);
		if((v[i]-v[i-1])>c){
			counter = 0;
		}
		n--;
		i++;
		counter++;
	}
	cout << counter << endl;
	
	return 0;
}
