#include <stdio.h>
int main(){
    int n;
    printf("nhap so n: ");
    scanf("%d",&n);
	int arr[n];	
	printf("Nhap mang:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int x;
    printf("nhap so x: ");
    scanf("%d",&x);
    
    int dem = 0;
    for (int i=0;i<n;i++){
	if(x==arr[i])
		dem++;	
	}
	if (dem==0){
		printf("so nhap vao khong thuoc mang");
	}else printf("so nhap vao thuoc mang");
}