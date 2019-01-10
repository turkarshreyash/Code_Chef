#include<iostream>
#include<string>

using namespace std;

string input,temp;
string check = " not ";
int t;
int pos;

int main(){
	
	    cin>>t;
	    cin.ignore();
	    while(t--){
	    	input = " ";
	    	getline(cin,temp);
	    	input = " "+temp + " ";
	    	pos = input.find(check);
	    	if(pos!=string::npos){
	    		cout<<"Real Fancy\n";
			}else{
				cout<<"regularly fancy\n";
			}
		}
		
}
