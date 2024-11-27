#include<stdio.h>

int main(){
	
	int arr[5]={1,12,3,4,9,};
	int haseven = 0; 
	
	printf("cac so chan trong mang la:"); 
	for (int i = 0 ; i < 5 ; i++){
		if (arr[i] % 2 ==0){
		printf("%d ",arr[i]);
		haseven  =1;	
		}
		}  
		 if ( !haseven  ){
			printf("mang khong chua so chan."); 
	}

	
	
	
	
	return 0;
}
