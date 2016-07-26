#include <stdio.h>
int hap(int);
int main(void) {
	// your code goes here
	int y,n;
	scanf("%d",&n);
	y=hap(n);
	if(y==1)
	printf("happy number");
	else
	printf("not happy number");
	
	return 0;
}
int hap(int x)
{
    int s=0,r;
    while(x>0)
    {
    r=r*10+x%10;
    s=s+r*r;
    x/=10;
    }
    if(s>10)
hap(s);
else
return s;
}
