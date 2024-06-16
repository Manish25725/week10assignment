//Binary search concept..
#include<iostream>
using namespace std;

int find_Duplicate(int a[],int n){
    int lo=1;
    int hi=n;

    while(lo<hi){
        int mid=lo+(hi-lo)/2;
        int count=0;
        for(int i=0;i<n+1;i++){
            if(a[i]<=mid) count++;
        }

        if(count>mid) hi=mid;
        else lo=mid+1;
    }

    return lo;
}

int main(){
    int arr1[] = {1, 2, 3, 3, 4};
    int n1 = sizeof(arr1) / sizeof(arr1[0]) - 1; 
    int result1 = find_Duplicate(arr1, n1);
    cout << "The repeated number is: " << result1 << endl;

    return 0;
}

