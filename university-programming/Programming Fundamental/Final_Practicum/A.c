#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int count_Pal(char str[])
{
	int total_Pal = 0;
    int n = strlen(str);
    for(int i=0; i<n; i++){
		int x=i-1;
		int y=i;
		while(y<n-1 && str[y]==str[y+1]){
			y++;
		}
		total_Pal += (y-x)*(y-x+1)/2;
		i=y++;
		while(x>=0 && y < n && str[y++] == str[x--]){
			total_Pal++;	
		} 
	}
	return total_Pal;
}

int main(){
	char str[100001];
	scanf("%s", str);
    int result = count_Pal(str);
    printf("%d", result);
	return 0;
}