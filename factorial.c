#include<stdio.h>
long factorial(int n)
{
	printf("factorial(%d)\n",n);
	
	if(n <= 1)
	   return 1;
	else
	    return n*factorial(n-1);
}
int main()
{
	int n = 0;
    
    printf("������ �Է��ϼ���:");
    scanf("%d,",&n);
    printf("%d!��%ld�Դϴ�\n",n,factorial(n));
    
    return 0;
}
