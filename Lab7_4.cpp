#include <stdio.h>
void printHead(int w);
void printBody(int w, int h);

void main() {
	int width,height;
	scanf("%d %d",&width,&height);
	printHead(width);
	printBody(width,height);
	printHead(width);
}

void printHead(int w){
	for(int i =0 ; i < w;i++){
		printf("*");
	}printf("\n");
}
void printBody(int w, int h){
	for(int i=0;i<h;i++){
		printf("*");
		for(int j=0;j<w-2;j++){
			printf(" ");
		}
		printf("*\n");
	}

}
