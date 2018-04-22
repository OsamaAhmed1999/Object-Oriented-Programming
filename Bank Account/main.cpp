#include <iostream>
#include "Bank Account.h"
using namespace std;

int main()
{
  BankAccount Account1;
  BankAccount Account2;
  BankAccount Account3;
  Account1.setBalance(0);
  Account2.setBalance(0);
  Account3.setBalance(100);
  Account1.setAccountHolder(1);
  Account2.setAccountHolder(2);
  Account3.setAccountHolder(3);
  Account1.setAccountName("Osama");
  Account2.setAccountName("Ahsan");
  Account3.setAccountName("Khizer");
  Account1.setBalance(50);
  Account2.setBalance(75);
  Account3.setBalance(75);
  Account1.dislay();
  Account2.dislay();
  Account3.dislay();
  system("pause");
}