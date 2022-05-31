#include<stdio.h>
int main(){
	int n;
	printf("Nhap vao n: ");
	scanf("%d", &n);
	int ary[n];
	printf("Nhap vao mang : ");
	for(int i=0; i<n; i++){
		scanf("%d", &ary[i]);
	}
	int min=ary[0], max=ary[0];
	int a, b;
	for(int i=0; i<n; i++){
		if(min>ary[i]){
			min=ary[i];
			a=i;
		}
	}
	for(int i=0; i<n; i++){
		if(max < ary[i]){
			max = ary[i];
			b=i;
		}
	}
	printf("Khoang cach [%d , %d] bao quat mang", min, max);
	printf("\nVi tri la : %d  %d", a, b);
}