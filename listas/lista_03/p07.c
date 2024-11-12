#include <stdio.h>

void print_byte( unsigned char byte ) {
	int peso = 128;
	while(peso > 0) {
		printf("%d", byte / peso);
		byte %= peso;
		peso /= 2;
	}
}
void print_BYTES( void * ptr, int nbytes ) {
	char * pc = ptr;
	int i;
	for(i = 0 ; i < nbytes ; i++) {
		print_byte(*pc);
		pc = pc + 1;
		printf(" ");
	}
	
}


int main() {
	double x;
	unsigned char ch;
	unsigned short sh;
	unsigned int ui;
	float fl;

	scanf("%lf", &x);

	ch = sh = ui = fl = x;

	print_BYTES( &ch, sizeof(char) );
	printf("\n");
	print_BYTES( &sh, sizeof(short) );
	printf("\n");
	print_BYTES( &ui, sizeof(int) );
	printf("\n");
	print_BYTES( &fl, sizeof(float) );
	printf("\n");
	print_BYTES( &x, sizeof(double) );
	printf("\n");	
	return 0;
}