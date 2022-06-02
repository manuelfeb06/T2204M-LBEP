#include<stdio.h>
int timMax(int n, int arr[]){
	int max=arr[0];
	for(int i=0;i<n;i++){
		if(arr[i]>max)
		max=arr[i];
	}
	return max;
}

bool CheckBoi(int n, int m, int arr[]){
	int dem=0;
	for(int i=0;i<n;i++){
		if(m%arr[i]==0){
			dem++;
		}
	}
	if(dem==n){
		return true;
	}
	else{
		return false;
	}
}

int BCNN(int n, int arr[]){
	int min = timMax(n,arr);
	for(int i=min;;i++){
		if(CheckBoi(n, i, arr)){
			min=i;
			break;
		}
	}
	return min;
}

int main(){
	int arr[6]={6,2,5,4,20,10};
	printf("BCNN cua tat ca cac phan tu trong mang la :  %d",BCNN(6,arr));
}