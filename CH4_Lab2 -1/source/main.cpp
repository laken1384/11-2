#include<stdio.h>
#include<stdlib.h>
int addbyone(int* xptr);
void main(void)
{
	int x = 100;
	int y = addbyone(&x);
	printf("x=%d\n", x);
	system("pause");

}
int addbyone(int* xptr)
{
	(*xptr)++;
	printf("x=%d\n",* xptr);
	return *xptr;
}