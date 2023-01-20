#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m;
	char chat[100];
	cin >> n;
	for (int i=0; i<n; i++){
		int q_count=0, a_count=0;
		cin >> m;
		for (int j=0; j<m; j++){
			cin >> chat[j];
			if (chat[j]=='Q'){
				q_count++;
			}else if (chat[j]=='A'){
				a_count++;
			}
		}
		if (q_count==a_count || a_count>q_count){
			cout << "Yes" << endl;
		}else{
			cout << "No" << endl;
		}
	}
}