#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    long long a, b;
    scanf("%d", &t);
    for (int i=0; i<t; i++){
    	scanf("%lld %lld", &a, &b);
		if (a==b){
			printf("=\n");
		}
		else if (a>b){
    		printf(">\n");
		}
		else if (a<b){
			printf("<\n");
		}
	}
}