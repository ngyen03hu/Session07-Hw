#include<stdio.h>

int main(){
	int number = 5;
	int array[5]={1,2,3,4,5,};
	for (int i = 0 ; i < number ; i++){
		printf("%d\n",array[i]);
	}
	
	int arraysize = sizeof(array) / sizeof(int);
	
	printf("do dai cau mang la = %d ",arraysize);
	
	return 0; 
} 
