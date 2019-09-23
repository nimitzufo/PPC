#include <bits/stdc++.h>
using namespace std;
 
int main(){
	string in;
	string aux;
	cin >> in;
	for(int i=0;i!=5;i++){
		cin >> aux;
		if(aux[0]==in[0] || aux[1]==in[1]){
			cout << "YES" << endl;
			return 0;
		}
	}
	cout << "NO" << endl;
	
	return 0;
}
