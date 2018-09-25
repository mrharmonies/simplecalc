#include<stdio.h>

typedef struct {
	char op;
	float n1;
	float n2;
} expr;

float calc(expr a){
	switch(a.op){
		case '+':return a.n1+a.n2; break;
		case '-':return a.n1-a.n2; break;
		case '*':return a.n1*a.n2; break;
		case '/':return a.n1/a.n2; break;
		default: printf("	wrong operator. simplecalc only support addition, multiplication, division and substraction\n"); return 0; break;
	}
}

int main(){
	expr str1;
	char line[100];
	int err;
	while (1){
		printf("> ");
		gets(line);
		err=sscanf(line,"%f %c %f",&str1.n1,&str1.op,&str1.n2);
		if (err!=3)printf("wrong format!\n"); else	printf("	=%f\n",calc(str1));
	}
}
