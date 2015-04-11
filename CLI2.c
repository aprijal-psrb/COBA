#include <stdio.h>
#include <stdlib.h>
#define MAX 256

void main(unsigned int argc,unsigned char *argv[]){
	FILE *src,*dst;
	char b[MAX];
	switch(argc){
		case 1:
			src=stdin;
			dst=stdout;
			break;
		case 2:
			if((src=fopen(argv[1],"r")) == NULL){
				puts("Can't open input file.\n");
				exit(0);
			}
			dst=stdout;
			break;
		case 3:
			if((src=fopen(argv[1],"r")) == NULL){
				puts("Can't open file.\n");
				exit(0);
			}
			break;
		default:
			puts("Wrong parameters.\n");
			exit(0);
	}
	while((fgets(b,MAX,src)) != NULL){
		fputs(b,dst);
	}
	fclose(src);
	fclose(dst);
}