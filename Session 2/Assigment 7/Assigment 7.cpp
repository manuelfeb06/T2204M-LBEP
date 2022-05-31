#include<stdio.h>

int main(){
	float n;
	printf("Nhap vao n: ");
	scanf("%f", &n);
	float i = 1;
	float sum = 0;
	while(i<=n){
		sum+= 1/i;
		i++;
	}
	printf("S= %f",sum);
	return 0;
}