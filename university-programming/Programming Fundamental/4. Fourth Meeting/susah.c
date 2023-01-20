#include <stdio.h>

int main(){
	int arr[5], arr2[5];
	for (int i=0; i<5; i++){
		scanf("%d", &arr[i]);
		arr2[i] = i+1;
	}
	for (int i=4; i>-1; i--){
		if (arr[i-1]<arr[i]){
			arr[i-1] = arr[i];
			arr2[i-1] = arr2[i];
		}
	}
	for (int i=0; i<4; i++){
		printf("%d %d\n", arr[i], arr2[i]);	
	}
}