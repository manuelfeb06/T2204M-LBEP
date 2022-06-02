#include<stdio.h>
#include<string.h>

int main(){
	char s[10][100];
	
	for(int i=0; i<10; i++){
		printf("Nhap chuoi thu %d : ",i+1);
		scanf("%s",s[i]);
	}
	
	int max = strlen(s[0]);
	for(int i=0; i<10; i++){
		if(strlen(s[i]) > max){
			max = strlen(s[i]);
		}
	}
	int c = 0;
	for(int i=0; i<10; i++){
		if(max == strlen(s[i])){
			c=i;
			break;
		}		
	}
	printf("Chuoi dai nhat la : %s\n",s[c]);
}