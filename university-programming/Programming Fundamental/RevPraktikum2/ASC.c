/*

    PRAKTIKUM DASPROG 2
    by Samuel Josefano Kaloh | 5025221065
    Problem: ASC

*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int color[9] = {0,0,0,0,0,0,0,0,0};
	int n, res, result, temp, temp2;
	scanf("%d", &n);
	int arr[n];
	for (int i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	for (int i=0; i<n; i++){
        temp = arr[i]-1;
        if (color[temp]==0){
            color[temp] = 1;
        }else{
            temp2 = color[temp];
            temp2 += 1;
            color[temp] = temp2;
        }
	}
    res = color[0];
	for (int i=0; i<9; i++){
        if (color[i+1]>color[i]){
            res = color[i+1];
        }
	}
	result = n-res;
	printf("%d", result);
}
