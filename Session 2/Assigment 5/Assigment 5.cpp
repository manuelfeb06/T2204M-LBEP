#include<stdio.h>

int main(){
	int n;
	printf("Nhap vao n: ");
	scanf("%d", &n);
	int i = 1;
	int sum = 0;
	while(i <n){
		if(n%i==0){
			sum+= i;
		}
		i++;
	}
	if(sum == n){
		printf("%d la so hoan hao",n);
	}
	else{
		printf("%d khong phai la so hoan hao",n);
	}
	return 0;
	
}