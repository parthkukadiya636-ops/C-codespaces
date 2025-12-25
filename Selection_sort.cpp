# include<iostream>
using namespace std;

void selec_sort(int*arr , int n){
    for(int i=0;i<n-1;i++){
        int min_index = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min_index]){
            min_index = j;
            }
        }
        swap(arr[i], arr[min_index]);
    }
    for (int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
    
}

int main(){

    int arr[5] = {5,4,1,3,2};
    selec_sort(arr,5);


     return 0;
}