#include<stdio.h>
#include<math.h>

int main(){
	int n;
	printf("Nhap vao n: ");
	scanf("%d", &n);
	if (n<2){
		printf("%d khong phai la so nguyen to", n);
	}
	int i = 2;
	int dem = 0;
	while(i <= sqrt(n)){
		if(n%i==0){
			dem++;
		}
		i++;
	}
	if(dem == 0){
		printf("%d la so nguyen to.",n);
	}
	else{
		printf("%d khong phai la so nguyen to.",n);
	}
	return 0;	
	
}