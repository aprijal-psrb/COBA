#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(int argc,char *argv[]){
	int m,n,l,x,ch;
	char s[256];
	
	for(n=1;n<argc;n++){
		switch((int)argv[n][0]){
			case '-':
			case '/': 
				x=0;
				l=strlen(argv[n]);
				for(m=1;m<l;++m){
					ch=(int)argv[n][m];
					switch(ch){
						case 'a':
						case 'A':
						case 'b':
						case 'B':
						case 'c':
						case 'C':
						case 'd':
						case 'D':
							printf("Option code = %c\n",ch);
							break;
						case 's':
						case 'S':
							if(m+1 >= 1){
								puts("Illegal syntax -- no string!");
								exit(1);
							}
							else{
								strcpy(s,&argv[n][m+1]);
								printf("String = %s\n");
							}
							break;
						default:
							printf("Illegal option code = %c\n",ch);
							x=1;
							exit(1);
							break;
					}
					if(x==1){
						break;
					}
				}
				break;
			default:
				printf("Text = %s\n",argv[n]);
				break;
		}
	}
	puts("DONE!");
}