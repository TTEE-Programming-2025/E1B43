#include <stdio.h>

int main (void){
int a,b,c,max,min,mid;
printf("�п�J3�Ӽ�\n");
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

printf("�Ƨǵ��G: %d %d %d\n", min, mid, max);
    return 0;
}
