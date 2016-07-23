#include<stdio.h>
#include<conio.h>

int main(){
	int x = 7;
	int *pointer_x;
	pointer_x = &x;
	printf("pointer x = %x\n", pointer_x);
	printf("*pointer x = %d\n", *pointer_x);
	
getch();
}