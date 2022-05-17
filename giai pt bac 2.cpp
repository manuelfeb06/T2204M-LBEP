#include <stdio.h>
#include <math.h>

int main(){
	
	int a ,b, c;
	printf("Nhap vao a, b, c = ");
	scanf("%d %d %d", &a, &b, &c);
	
	if(a == 0){
		if(b == 0){
			printf("PT vo nghiem");
		}else {
			float x;
			x = (float)(-b)/c;
			printf("pt tro thanh pt bac 1 co nghiem x = %f", x);
		}
	}else {
		float d;
		d = (float)b*b-4*a*c;
		if(d < 0){
			printf("PT vo nghiem");
		}else {
			if(d == 0){
				float x1, x2;
				x1 = x2 = (float)(-b)/(2*a);
				printf("pt co nghiem kep x1 = x2 = %d", x1);
			}else{
				float y1, y2;
				y1 = (float)((-b)+sqrt(d))/(2*a);
				y2 = (float)((-b)-sqrt(d))/(2*a);
				printf("PT co 2 nghiem phan biet:\n");
				printf("x1 = %f\n",y1);
				printf("x2 = %f", y2);
			}
		}
	}
	return 0;
}