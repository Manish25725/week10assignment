#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[4][4]={{0,1,1,1},{0,0,1,1},{1,1,1,1},{0,0,0,0}};
    int r=INT_MAX;
    int mindx=-1;
    for(int i=0;i<4;i++){
        int lo=0;
        int hi=sizeof(arr[0])/sizeof(arr[0][0])-1;
        int count;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(arr[i][mid]==1){
                if(mid==0||arr[i][mid-1]!=1){
                    count=mid;
                    break;
                }
                else hi=mid-1;
            }
            else if(arr[i][mid]<1) lo=mid+1;
            else hi=mid-1; 
        }

        if(r>count){
            r=count;
            mindx=i;

        }
    }
    cout<<"Index of Row having maximum one's is  "<<mindx;
    return 0;

}
