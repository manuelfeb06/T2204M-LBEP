#include <stdio.h>
#include <string.h>
char s[20] ;
void sortString (char s[]){
    printf("\nNhap chuoi: ",s);
    scanf("%s",s);
}
void Sort(char s[]){
  int len = strlen(s);
  char temp;

  for (int i = 0; i < len-1; i++) {
      for (int j = i+1; j < len; j++){
      	if (s[i] > s[j]){
            temp = s[i];
            s[i] = s[j];
            s[j] = temp;
           }
        }
    }
}
int main () {
  sortString(s);
  Sort(s);
  printf("\nChuoi sau khi sap xep: %s \n", s);
  return 0;
}