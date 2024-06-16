#include<iostream>
using namespace std;

void perfect_sqaure(int n){
    int lo=1;
    int hi=n;
    int re;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(mid<=n/mid){
            re=mid;
            lo=mid+1;
        }
        else hi=mid-1;
    }
    
    if((re*re)%n==0) cout<<"Yes";
    else cout<<"No";
}

int main(){
    int n=37;
    perfect_sqaure(n);
    return 0;
}