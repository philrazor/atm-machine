#include <iostream>

using namespace std;
/*basic ATM system
    functionalities-
    (check balance,deposit,withdraw )*/

void showMenu(){
   cout<<"*****menu******"<<endl;
   cout<<"1.check Balance"<<endl;
   cout<<"2.Withdraw"<<endl;
   cout<<"3.deposit"<<endl;
   cout<<"4.send money"<<endl;
   cout<<"5.Exit"<<endl;
   cout<<"**************"<<endl;
   }

int main()
{
    double balance =500 ;
    double Amount;
    int option;

   do{
        showMenu();
       cout<<"choose an option:";
       cin>>option;
       system("cls");

    switch(option){
       case 1:cout<<"your balance is: "<<balance<<endl; break;
       case 2: if(Amount<=balance){
           cout<<"enter amount to withdraw: ";
           cin>>Amount;
           balance=balance -Amount;
           cout<<"withdraw successful"<<endl;
           cout<<"new account balance is:"<<balance<<endl;
       }else{cout<<"sorry not enough cash /n";} break;
       case 3:cout<<"Enter amount to deposit: ";
       cin>>Amount;
       balance= balance + Amount;
       cout<<"your new balance is:"<<balance<<endl;
       break;
       case 4:cout<<"enter amount to transfer: ";
       cin>>Amount;
       balance =balance -Amount;
       cout<<"transfer of ksh"<<Amount<<" has been completed"<<endl;
       cout<<"new account balance is:"<<balance<<endl;
       break;
       case 5:cout<<"Have a nice day!!!!"<<endl; break;


    }
   }while (option!=5);


return 0;
}
