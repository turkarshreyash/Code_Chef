#include<iostream>
#include<string.h>
using namespace std;

class Stack{
		int top;
		char stack[300];
	public:
		Stack(){
			top = 0;
		}
		void push(char Tpush){
			stack[++top] = Tpush; 
		}
		char pop(){
			return stack[top--];
		}
		char view(){
			if(top == -1){
				return ' ';
			}
			return stack[top];
		}
		int stop(){
			return top;
		}
		
};



int infix_postfix(char input[], char output[], int l){
	int c=-1;
	Stack stack;
	for(int i =0;i<l;i++){
		switch(input[i]){
			case '(':
				stack.push('(');
				break;
			case '^':
				stack.push('^');
				break;
			case '*':
				while(stack.view()=='/'||stack.view()=='^'){
					output[++c] = stack.pop();
				}
				stack.push('*');
				break;
			case '/':
				while(stack.view()=='*'||stack.view()=='^'){
				output[++c] = stack.pop();
				}
				stack.push('/');
				break;
			case '+':
				while(stack.view()=='-'||stack.view()=='*'||stack.view()=='^'||stack.view()=='/'){
				output[++c] = stack.pop();
				}
				stack.push('+');
				break;
			case '-':
				while(stack.view()=='+'||stack.view()=='*'||stack.view()=='^'||stack.view()=='/'){
				output[++c] = stack.pop();
				}
				stack.push('-');
				break;
			case ')':
				while(stack.view()!='('){
					output[++c] = stack.pop();
				}
				stack.pop();
				break;
			default :
				output[++c] = input[i];
		}
	}
	while(stack.stop() != 0){
		output[++c] = stack.pop();
	}
	return c;
}

void display(char output[], int l){
	for(int i =0;i<l;i++){
		cout<<output[i];
	}
	cout<<endl;
}

int main(){
	int t, l;
	char input[10];
	char output[401];
	cin>>t;
	while(t--){
		cin>>input;
		l = strlen(input);
		l = infix_postfix(input, output, l);
		display(output,l+1);
	}
}
