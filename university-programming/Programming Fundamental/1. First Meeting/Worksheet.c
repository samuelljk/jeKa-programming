//#include <stdio.h> //Header
//#include <string>
//int main(){
//    //char name1[100], name2[100];
//	
//    /*
//    printf("Hello, World!\n");
//
//    printf("What is Your First Name: ");
//    scanf("%[^\n]", &name1);
//    printf("What is Your Second Name: ");
//    scanf("%s", &name2);
//
//    printf("Hello, %s %s.", name1, name2);
//    */
//
//	return 0;
//}

//#include <stdio.h>
//int main(){
//	int a, b, c;
//	printf("First Number: ");
//	scanf("%d", &a);
//	printf("Choose the Operators: \n1. +\n2. -\n3. x\n4. /\n");
//	printf("The Operators: ");
//	scanf("%d", &c);
//	printf("Second Number: ");
//	scanf("%d", &b);
//	if (c==1){
//		printf("The Result: %d", a+b);
//	}
//	else if (c==2){
//		printf("The Result: %d", a-b);
//	}
//	else if (c==3){
//		printf("The Result: %d", a*b);
//	}
//	else if (c==4){
//		printf("The Result: %d", a/b);
//	}
//}

//#include <stdio.h>
//int main(){
//	int a;
//	printf("Checking an Even Number that is MORE THAN 10.\n");
//	printf("Number: ");
//	scanf("%d", &a);
//	if (a%2==0 && a>10){
//		printf("TRUE");
//	}else{
//		printf("FALSE");
//	}
//	
//}

//180
//#include <stdio.h>
//int main(){
//	int height;
//	printf("Your Height: ");
//	scanf("%d", &height);
//	if (height>180){
//		printf("You are TALL!");
//	}
//	else if (height<0){
//		printf("You are an ALIEN");
//	}
//	else{
//		printf("Your are SHORT!");
//	}
//}

#include <stdio.h>
int main(){
	int score;
	printf("Your Score: ");
	scanf("%d", &score);
	if (0<=score && score<=40){
		printf("E");
	}
	else if(41<=score && score<=55){
		printf("D");
	}
	else if(56<=score && score<=60){
		printf("C");
	}
	else if(61<=score && score<=65){
		printf("BC");
	}
	else if(66<=score && score<=75){
		printf("B");
	}
	else if(76<=score && score<=85){
		printf("AB");
	}
	else if(86<=score && score<=100){
		printf("A");
	}
}