//	 --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
//	| 0 | X | 0 | X | 0 | X | 0 | X | 0 | X | 0 | X | 0 | X | 0 | X | 0 | X |
//	 --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
//	| X | 0 | X | ~~ Name: Samuel Josefano Kaloh			 ~~ | 0 | X | 0 |
//	 --- --- ---  ~~ NRP: 5025221065						 ~~  --- --- ---
//	| 0 | X | 0 | ~~ Event: Fundamental Programming (ETS)	 ~~ | X | 0 | X |
//	 --- --- ---  ~~ Date & Time: Wednesday, 7 December 2022 ~~  --- --- ---
//	| X | 0 | X | ~~ Problem: prob_KKM					     ~~ | 0 | X | 0 |
//	 --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
//	| 0 | X | 0 | X | 0 | X | 0 | X | 0 | X | 0 | X | 0 | X | 0 | X | 0 | X |
//	 --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// m is size of coins array (number of different coins)
int minCoins(int coins[], int m, int V)
{
   // base case
   if (V == 0) return 0;
 
   // Initialize result
   int res = INT_MAX;
 
   // Try every coin that has smaller value than V
   for (int i=0; i<m; i++)
   {
     if (coins[i] <= V)
     {
         int sub_res = minCoins(coins, m, V-coins[i]);
 
         // Check for INT_MAX to avoid overflow and see if
         // result can minimized
         if (sub_res != INT_MAX && sub_res + 1 < res)
            res = sub_res + 1;
     }
   }
   return res;
}
 
// Driver program to test above function
int main()
{
	int n, x;
	scanf("%d %d", &n, &x);
	int arr[n];
	for (int i=0; i<n; i++){
		scanf(" %d", &arr[i]);
	}
    printf("%d", minCoins(arr, n, x));
    return 0;
}