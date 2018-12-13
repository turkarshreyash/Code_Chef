#include<stdio.h>
#include<string.h>
#define MAX 99
char infix[MAX+1], postfix[MAX+1];
int top = -1, stack[MAX+1],p=0 ;

int isEmpty(){
	if(top==-1){
		return 1;
	}
	return 0;
}
char peek(){
	if(isEmpty()){
		return -1;
	}
	return stack[top];
}
void push(char put){
	stack[++top] = put;
	return;
}
int popAdd(){
	return stack[top--];
}
char pop(){
	switch(popAdd()){
		case 21:{
			return '+';
		}
		case 22:{
			return '-';
		}
		case 31:{
			return '*';
		}
		case 32:{
			return '/';
		}
		case 40:{
			return '^';
		}
	}
}
void alu(int value){
	while((value/10)<=(peek()/10)){
					postfix[p++] = pop();
				}
				if((value/10)>(peek()/10)){
					push(value);
				}
				return ;		
}
void infixToPostfix(){
	int inf = strlen(infix) ;
	char value = 0;
	for(int i = 0; i<strlen(infix); i++){
		switch(infix[i]){
			case '(' :{
				value =00;
				push(value);
				break;
			}
			case ')':{
				while(peek()!=0){
					postfix[p++] = pop();
				}
				pop();
				break;
			}
			case '+' :{
				value = 21;
				alu(value);
				break;
			}
			case '-':{
					value = 22;
					alu(value);
					break;
				}
			case '*' :{
				value = 31;
				alu(value);
				break;
			}
			case '/':{
				value = 32;
				alu(value);
				break;
			}	
			case '^':{
				value = 40;
				alu(value);
				break;
			}
			default:{
				postfix[p++] = infix[i];
				break;
			}
		}
	}
	while(top!=-1){
		postfix[p++] = pop();
	}
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
	gets(infix);
	infixToPostfix();
	puts(postfix);
}
}
