#include <stdio.h>

int main(){
	int list[5] = {6,2,8,7,3}, i,n=list[0],m=list[0];
	for(i=0;i<=4;i++){
		if(n<=list[i]){
			n = list[i];
		}
		if(m>=list[i]){
			m = list[i];
		}
	}
	printf("phan tu lon nhat la %d\n",n);
	printf("phan tu nho nhat la %d",m);
	
	return 0;	
}
