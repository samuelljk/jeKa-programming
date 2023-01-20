#include <stdio.h>

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
        int key, key_inp, ascii_chat;
        scanf(" %d", &key_inp);
        key = fib(key_inp);
        char chat[1000], result[1];
        scanf(" %[^\n]", &chat);
        char output[n][1000];
        for (int j=0; chat[j]!='\0'; j++){
        	if (m>1){
        		printf("Does not match!\n");
                break;
			}
            else if (m==1){
                if (chat[j]==32){
                    printf(" ");
                    output[i][j] = " ";
                }else{
                    if (chat[j]>='A' && chat[j]<='Z'){
                        if (chat[j]-(key%26)<'A'){
//                            printf("%c", (91-(65-(chat[j]-(key%26)))));
                            output[i][j] =  (char)(91-(65-(chat[j]-(key%26))));
                        }else{
//                            printf("%c", chat[j]-(key%26));
                            output[i][j] =  (char)(chat[j]-(key%26));
                        }
                    }else if (chat[j]>='a' && chat[j]<='z'){
                        if (chat[j]-(key%26)<'a'){
//                            printf("%c", (123-(97-(chat[j]-(key%26)))));
                            output[i][j] =  (char)(123-(97-(chat[j]-(key%26))));
                        }else{
//                            printf("%c", chat[j]-(key%26));
                            output[i][j] =  (char)(chat[j]-(key%26));
                        }
                    }
                }
            }
			else if (m==0){
                if (chat[j]==32){
                    printf(" ");
                    output[i][j] = " ";
                }else{
                    if (chat[j]>='A' && chat[j]<='Z'){
                        if (chat[j]-(key%26)>'Z'){
//                            printf("%c", (64+((chat[j]-(key%26))-90)));
                            output[i][j] =  (char)(64+((chat[j]-(key%26))-90));
                        }else{
//                            printf("%c", chat[j]+(key%26));
                            output[i][j] =  (char)(chat[j]+(key%26));
                        }
                    }else if (chat[j]>='a' && chat[j]<='z'){
                        if (chat[j]-(key%26)>'z'){
//                            printf("%c", (96+((chat[j]-(key%26))-122)));
                            output[i][j] =  (char)(96+((chat[j]-(key%26))-122));
                        }else{
//                            printf("%c", chat[j]+(key%26));
                            output[i][j] =  (char)(chat[j]+(key%26));
                        }
                    }
                }
            }
        }
        for (int i=0; i<n; i++){
        	for (int j=0; output[i][j]!='\0'; j++){
        		printf("%c", output[i][j]);
			}
			printf("\n");
		}
    }
}