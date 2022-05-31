#include<stdio.h>

int main(){
	int n;
	printf("Nhap vao n: ");
	scanf("%d", &n);
	int sum = 0;
	int i = 0;
	while(i <=n){
		sum+= i;
		i++;
	}
	printf("Tong tu 1 den %d la : %d",n,sum);
	return 0;
}