# include <stdio.h>

void soma(int *a, int *b);
void multiplicar(int *a, int *b);
int atribuir(int *a, int num);


int main(){
	
	int a, b;
	atribuir(&a, 6);
	atribuir(&b, 6);
	
	multiplicar(&a, &b);
	
	printf("%d", a);
	
	
	
	return 0;
}



void soma(int *a, int *b){
	int c;
	atribuir(&c, 0);
	
	soma1:

	if(!*b == 0){
		*a += 1;
		*b -= 1;
		c += 1;
		goto soma1;
	}
	
	soma2:
	if(!c == 0){
		*b += 1;
		c -= 1;
		goto soma2;
	}	
}

int atribuir(int *a, int num){
	
	atribuir:
	if(num > *a){
		*a += 1;
	}
	if(num < *a){
		a -= 1;
	}
	if(num == *a){
		return 0;
	}

	goto atribuir;
}

void multiplicar(int *a, int *b){
	int c, d;
	atribuir(&c, 0);
	
	multi1:
	
	if(!*a == 0){
		c += 1;
		*a -= 1;
		goto multi1;
	}
	
	multi2:
	if(!c == 0){
		soma(a, b);
		c -= 1;
		goto multi2;
	}
	
}
