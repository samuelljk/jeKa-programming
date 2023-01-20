#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int checker(int n){
	int flag = 1;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            flag = 0;
            break;
        }
    }
    if (n <= 1)
        flag = 0;
    if (flag == 1) {
    	return 1;
//        printf("%d is a prime number", n);
    }
    else {
    	return 0;
//        printf("%d is not a prime number", n);
    }
}

int main(){
	int n;
	scanf("%d", &n);
	for (int i=0; i<n; i++){
		int m;
		scanf(" %d", &m);
		int res[m], idx = 0, inp, status, count=0, temp;
		for (int j=0; j<m; j++){
			scanf(" %d", &inp);
			status = checker(inp);
			if (status==1){
				res[idx] = inp;
				idx++;
				count++;
			}
		}
		if (count==0){
			printf("Unable to send Fever Slot Buckle.");
		}else{
			for (int j=0; j<idx; j++){
				printf("%d ", res[j]);
			}
		}
		if (i!=n-1){
			printf("\n");
		}
	}
}