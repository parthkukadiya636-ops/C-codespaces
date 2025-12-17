# include<iostream>
using namespace std;

int fact(int n){
    int fact =1;
    for(int i=1;i<=n;i++){
        fact *= i;
    }

    return fact;
}

int bin_coeff(int n, int r){
    int val1 = fact(n);
    int val2 = fact(r);
    int val3 = fact(n-r);

    int result = val1 / (val2 * val3);

    return result;


}

int main(){
    int s= bin_coeff(4,2);

    cout<<s<<endl;
    return 0;
}