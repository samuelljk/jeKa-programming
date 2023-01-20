#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int arr[n];
	for (int i=0; i<n; i++){
		cin >> arr[i];
	}
	int no_sus, sus=0;
	for (int i=0; i<n; i++){
		if (arr[i]<0){
			no_sus = 0;
			for (int j=0; j<i; j++){
				if (j==i){
					continue;
				}
				else if (arr[i]+arr[j]==0){
					no_sus++;
				}
			}
			if (no_sus==0){
				sus++;
			}	
		}
	}
	cout << sus;
}