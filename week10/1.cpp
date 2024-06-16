#include<iostream>
using namespace std;

int last_occurance(int arr[],int n,int target){
    int lo=0;
    int hi=n-1;
    int last;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==target){
            if(mid==n-1||arr[mid+1]!=target){
                last=mid;
                break;
            }
            else{
                lo=mid+1;
            }
        }
        else if(arr[mid]<target) lo=mid+1;
        else hi=mid-1;
    }
    return last;
}

int main(){
    int arr[] = {1,2,3,3,4,4,4,5};
    int x=4;
    int s=sizeof(arr)/sizeof(arr[0]);
    int re=last_occurance(arr,s,x);
    cout<<"Last occurance is at index  "<<re;

    return 0;

}