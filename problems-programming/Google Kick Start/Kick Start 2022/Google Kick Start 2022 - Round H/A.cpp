#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	for (int i=0; i<n; i++){
		int lap, x, step, total=0;
		cin >> lap >> x;
		char arah[x], current[x];
		for (int j=1; j<=x; j++){
			cin >> step >> arah[j];
			if (j==1){
				current[j-1] = arah[j];
			}
			cout << current[j-1] << " : " << arah[j] << endl;
			if (arah[j]=='C' && current[j-1]=='C'){
				total += step;
				current[j] = 'C';
			}else if (arah[j]=='A' && current[j-1]=='A'){
				total += step;
				current[j] = 'A';
			}else if (arah[j]=='A' && current[j-1]=='C' && current[j-2]=='A'){
				total += step;
				current[j] = 'A';
			}else if (arah[j]=='C' && current[j-1]=='A' && current[j-2]=='C'){
				total += step;
				current[j] = 'C';
			}else if (arah[j]=='A' && current[j-1]=='C'){
				total -= step;
				current[j] = 'A';
			}else if (arah[j]=='C' && current[j-1]=='A'){
				total -= step;
				current[j] = 'C';
			}
		}
		cout << total << endl;
		cout << lap << endl;
		int result = total/lap;
		cout << "Case #" << i+1 << ": " << result << endl;
	}
}