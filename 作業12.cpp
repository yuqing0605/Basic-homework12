//3A713221
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int number;
	printf("��J�Ʀr:\n");
	scanf("%d",&number);

void show(int number) ;{
	
	int space;
	for(int i=number;i>0;i--){
	space=number-i;
	
	if(space>0){
	for(int k=0;k<space;k++){
	printf(" ");	
	}}
	for(int s=0;s<i;s++){
	printf("%c",'*');
		}
		printf("\n");
	}
}}
