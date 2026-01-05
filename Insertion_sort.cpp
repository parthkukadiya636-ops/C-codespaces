# include<iostream>
using namespace std;

void insert_sort(int* arr, int n){

    for(int i=1;i<n;i++){
        int curr_ele = arr[i];
        int previ = i-1;
        while(previ>=0 && curr_ele<arr[previ]){
            swap(arr[previ],arr[previ+1]);
            previ--;
        }
        arr[previ+1]= curr_ele;
    }   

    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
}

int main(){

    int arr[5] = {5,4,1,3,2};
    int n = sizeof(arr)/sizeof(int);

    insert_sort(arr,5);

    return 0;  
}