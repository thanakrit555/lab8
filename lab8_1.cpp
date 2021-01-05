#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
  
  float loan,rate,canpay;
  
	cout <<"Enter initial loan: ";
	cin>>loan;
	cout <<"Enter interest rate per year (%): ";
	cin>>rate;
	cout << "Enter amount you can pay per year: ";
	cin>>canpay;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";

   int year=1;
   float Interest;
   float Total =0;
   float NewBalance = loan;

while(NewBalance !=0){
    loan = NewBalance;	
	Interest= loan*rate/100;
	Total=loan+Interest;
	NewBalance=Total-canpay;
	if(Total<canpay){
		canpay = Total;
	}
	NewBalance= Total -canpay;
  
}


	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << year; 
	cout << setw(13) << left << loan;
	cout << setw(13) << left << Interest;
	cout << setw(13) << left << Total;
	cout << setw(13) << left << canpay;
	cout << setw(13) << left << NewBalance;
	cout << "\n";	
	
	return 0;
}
