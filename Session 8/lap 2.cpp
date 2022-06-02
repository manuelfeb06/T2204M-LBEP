#include<stdio.h>
#include<string.h>

int main(){
	char s1[100],s2[100];
	printf("Nhap chuoi s1: ");
	scanf("%s",s1);
	printf("Nhap chuoi s2: ");
	scanf("%s",s2);
	
	if(strcmp(s1,s2)==0){
		printf("Hai chuoi giong nhau");
	}
	if(strcmp(s1,s2)>0){
		printf("Chuoi '%s' dung truoc chuoi '%s'",s2,s1);
	}
	if(strcmp(s1,s2)<0){
		printf("Chuoi '%s' dung truoc chuoi '%s'",s1,s2);
	}
}