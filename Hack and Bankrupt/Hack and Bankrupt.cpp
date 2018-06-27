//Hack and Bankrupt
//CSC215
//Samael Newgate

#include "stdafx.h"
#include <iostream>

using namespace std;

//Stating the variables used throughout the program
void safeViewAccountBalanceTransaction(int accountBallance, int accountBallanceTwo);
void HackViewAccountBalanceTransaction(int& accountBallanceOne, int& accountBallanceTwo);

int main()
{
	//Starting Values of both Bank of Terror and Struggling local
	int Bank_of_Terror = 666666666;
	int Struggling_Local = 1;
	//Prints out the original amount of money in both accounts 
	cout << "Original Values: \n";
	cout << "Bank of Terror: " << Bank_of_Terror << "\n";
	cout << "Struggling Local: " << Struggling_Local << "\n";
	//Shows what a normal transaction would before the hack would take place 
	cout << "\nNormal Transaction: \n";
	safeViewAccountBalanceTransaction(Bank_of_Terror, Struggling_Local);
	cout << "Bank of Terror: " << Bank_of_Terror << "\n";
	cout << "Struggling Local: " << Struggling_Local << "\n";
	//Showing Hacked Balances, after the CIA hacked to get more money because they are broke 
	cout << "\nHacked Transaction: \n";
	HackViewAccountBalanceTransaction(Bank_of_Terror, Struggling_Local);
	cout << "Bank of Terror: " << Bank_of_Terror << "\n";
	cout << "Struggling Local: " << Struggling_Local << "\n";
	//Pauses Program
	system("pause");

	return 0;
}

//Void means the function doesn't return a value
void safeViewAccountBalanceTransaction(int accountBallanceOne, int accountBallanceTwo)
{

	int temp = accountBallanceOne;
	accountBallanceOne = accountBallanceTwo;
	accountBallanceTwo = temp;
}
//Void is used here again
void HackViewAccountBalanceTransaction(int& accountBalanceOne, int& accountBalanceTwo)
{
	int temp = accountBalanceOne;
	accountBalanceOne = accountBalanceTwo;
	accountBalanceTwo = temp;

}