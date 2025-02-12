#include<iostream>
using namespace std;
class BankAccount{
  public:
 

  
 void withdrawal(double balance[],int i, double amount){
     if(balance[i]>=amount)
     {
         
         balance[i] = balance[i] - amount;
         cout<<"You withdrew kshs "<<amount<<" from your account!"<<endl;
         cout<<"Your balance is "<<balance[i];
     }
     else{
         cout<<"Insufficient balance in your account!";
     }
  }
  
  void deposit(double balance[],int i, double amount){
     
      balance[i] = balance[i] + amount;
      cout<<"You deposited kshs "<<amount<<" into your account!"<<endl;
      cout<<"Your balance is kshs "<<balance[i]<<"!";
  }
  
  void checkBalance(double balance[],int i){
      cout<<"Your balance is kshs "<<balance[i];
      
  }
  
};
class Details{
    public:
    string pin[5];
    string name[5];
    double balances[5];
};

int main(){
  
    Details mydet;
  BankAccount account;
   string enteredPin;
   double amount;

mydet.pin[0] = "1111"; mydet.name[0] = "Stacy"; mydet.balances[0] = 200.0;
mydet.pin[1] = "2222"; mydet.name[1] = "Jude"; mydet.balances[1] = 560.0;
mydet.pin[2] = "3333"; mydet.name[2] = "Lisa"; mydet.balances[2] = 768.0;
mydet.pin[3] = "4444"; mydet.name[3] = "Abraham"; mydet.balances[3] = 980.67;
mydet.pin[4] = "5555"; mydet.name[4] = "Jeremiah"; mydet.balances[4] = 542.3;
    cout<<"Enter your acc number(0- 4):"<<endl;
    int indexNum;
    cin>>indexNum;
    if(indexNum <0 || indexNum>=5){
        cout<<"Invalid Account Number!";
    }
    cout<<"Enter your pin: ";
    cin>>enteredPin;
  
        if(mydet.pin[indexNum]== enteredPin){
          cout<<"Access granted!"; 
           
    }
    else{
        cout<<"Accessed denied!";
        return 0;
    }
    cout<<"Welcome to the Bank!choose an operation you would like  to do:"<<endl;
    cout<<"1.Withdraw"<<endl;
    cout<<"2.Deposit"<<endl;
    cout<<"3.CheckBalance"<<endl;
    int choice;
    cin>>choice;
    
        
    
   switch (choice) {
        case 1:
        cout<<"Enter amount you wouldd want to Withdraw:";
        cin>>amount;
            account.withdrawal(mydet.balances, indexNum, amount);
            break;
        case 2:
        cout<<"Enter amount you would like to deposit:";
        cin>>amount;
            account.deposit(mydet.balances, indexNum, amount);
            break;
        case 3:
            account.checkBalance(mydet.balances, indexNum);
            break;
        default:
            cout << "Invalid choice! Try again." << endl;
    }

    return 0;
}