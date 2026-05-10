// Ex 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

class BankAccount {

private:
	string accountNumber;
	string accountHolder;
	double balance;

public:
	BankAccount() {

		accountNumber = "";
		accountHolder = "";
		balance = 0;

	}

	void createAccount(string accNum, string holder, double initialDeposit) {

		accountNumber = accNum;
		accountHolder = holder;

		if (initialDeposit >= 0) {
			balance = initialDeposit;

			cout << "Account created successfully." << endl;
		}

		else {
			balance = 0;

			cout <<
 "Error: Negative deposit not allowed." << endl;
		}

	}
	void deposit(double amount) {

		if (amount >= 0) {

			balance = balance + amount;
			cout << "Deposit Successful." << endl;
			cout << " New Balance: " << balance << endl;

		}

		else {

			cout << "Error!, please deposit an amount greater that 0." << endl;

		}
	}


	void withdraw(double amount) {

		if (balance >= amount) {

			balance = balance - amount;
			cout << "Withdrawal Successful." << endl;
			cout << " Remaining Balance: " << balance << endl;
		}

		else {

			cout << "Error! Insufficient Balance." << endl;

		}

	}

	double getBalance() {

		return balance;

	}

};

int main() {

	BankAccount acc1;

	acc1.createAccount("001", "Zodwa", 1000);

	acc1.deposit(500);

	acc1.withdraw(500);

	cout << "Current Balance: " << acc1.getBalance() << endl;

	return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
