#include<iostream>
using namespace std;
int main(){
	int t, basic_salary;
	float final_salary;
	cin>>t;
	while(t--){
		cin>>basic_salary;
		if(basic_salary<1500){
			final_salary = 2*basic_salary;
		}else{
			final_salary = 500 + 1.98*basic_salary;
		}
		printf("%.2f\n",final_salary);
		
	}
}
