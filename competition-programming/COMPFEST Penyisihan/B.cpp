#include <bits/stdc++.h>

using namespace std;

int main(){
	int a, b, c, res;
	cin >> a >> b;
	int arr[a];
	for (int i=0; i<a; i++){
		cin >> arr[i];
	}
	int n = sizeof(arr)/sizeof(arr[0]);
	sort(arr, arr+n);
	if (a>=1 && a<=100000 && b>=1 && b<=1000000000){
		for (int j=0; j<a; j++){
			for (int k=2; k<100000; k++){
				if (arr[j]>=(b/k) && a>=k){
					res++;
					a -= k;
				}
			}
		}
		cout << a;
	}
}