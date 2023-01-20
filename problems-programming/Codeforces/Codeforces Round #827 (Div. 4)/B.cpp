#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	int n, m;
	cin >> n;
	for (int i=0; i<n; i++){
		int check1=0, check2=0;
		cin >> m;
		long long arr[m];
		for (int j=0; j<m; j++){
			cin >> arr[j];
		}
		for (int j=0; j<m-1; j++){
			for (int k=j; k<m-1; k++){
//				cout << arr[j] << " & " << arr[k+1] << endl;
				if (arr[j]==arr[k+1]){
					check1 += 1;
				}else{
					check2 += 1;
				}
			}
		}
//		cout << check1 << " - " << check2 << endl;
		if (check1>=1){
			cout << "NO" << endl;
		}else{
			cout << "YES" << endl;
		}
	}
}