#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	

	int t; cin >> t;
	while(t--){

		int n; cin >> n;
		string path; cin >> path;
		int cnt = 0;
		for(int i=0; i<n; i++){
			if(path[i]=='@') cnt++;
			if(path[i]=='*' && path[i-1]=='*') break;
		}	
		cout << cnt << '\n';

	}

}

