#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n, z, res=0, arr[200001];
	cin >> n;
	int arr1[n], arr2[n];
	for (int i=0; i<n; i++){
		arr1[i]=0;
		arr2[i]=0;
	}
	char x[1];
	for (int i=0; i<n; i++){
		cin >> x[0] >> z;
		if (x[0]=='+'){
			int checker = 0;
			for (int j=0; j<n; j++){
				if (arr1[j]==z){
					int temp = arr2[j];
					temp++;
					arr2[j]=temp;
					checker++;
				}
			}
			if (checker==0){
				arr1[i]=z;
				int temp = arr2[i];
				temp++;
				arr2[i]=temp;
			}
		}else if (x[0]=='-'){
			int checker = 0;
			for (int j=0; j<n; j++){
				if (arr1[j]==z){
					int temp = arr2[j];
					temp--;
					arr2[j]=temp;
					checker++;
					break;
				}
			}
			if (checker==0){
				arr1[i]=z;
				int temp = arr2[i];
				temp--;
				arr2[i]=temp;
			}
		}
	}
	for (int i=0; i<n; i++){
		cout << arr1[i] << " ";
	}
	cout << endl;
	for (int i=0; i<n; i++){
		cout << arr2[i] << " ";
	}
	cout << endl;
}