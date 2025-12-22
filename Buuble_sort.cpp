# include<iostream>
using namespace std;

void sort_arr(int* arr, int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
}


int main(){

    int arr[5] = {1,5,3,7,2};
    sort_arr(arr,5);



    return 0;
}