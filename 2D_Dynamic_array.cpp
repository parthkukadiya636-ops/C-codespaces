# include<iostream> // 2D dynamic array memory allocation.
using namespace std;

int main(){

    int rows,cols;
    cout << "enter no of rows:";
    cin >> rows;

    cout << "enter no of cols:";
    cin>> cols;

    int* *mat = new int*[rows];

    for(int i=0;i<rows;i++){
        mat[i] = new int[cols];
    }
    int x=1;

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            mat[i][j] = x++;
            cout << mat[i][j]<<" ";
        }
        cout<< endl;
    }
 
    return 0;
}