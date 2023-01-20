#include <bits/stdc++.h>

using namespace std;

int main(){
	int a;
	scanf("%d", &a);
	for (int i=0; i<a+1; i++){
		if (i%10!=0 && i!=42){
			printf("%d\n", i);
		}
		else if (i==42){
			printf("ERROR");
			break;
		}
	}
}