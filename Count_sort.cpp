# include<iostream>
#include <climits>
#include <algorithm>

using namespace std;

void count_sort(int* arr,int n){
    int freq[10000] ={0};
    int minVal = INT_MAX , maxVal = INT_MIN;

    for(int i=0;i<n;i++){
        minVal = min(minVal, arr[i]);
        maxVal = max(maxVal, arr[i]);
    }

    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }

    for(int i=minVal,j=0;i<=maxVal;i++){
        while(freq[i]>0){
            arr[j++]= i;
            freq[arr[i]]--; 
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
}

int main(){


    int arr[] = {1,4,1,3,3,4,3,7};
    int n = sizeof(arr)/sizeof(int);

    count_sort(arr,n);
    return 0;
}