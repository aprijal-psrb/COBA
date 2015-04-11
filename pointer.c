#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(int argc, char *argv[]){
	char c, *pc;
	int i, *pi;
	float f, *pf;
	
	c = 'A'; i = 7; f = 6.25;
	
	printf("c : alamat=0x%p, isi=%c\n",&c,c);
	printf("x : alamat=0x%p, isi=%d\n",&i,i);
	printf("y : alamat=0x%p, isi=%5.2f\n",&f,f);
	
	pc = &c;
	pi = &i;
	pf = &f;
	
	printf("pc : alamat=0x%p, isi=%c\n",pc,*pc);
	printf("pi : alamat=0x%p, isi=%d\n",pi,*pi);
	printf("pf : alamat=0x%p, isi=%5.2f\n",pf,*pf);
	
	*pc = 'B';
	*pi = 125;
	*pf = 512.56;
	
	printf("c : isi=%c\n",c);
	printf("x : isi=%d\n",i);
	printf("y : isi=%5.2f\n",f);
	
	system("pause");
	return 0;
}