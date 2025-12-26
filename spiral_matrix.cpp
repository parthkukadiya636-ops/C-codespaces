# include<iostream>
using namespace std;


void spiralmatrix(int mat[][4],int n,int m){
    int srow= 0, erow = n-1;
    int scol = 0, ecol = m-1;

    while(srow<=erow && scol<=ecol){
    // top

    for(int j=srow;j<=ecol;j++){
        cout<<mat[srow][j]<<" ";
    }

    // right 

    for(int i=srow+1;i<=ecol;i++){
        cout<<mat[i][ecol]<<" ";
    }

    // bottom

    for(int i=ecol-1;i>=scol;i--){
        if(srow==erow){
            break;
        }
        cout<<mat[erow][i]<<" ";
    }

    // left

    for(int j=erow-1;j>=srow+1;j--){
        if(scol==ecol){
            break;
        }
        cout<<mat[j][scol]<<" ";
    }
    srow++, erow--;
    scol++,ecol--;
}
}


int main(){

    int matrix[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};

    spiralmatrix(matrix,4,4);


    return 0;
}