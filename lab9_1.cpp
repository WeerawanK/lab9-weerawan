#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double initialLoan, interestRate, annualPayment;
    double prevBalance, interest, total, payment, newBalance;
    int year = 1;

	cout << "Enter initial loan: ";
	    cin >> initialLoan;

	cout << "Enter interest rate per year (%): ";
	    cin >> interestRate;

	cout << "Enter amount you can pay per year: ";
	    cin >> annualPayment;
	    
	
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
	    
	prevBalance = initialLoan;
	while (prevBalance > 0) {
        interest = prevBalance * (interestRate / 100);
        total = prevBalance + interest;
        payment = (annualPayment > total) ? total : annualPayment;
        newBalance = total - payment; 
	

	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << year; 
	cout << setw(13) << left << prevBalance;
	cout << setw(13) << left << interest;
	cout << setw(13) << left << total;
	cout << setw(13) << left << payment;
	cout << setw(13) << left << newBalance;
	cout << "\n";
	prevBalance = newBalance;
        year++;
	}
	
	
	return 0;
}
