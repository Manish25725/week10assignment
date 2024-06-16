#include<iostream>
using namespace std;

int staircase(int n){
    int lo=1;
    int hi=n;
    int out;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        int sum=(mid)*(mid+1)/2;
        if(sum<=n){
            out=mid;
            lo=mid+1;
        }
        else{
            hi=mid-1;
        }
    }
    return out;

}

int main(){
    int n=8;
    int re=staircase(n);
    cout<<re;

    return 0;

}