#include <stdio.h>

int main (void){
int a,b,c,max,min,mid;
printf("請輸入3個數\n");
scanf("%d %d %d",&a,&b,&c);

if (a>=b&&a>=c){
	max=a;
	mid=(b>=c)?b:c;
	min=(c<b)?c:b;
}
else if(b>=a&&b>=c){
	max=b;
	mid=(a>=c)?a:c;
	min=(c<a)?c:a;
}
else{

	max=c;
	mid=(a>=b)?a:b;
	min=(b<a)?b:a;
}

printf("排序結果: %d %d %d\n", min, mid, max);
    return 0;
}
