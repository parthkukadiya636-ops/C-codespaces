# include<iostream>
using namespace std;

int main(){
    int x= 2;
    char y ='A';
    int n=10;

    for(int i=1; i<=n;i++){
          for(int j=n-i; j>=1; j--){
            cout<<" ";
          }

          for(int j=1; j<=2*i-1; j++){
            if(i%2==0){
                if(j%2==0){
                    cout<<"*";
                }
                if(j%2!=0){
                    cout<<x;
                }
            }
            else if(i%2!=0){
                if(j%2==0){
                    cout<<"*";
                }
                else{
                    cout<<y;
                }
            }    
            
          }
          if(i%2==0){
                x++;
            }
            else{
                y++;
            }
         
          cout<<endl;
    }



    return 0;
}