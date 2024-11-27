#include<stdio.h>

int main(){
	int arrayints[5];
	int i;
	for (i=0;i<sizeof(arrayints) / sizeof(int);i++){
		printf("array[%d] = \n",i);
		scanf("%d",&arrayints[i]);
	} 
	printf("gia tri cua cac phan tu arrayints\n ");
	for (i = 0; i < sizeof(arrayints) / sizeof(int);i++){
		printf("array[%d]= %d\n",i,arrayints[i]);
	}
	
	
	return 0;
}
