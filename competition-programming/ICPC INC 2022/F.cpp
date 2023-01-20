#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, inf = 0;
	long long p, x;
	cin >> n >> p >> x;
	long long changes[n+1];
	changes[0] = 0;
	for (int i=1; i<=n; i++){
		cin >> changes[i];
	}
	long long res, checker, temp=0, round=1;
	while (inf==0){
		checker = 0;
		if (round==1){
			for (long long i=0; i<n; i++){
				p += changes[i];
				if (i==0){
					temp = p;
				}
				if (p>=x && p<temp){
					temp = p;
				}
				else if (p<x){
					checker++;
				}
			}
		}else{
			for (long long i=1; i<=n; i++){
				if (i==1){
					p += changes[n];
					if (i==1 && p<=temp && p>=x){
						temp = p;
					}
					else if (p<x){
						checker++;
					}
				}
				else{
					p += changes[i-1];
					if (p>=x && p<temp){
						temp = p;
					}
					else if (p<x){
						checker++;
					}
				}
			}
		}
		round++;
		if (checker==n && temp<x){
			temp = -1;
			break;
		}
		else if (checker==n){
			break;
		}
	}
	cout << temp;
}