#include <iostream>
using namespace std;

class BankAccount
{
  public:
  BankAccount()
  {
    this->Account_Name = "0";
    this->Account_Holder = 0;
    this->Balance = 0;
  }
  BankAccount(string Account_Name , int Account_Holder , float Balance)
  {
    this->Account_Name = Account_Name;
    this->Account_Holder = Account_Holder;
    this->Balance = Balance;
  }
  void setAccountName(string Account_Name);
  void setAccountHolder(int Account_Holder);
  void setBalance(float Balance);
  string getAccountName();
  int getAccountHolder();
  float getBalance();
  void dislay();

  private:
  string Account_Name;
  int Account_Holder;
  float Balance;
};

void BankAccount :: setAccountName(string Account_Name)
{
  this->Account_Name = Account_Name;
}
void BankAccount :: setAccountHolder(int Account_Holder)
{
  this->Account_Holder = Account_Holder;
}
void BankAccount :: setBalance(float Balance)
{
  this->Balance = Balance;
}
string BankAccount :: getAccountName()
{
  return this->Account_Name;
}
int BankAccount :: getAccountHolder()
{
  return this->Account_Holder;
}
float BankAccount :: getBalance()
{
  return this->Balance;
}
void BankAccount :: dislay()
{
  cout << "Account Name: " << this->Account_Name << endl;
  cout << "Account Holder: " << this->Account_Holder << endl;
  cout << "Balance: " << this->Balance << endl;
}
