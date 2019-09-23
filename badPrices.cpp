#include <iostream>
#include <vector>
using namespace std;
 
int main(){
	int t;
	vector<int> ans;
	cin >> t;
	while(t--){
		int n,aux,counter=0,min;
		cin >> n;
		vector<int> v;
		for(int i=0;i!=n;i++){
			cin >> aux;
			v.push_back(aux);
			min = aux;
			
		}
		for(int i=v.size()-2;i>=0;i--){
			if(v[i]>min) counter++;
			if(v[i]<min) min=v[i];
		}
		ans.push_back(counter);
	}
	for(int i=0;i!=(int)ans.size();i++){
		cout << ans[i] << endl;
	}
	
	return 0;
}
 
