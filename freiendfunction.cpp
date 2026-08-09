# include<iostream>
using namespace std;

class Bank;
class Acc_Holder{
    string name;
    float balance;

    public:

    void setdata(){
        cout<<"Enter the name of the Acocunt Holder: ";
        cin>>name;
        cout<<"Enter the balance of the Account: ";
        cin>>balance;
    }
    friend void findsbiAccount(Acc_Holder acc[],  Bank bank[], int n);
};

class Bank{
    string bank_name;
    string branch_name;

    public:

    void setdata(){
        cout<<"Enter the name of the Bank Name: ";
        cin>>bank_name;
        cout<<"Enter the Branch of the Account: ";
        cin>>branch_name;

        cout<<"---------------------------------------------------"<<endl;
    }

    friend void findsbiAccount(Acc_Holder acc[],  Bank bank[], int n);
};

void findsbiAccount(Acc_Holder acc[], Bank bank[], int n){
    bool found= false;

    cout<<"The user which has the Account in the SBi bank and anand branch are: "<<endl;

    for(int i=0; i<n; i++){
        if(bank[i].bank_name == "sbi" &&  bank[i].branch_name == "anand"){
            cout<<acc[i].name<<endl;
            found = true;
        }
    }
    if(!found){
        cout<<"No user were Found for this Bank and this Branch !!";
    }

}


int main(){

    int n;
    cout<<"Enter the Number of the Account to be inserted: ";
    cin>>n;

    Acc_Holder acc[n];
    Bank bank[n];

    for(int i=0; i<n; i++){
        acc[i].setdata();
        bank[i].setdata();
    }

    findsbiAccount(acc, bank, n);


    return 0;
}