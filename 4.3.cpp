#include <stdio.h>
int main(){
	int n;
	printf("nhap n");
	scanf("%d",&n);	
	int i;
	printf("cac uoc so cua n la:");
	for(i=1;i<n;i++){
		if(n%i ==0){
		printf("%d",i);
	}
}
}
