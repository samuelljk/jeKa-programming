#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int checker(int n){
	if (n == 2){
		return 1;
	}else if (n == 3){
		return 1;
	}
	if (n<=1){
		return 0;
	}else if (n%2==0){
		return 0;
	}else if (n%3==0){
		return 0;
	}
	for (int i=5; i*i<=n; i+=6){
		if (n%i==0){
			return 0;
		}else if (n%(i+2)==0){
			return 0;
		}
	}
	return 1;
}

int main(){
	int n;
	scanf("%d", &n);
	for (int i=0; i<n; i++){
		int m;
		scanf(" %d", &m); 
		int res[m], idx = 0, count=0;
		for (int j=0; j<m; j++){
			scanf(" %d", &res[j]);
			if (checker(res[j])==1){
				count++;
				printf("%d ", res[j]);
			}
		}
		if (count==0){
			printf("Unable to send Fever Slot Buckle.");
		}
		if (i!=n-1){
			printf("\n");
		}
	}
}