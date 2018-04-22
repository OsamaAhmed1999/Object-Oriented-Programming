#include <iostream>
using namespace std;

class DVD
{
	public:
		DVD()
		{
			this->name="Name";
			this->cost=0;
		}
		DVD(string name , int cost)
		{
			this->name=name;
			this->cost=cost;
		}
		DVD(DVD& clone)
		{
			this->name=clone.name;
			this->cost=clone.cost;
		}
		
		string getname()
		{
			return this->name;
		}
		int getcost()
		{
			return this->cost;
		}
		
		void setname(string name)
		{
			this->name=name;
		}
		void setcost(int cost)
		{
			this->cost=cost;
		}
		void set(string name , int cost)
		{
			this->name=name;
			this->cost=cost;
		}
		
		
		void show()
		{
			cout<< "NAME: " << this->name << endl;
			cout<< "COST: " << this->cost << endl;
		}
		
		
	private:
		string name;
		int cost;
};
ostream& operator << (ostream& output , DVD& object)
{
	return output << "NAME: " << object.getname() << endl << "COST: " << object.getcost() << endl;
}