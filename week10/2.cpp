#include<iostream>
using namespace std;

int main(){
    int a[] = {0,0,0,0,1,1};
    int n=sizeof(a)/sizeof(a[0]);
    int lo=0;
    int hi=n-1;
    int fir;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(a[mid]==1){
            if(mid==0||a[mid-1]!=1){
                fir=mid;
                break;
            }
            else hi=mid-1;
        }
        else if(a[mid]<1) lo=mid+1;
        else hi=mid-1;
    }
    fir=n-fir;
    cout<<"No of 1 in sorted array is "<<fir;
    return 0;





}