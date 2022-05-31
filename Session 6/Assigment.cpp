#include<stdio.h>

int Tongcacchuso(int n){
	int sum = 0;
	while(n!=0){
		sum += n%10;
		n = n/10;
	}
	return sum;
}
int Uocchungmax(int a,int b){
	if(a==0 || b==0){
		return a + b;
	}
	while(a!=b){
		if(a>=b){
		a=a-b;
	}
		else{
		b=b-a;
	}
	}
	return a;
}
int Boichungmin(int a,int b){
	int max = a*b;
	for(int i=2; i <= max; i++){
		if(i % a == 0 && i % b == 0){
			max=i;
			break;
		}
	}
	return max;
}

int main(){
}