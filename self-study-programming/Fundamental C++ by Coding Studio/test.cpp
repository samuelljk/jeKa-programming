height[i] = (char) 0;

char max(int num1){
	
	if(num1 > 160){height = "Tall";}
	
	else if(num1 = 160) {height = "Medium";}
	
	else {height = "Short";}
	
	return height;
	
}

int main(){
	
	printf("%s", max(170))
	
	return 0;
	
}
