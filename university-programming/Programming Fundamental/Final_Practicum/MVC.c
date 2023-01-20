#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
typedef long long int ll;
typedef unsigned long long int ull;

void secSort(char arr[], int n) {
    int pass = 1;
    while (pass<n) {
        int idx = pass -1, i = pass;
        while (i<n) {
            if (arr[idx] < arr[i]) idx = i;
            i++;
        }
        char temp = arr[pass-1];
        arr[pass - 1] = arr[idx];
        arr[idx] = temp;
        pass++;
    }
}

int main() {
    char num[20]; 
	scanf("%s",num);
	int digit;
    int length=strlen(num);
	scanf("%d", &digit);
    int left=0, right=digit-1;
    char max[digit];
    for(; right<length; right++) {
        char newNum[digit];
        strcpy(newNum, "");
        int j = 0;
        for (int i=left;i<=right;i++) {
            newNum[j] = num[i];
            j++;
        }
        newNum[j] = '\0';
        secSort(newNum, digit);
        if (left == 0||strcmp(newNum, max) > 0) {
            strcpy(max, newNum);
        } 
        left++;
    }
    printf("%s",max);
}