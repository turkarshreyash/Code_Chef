#include<iostream>
int main(){
    int t, n, m, k, r,c,total;
    std::cin>>t;
    while(t--){
        std::cin>>n>>m>>k;
        total = 0;
        int **arr = new int*[n+2];
        for(int i = 0 ; i < n+2 ; i++){
            arr[i] = new int[m+2]();
        }
        for(int i = 0 ; i < k ; i++){
            std::cin>>r>>c;
            arr[r][c] = 1;
        }
        for(int i = 1 ; i<n+2 ; i++){
            for(int j = 1 ; j<m+2 ;j++){
                total += arr[i][j-1]^arr[i][j];
                total += arr[i][j]^arr[i-1][j];
            }
        }
        std::cout<<total<<"\n";
    }
}
