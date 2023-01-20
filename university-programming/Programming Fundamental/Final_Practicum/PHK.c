#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
typedef long long ll;

int main(){
    ll mtxSize;
    scanf (" %lld", &mtxSize);
    ll count_step = mtxSize;
    if ((ll)count_step%2 == 1){
        count_step -= 1;
    }
    ll matrix_X = mtxSize, matrix_Y = mtxSize, checkpoint = 0;
    while (1){
        if (count_step>1){
            count_step /= 2;
        }
        if (checkpoint==0){
            matrix_X -= count_step;
            matrix_Y -= count_step;
            checkpoint = 1;
            printf ("LIHAT %lld %lld\n", matrix_X, matrix_Y);
            fflush(stdout);
        }
        else if (checkpoint==1){
            ll response, x_Mult, y_Mult, target = 0;
            scanf (" %lld", &response);
            if (response==1){
            	x_Mult = -1;
                y_Mult = 1;
			}
			else if (response==2){
				x_Mult = 0;
                y_Mult = 1;
			}
			else if (response==3){
				x_Mult = 1;
                y_Mult = 1;
			}
			else if (response==4){
				x_Mult = -1;
                y_Mult = 0;
			}
			else if (response==5){
				target = 1;
			}
			else if (response==6){
				x_Mult = 1;
                y_Mult = 0;
			}
			else if (response==7){
				x_Mult = -1;
                y_Mult = -1;
			}
			else if (response==8){
				x_Mult = 0;
                y_Mult = -1;
			}
			else if (response==9){
				x_Mult = 1;
                y_Mult = -1;
			}
            if (target==1){
                printf ("KOORDINAT %lld %lld", matrix_X, matrix_Y);
                fflush(stdout);
                break;
            }
            else{
                matrix_X += ((count_step)*x_Mult);
                matrix_Y += ((count_step)*y_Mult);
                printf ("LIHAT %lld %lld\n", matrix_X, matrix_Y);
                fflush(stdout);
            }
        }
    }
}