#include <iostream>
#include <string>
using namespace std;

class programmer
{
  public:
  programmer()
  {
    this->efficiency=100;
  }

  void display()
  {
    cout<<"Hello! I am a Programmer"<<endl;
    cout<<"efficiency:"<<this->efficiency<<endl;
  }

  private:
  float efficiency;
  float problem_solving_skills;
};