#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
typedef long long int ll;
typedef unsigned long long int ull;

int main() {
    int n; 
	scanf("%d", &n);
    char name[n][50];
    int win = 0;
    int maxP;
    for (int i=0;i<n;i++){
        scanf("%s", name[i]);
        int m; 
		scanf("%d", &m);
        int row[m];
        int maxITR = -1000;
        int max = 0;
        for (int j=0; j<m; j++){
            scanf("%d", &row[j]);
            max += row[j];
            if (maxITR < max){
                maxITR = max;
            }
            if (max < 0){
                max = 0;
            }
        }
        if (i == 0) maxP = maxITR;
        if (maxP < maxITR){
            maxP = maxITR;
            win = i;
        }
    }
    printf("%s\n", name[win]);
}