#include <iostream>
using namespace std;
class Bank{
    private:
    string Customer;
    string Mobnum;
    string Address;
    string M_F;


   
    public:
     long double Balance,deposit;
    long double Withdraw;
        long long int Accnum;
        long long int Pin;
    void Createaccount(){
        cout<<"Please enter the Account holder's name: ";
        cin >> Customer;
        cout << "Please enter your mobile number: ";
        cin>>Mobnum;
        cout<< "Please enter your gender: ";
        cin>> M_F;
        cout<< "Please enter your password(digitts only) :";
        cin>> Pin;
        cout<< "Please enter your address: ";
        cin>>Address;
        cout<< "Please enter the amount you want to add(minimum Rs.2000.00): ";
        cin>>Balance;
    }
    void Deposit(){
        cout<<"Please enter the amount you want to deposit::";
        cin>>deposit;
        Balance =Balance + deposit;
    }
    void withdraw(){
        cout<<"Please enter the amount you want to withdraw/transfer::";
        cin>>Withdraw;
        Balance =Balance - Withdraw;
    }
    void setbalance(float balance){
        Balance=balance;
    }
    float getbalance(){
        return Balance;
    }
    void Transfer(){
        cout<<"The account  with account number"<<Accnum<<endl;
        cout<<"Account holder name : "<<Customer<<endl;
        cout<<"::::::has been credited with::::::\n ";
        cout <<"Rs. "<<deposit<<endl;
        Balance=Balance + deposit;
    }
    void Accountdetails(){
            cout<<"***********************************************\n";
            cout<<"Here are your account details:\n";
        cout<<"Account holder's name: "<<Customer <<endl;
        cout<<"Mobile number: "<<Mobnum<<endl;
        cout<<"Gender: "<<M_F<<endl;
        cout<<"Account Holder's address: "<<Address<<endl;
        cout<<"Account Number: "<<Accnum<<endl;
        cout<<"Balance: Rs. "<<Balance<<endl;
        cout<<"***********************************************\n";
    }
    int S(long long int a,long long int p){
        if (Accnum==a && Pin==p){
    Accountdetails();
}
}
    
    /*Bank(string customer,string mobnum,string address,string m_f,int accnum,int balance,int withdraw){
        Customer=customer;
        Mobnum=mobnum;
        Address=address;
        M_F=m_f;
        Accnum=accnum;
        Balance=balance;
        Withdraw=withdraw;
        }*/
};

int main()
{
    int actionnum,i ;
    long long int a,f=0,p,t;
    string Actions,ch;
        Bank user[50];
        for(i=0;i<=49;i++){
            user[i].Accnum=2058009101+i*11;
        
        }
    cout <<"Welcome to the IITI bank\n";
    cout<<"Please create a new account first\n";
    cout<<"please enter the required info to create new account\n";
            user[0].Createaccount();
    cout<<"Congratulations! Your account has been created.\n";
    user[0].Accountdetails();
    
    
int j=1;
    do{
    cout <<"Choose the desired option\n";
    cout<<"1::Create new bank account\n";
    cout<<"2::View Account details\n";
    cout<<"3::Deposit money\n";
    cout<<"4::Withdraw money\n";
    cout<<"5::Transfer money from one account to anoher\n";
    cout<<"6::Exit\n";
    cout<<"Please enter corresponding option number:";
    cin>>actionnum;
    switch(actionnum){
        case 1:
         user[j].Createaccount();
    cout<<"Congratulations! Your account has been created.\n";

    user[j].Accountdetails();
    j++;
    break;
    case 2:
    cout<<"Enter the Account number:";
    cin>>a;
    cout<<"Enter your password :";
    cin>>p;
    for(i=0;i<=49;i++){
        f =user[i].S(a,p);
        }    
        if(f=2058009640){
            cout<<"::::account not found :::: invalid account number or incorrect pin::::\n";
    }
    break;
    case 3:
    cout<<"Enter the Account number:";
    cin>>a;
    cout<<"Enter your password :";
    cin>>p;
    for(i=0;i<=49;i++){
        if (user[i].Accnum==a && user[i].Pin==p){
            user[i].Deposit();
        cout<<"********************************************\n";
        cout<<":::::::your balance has been updated:::::::\n";
        user[i].Accountdetails();
        f=a;
        break;
        }
    }
        if(f == 0){
            cout<<"::::account not found :::: invalid account number or incorrect pin::::\n";
    }
    break;
    case 4:
    cout<<"Enter the Account number:";
    cin>>a;
    cout<<"Enter your password :";
    cin>>p;
    for(i=0;i<=49;i++){
        if (user[i].Accnum==a && user[i].Pin==p){
            user[i].withdraw();
        cout<<"********************************************\n";
        cout<<":::::::your balance has been updated:::::::\n";
        user[i].Accountdetails();
       
        f=a;
        break;
        }
    }
        if(f == 0){
            cout<<"::::account not found :::: invalid account number or incorrect pin::::\n";
    }
    break;
    case 5:
    cout<<"Please enter the account from which you want to transfer money :";
    cin>>a;
    cout<<"Enter your password :";
    cin>>p;
    cout<<"Please enter the account yo want to add money to:";
    cin>>t;
    for(i=0;i<=49;i++){
        if (user[i].Accnum==a && user[i].Pin==p){
            for(int k=0;k<=49 ;k++){
            if(user[k].Accnum== t){
            user[i].withdraw();
        cout<<"********************************************\n";
        cout<<":::::::your money has been successfully transferred:::::::\n";
        user[i].Accountdetails();
         user[i].Withdraw == user[k].deposit;
         user[k].Transfer();
                 f=a;
        break;
            }
            }
    
        break;
        }
    }
        if(f == 0){
            cout<<"::::account not found :::: invalid account number or incorrect pin::::\n";
    }
    break;
    case 6:
    cout<<"You have exited successfully\n";
    cout<<"*******Have a nice day*********";
    break;
    }
    }
    while (actionnum !=6);
   
}
    