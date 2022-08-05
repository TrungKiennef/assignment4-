#include <stdio.h>
int main(){
	int n;
	printf("nhap n");
	scanf("%d",&n);	
	int i;
	printf("cac so le nho hown n la:");
	for(i=1;i<n;i+=2){
		printf("%d",i);
	}
}
