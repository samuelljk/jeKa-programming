#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int fib(int x){
    if (x==1 || x==2){
        return 1;
    }
    else{
        return fib(x-2)+fib(x-1);
    }
}

int main()
{
    int n;
    scanf(" %d", &n);
    for (int i=0; i<n; i++){
        int m;
        scanf(" %d", &m);
        if (m>1){
            printf("Mode is not valid!");
        }else{
            int key, key_inp;
            scanf(" %d", &key_inp);
            key = fib(key_inp);
            char chat[1000];
            scanf(" %[^\n]", chat);
            for (int j=0; chat[j]!='\0'; j++){
                if (m==1){
                    if (chat[j]==32){
                        printf(" ");
                    }else{
                        printf("%c", chat[j]-(key%26));
                    }
                }else if (m==0){
                    if (chat[j]==32){
                        printf(" ");
                    }else{
                        printf("%c", chat[j]+(key%26));
                    }
                }
            }
        }
 	}
}
