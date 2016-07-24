#include<stdio.h>

int main(){
	int y = 10;
	int x = 8;
	int *pointer_x;
	pointer_x = &x;
	printf("pointer x = %x\n", pointer_x);
	printf("*pointer x = %d\n", *pointer_x);
	printf("done!\n");
	return 0;
}
