#include <bits/stdc++.h>
using namespace std;
 
int main(){
	int n, h,m,H=-1,M=-1, cash=1, mC=1;
	cin >> n;
	
	while(n--){
		cin >> h >> m;
		if(H==h and M==m) cash++;
		else cash=1;
		mC = max(mC,cash);
		H = h;
		M = m;
	}
	
	cout << mC << endl;
	
	return 0;
}
