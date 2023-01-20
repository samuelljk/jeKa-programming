//	 --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
//	| 0 | X | 0 | X | 0 | X | 0 | X | 0 | X | 0 | X | 0 | X | 0 | X | 0 | X |
//	 --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
//	| X | 0 | X | ~~ Name: Samuel Josefano Kaloh			 ~~ | 0 | X | 0 |
//	 --- --- ---  ~~ NRP: 5025221065						 ~~  --- --- ---
//	| 0 | X | 0 | ~~ Event: Fundamental Programming (ETS)	 ~~ | X | 0 | X |
//	 --- --- ---  ~~ Date & Time: Wednesday, 7 December 2022 ~~  --- --- ---
//	| X | 0 | X | ~~ Problem: prob_menilai					 ~~ | 0 | X | 0 |
//	 --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
//	| 0 | X | 0 | X | 0 | X | 0 | X | 0 | X | 0 | X | 0 | X | 0 | X | 0 | X |
//	 --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void swap(int *xp, int *yp) {
   int temp = *xp;
   *xp = *yp;
   *yp = temp;
}

void bubbleSort(int arr[], int n, int arr2[]) {
   int i, j, swapped;        // optimized with bool `swapped`:
   for (i = 0; i < n-1; i++) {
      swapped = 0;
      for (j = 0; j < n-i-1; j++) {
         if (arr[j] > arr[j+1]) {
            swap(&arr[j], &arr[j+1]);
            swap(&arr2[j], &arr2[j+1]);
            swapped = 1;
         }
      }
      if (swapped == 0)
         break;
   }
}

int main(){
	int n, student_no;
	scanf("%d", &n);
	int score[n], number[n];
	for (int i=0; i<n; i++){
		scanf(" %d", &student_no);
		number[student_no-1] = student_no;
		int inp1, inp2, inp3, inp4, avg;
		double avg_f, avg_f_FINAL;
		scanf(" %d %d %d %d", &inp1, &inp2, &inp3, &inp4);
		avg_f = (double)(((inp1*20.0)+(inp2*23.0)+(inp3*27.0)+(inp4*30.0))/100.0);
//		printf("%lf\n", avg_f);
		avg_f_FINAL = ceil(avg_f);
//		printf("%lf\n", avg_f_FINAL);
		avg = (int)avg_f_FINAL;
//		printf("%d\n", avg);
		score[student_no-1] = avg;
	}
	bubbleSort(score, n, number);
	for (int i=n-1; i>=0; i--){
		printf("%d %d\n", number[i], score[i]);
	}
}