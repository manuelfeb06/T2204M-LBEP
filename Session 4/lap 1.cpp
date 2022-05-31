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
	int sum = 0, dem = 0;
	for(int i=0;i<n;i++){
		if(arr[i]%2==1){
		sum+= arr[i];
		dem++;	
		}
    }
    if(dem==0){
    	printf("mang khong co so le");
	}else{
	float tbc = (float)sum/dem;
	printf("%f", tbc);
    }
}