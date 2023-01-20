/*

    PRAKTIKUM DASPROG 2
    by Samuel Josefano Kaloh | 5025221065
    Problem: HELP2.0

*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d", &n);
    scanf("\n");
    int type[n], a[n], b[n];
    for (int i=0; i<n; i++){
        if (i==n-1){
            scanf("%c %d %d", &type[i], &a[i], &b[i]);
        }else{
            scanf("%c %d %d", &type[i], &a[i], &b[i]);
            scanf("\n");
        }
    }
    for (int i=0; i<n; i++){
        printf("Pattern no : %d\n", i+1);
        char x = type[i];
        //printf("%c\n", x);
        if (x=='A'){
            for (int j=0; j<a[i]; j++){
                if (j%2==0 || j==0){
                    printf(" ");
                    for (int k=0; k<b[i]; k++){
                        if (k%2==0 || k==0){
                            printf(".");
                        }else{
                            printf("-");
                        }
                    }
                    printf("\n");
                }else{
                    for (int k=0; k<b[i]; k++){
                        if (k%2==0 || k==0){
                            printf(".");
                        }else{
                            printf("-");
                        }
                    }
                    printf("\n");
                }
            }
        }else if (x=='B'){
            for (int j=0; j<a[i]; j++){
                if (j%2!=0){
                    printf(" ");
                    for (int k=0; k<b[i]; k++){
                        if (k%2==0 || k==0){
                            printf("-");
                        }else{
                            printf(".");
                        }
                    }
                    printf("\n");
                }else{
                    for (int k=0; k<b[i]; k++){
                        if (k%2==0 || k==0){
                            printf("-");
                        }else{
                            printf(".");
                        }
                    }
                    printf("\n");
                }
            }
        }
    }
}
