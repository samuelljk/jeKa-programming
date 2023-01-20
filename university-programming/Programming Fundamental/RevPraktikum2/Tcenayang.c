/*

    PRAKTIKUM DASPROG 2
    by Samuel Josefano Kaloh | 5025221065
    Problem: TC

*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%lli", &n);
    int pattern[n][2], number[n];
    char message[n][1000000];
    for (int i=0; i<n; i++){
        for (int j=0; j<2; j++){
            scanf("%lli", &pattern[i][j]);
        }
    }
    for (int i=0; i<n; i++){
        scanf("%d %[^\n]", &number[i], message[i]);
    }

    for (int i=0; i<n; i++){
        for (int j=0; j<(strlen(message[i])); j++){
            int ascii = (int)message[i][j];
            if ((ascii >= 65) && (ascii <= 90)){ // A - Z
                ascii += number[i];
                if (ascii > 90){
                    ascii = (64 + (ascii-90)); //Back to A
                }
                message[i][j] = ascii;
            }
            else if ((ascii >= 97) && (ascii <= 122)){ // a - z
                ascii += number[i];
                if (ascii > 122){
                    ascii = (96 + (ascii-122)); //Back to A
                }
                message[i][j] = ascii;
            }
            printf("%c", message[i][j]);
        }
        printf("\n");
    }

    for (int i=0; i<n; i++){
        for (int j=0; j<pattern[i][0]; j++){
            for (int k=0; k<pattern[i][1]; k++){
                if (k == (j + 1)){
                    printf(" ");
                }
                else{
                    printf("*");
                }
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}