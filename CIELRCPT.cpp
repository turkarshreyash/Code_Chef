#include<iostream>
using namespace std;
int main(){
	int t,p,menu_count,count_2;
	cin>>t;
	for(int i=0;i<t;i++){
		menu_count = 0;
		count_2 = 0;
		cin>>p;
		while(true){
			if(p%2==1){
				menu_count++;
			}
			p = p/2;
			if(p == 1){
				count_2++;
				break;
			}
			count_2++;
		}
		if(count_2<11){
			menu_count++;
		}
		else{
			menu_count = menu_count + (count_2 /11);
			menu_count = menu_count + (count_2%11);
		}
		cout<<menu_count<<endl;
	}
}
