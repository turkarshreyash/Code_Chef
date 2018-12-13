#include<iostream>
using namespace std;
char a;
int t, n, sum;
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		int arr[n+1][n+1];
		for(int i = n;i>0;i--){
			for(int j = n;j>0;j--){
				cin>>a;
				if(a=='#'){
					arr[i][j] = 1;
				}else{
					arr[i][j] = 0;
				}
			}
		}
		for(int j = 0;j<=n;j++){
			arr[0][j] = 0;
			arr[j][0] = 0;
		}

		
		sum = 0;
		for(int i = 1;i<=n;i++){
			for(int j = 1;j<=n;j++){
				if(arr[i][j] == 0 && arr[0][j] == 0 && arr[i][0] == 0){
					
					sum++;
				}else if(arr[i][j] == 1){
					
					arr[0][j] = 1;
					arr[i][0] = 1;
				}
			
				
			}
		}
		
		cout<<sum<<"\n";
		
	}
}
