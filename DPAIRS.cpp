#define ll long long
#include<iostream>
#include<algorithm>
#include<vector>
std::vector<ll> arrn,arrm,idn,idm;
int main(){
    ll n , m,temp,total;
    std::cin>>n>>m;
    total = n+m-1;
    for(int i = 0;i<n;i++){
        std::cin>>temp;
        idn.push_back(i);
        arrn.push_back(temp);
    }
    for(int i =0;i<m;i++){
        std::cin>>temp;
        idm.push_back(i);
        arrm.push_back(temp);
    }
    std::sort(idn.begin(),idn.end(),[](int i,int j)->bool{
        return  arrn[i]<arrn[j];
    });
    std::sort(idm.begin(),idm.end(),[](int i,int j)->bool{
        return arrm[i]<arrm[j];
    });
    if(m>n){
        for(int i = 0;i<n;i++){
            for(int j = i ;j<i+2 && total && j<m;j++,total--){
                std::cout<<(idn[i])<<" "<<(idm[j])<<"\t";
                std::cout<<arrn[idn[i]] + arrm[idm[j]]<<"\n";
            }
        }
    }else{
        for(int i =0;i<m;i++){
            for(int j= i ;j<i+2 && total && j <n;j++,total--){
                std::cout<<(idn[j])<<" "<<(idm[i])<<"\t";
                std::cout << arrn[idn[j]] + arrm[idm[i]] << "\n";
            }
        }
    }

}