# include<iostream>
using namespace std;

int trap(int* heights , int n){
    int leftmax[20000];
    leftmax[0] = heights[0];
    for(int i=1;i<n;i++){
        leftmax[i] = max(leftmax[i-1], heights[i-1]);
    }

    int rightmax[20000];
    rightmax[n-1] = heights[n-1];
    for(int i=n-2;i>=0;i--){
        rightmax[i]= max(rightmax[i+1], heights[i+1]);
    }
    int traped_water = 0;
    int current_water;
    

    for(int i=0;i<n;i++){
       current_water = (min(leftmax[i],rightmax[i])-heights[i]);
       if(current_water>0){
        traped_water += current_water;
       }
    }

    return traped_water;
}


int main(){

    int heights[7] = {4,2,0,6,3,2,5};
    int n=7;

    int water_trap = trap(heights,7);
    printf("Water traped is :%d", water_trap);

    return 0;
}