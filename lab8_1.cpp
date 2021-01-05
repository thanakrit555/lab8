#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double PrevBalance,Interest,Total,Payment,NewBalance;
	cout <<"Enter initial loan: ";
	cin >> PrevBalance;
	cout <<"Enter interest rate per year (%): ";
	cin >> Interest;
	Interest = Interest/100;
	cout <<"Enter amount you can pay per year: ";
	cin >> Payment;
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
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	NewBalance = PrevBalance;
	for(int year = 1;NewBalance>0;year++)
{
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << year; 
	cout << setw(13) << left << PrevBalance;
	cout << setw(13) << left << Interest*PrevBalance;
	Total = (Interest*PrevBalance)+PrevBalance;
	cout << setw(13) << left << Total;
	if(Payment > Total) Payment = Total;
	cout << setw(13) << left << Payment;
	NewBalance = Total - Payment;
	cout << setw(13) << left << NewBalance;
	PrevBalance = NewBalance;
		cout << "\n";	
	}
	
	return 0;
	}
