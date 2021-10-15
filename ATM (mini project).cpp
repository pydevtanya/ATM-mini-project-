#include <iostream>
using namespace std;
int main(){
  int pin,balance,withdrawl,fastCash,choice;
  balance = 100000;
  cout<<"Welcome to Central Bank of India\n";
  cout<<"Enter your 4 Digit pin number: ";
  cin>>pin;
  cout<<endl;
  if(pin==1970){
    cout<<"Please choose transcation: \n";
    cout<<"1. Withdraw cash\n";
    cout<<"2. Balance enquiry\n";
    cout<<"3. Fast Cash\n";
    cin>>choice;
    cout<<endl;
      if(choice==1){
        cout<<"Plese enter withdraw amount: ";
        cin>>withdrawl;
        if(withdrawl < balance && withdrawl%100 == 0){
          cout<<"Please Take your Amount: ₹"<<withdrawl;
        }
        else{
          cout<<"Invalid amount\n";
        }
      }
      else if(choice==2){
        cout<<"Your available Amount ₹"<<balance;
      }
      else if(choice==3){
        cout<<"1. ₹5,000\n";
        cout<<"2. ₹10,000\n";
        cout<<"3. ₹15,000\n";
        cout<<"4. ₹20,000\n";
        cout<<"Please choose fast cash option: ";
        cin>>fastCash;
        cout<<endl;
        if(fastCash==1 && 5000 < balance){
          cout<<"Please take ₹5000.\n";
        }
        if(fastCash==2 && 10000 < balance){
          cout<<"Please take ₹10000.\n";
        }
        if(fastCash==3 && 15000 < balance){
          cout<<"Please take ₹15000.\n";
        }
        if(fastCash==4 && 20000 < balance){
          cout<<"please take ₹20000.\n";
        }
        else{
          cout<<"Invalid option\n";
        }
      }
    else{
      cout<<"Wrong choice\n";
    }
  }    
else{
  cout<<"Invalid pin number\n";
}
return 0;
}