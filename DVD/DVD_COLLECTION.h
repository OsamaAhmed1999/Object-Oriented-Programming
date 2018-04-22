#include <iostream>
#include <string.h>
#include "DVD.h"
using namespace std;
int i;

class DVD_COLLECTION
{
	public:
	//CONSTRUCTOR
		DVD_COLLECTION()
		{
			this->total_cost = 0;
			this->size = 5;
			this->index = 0;
			DVD_list = new DVD[size];
		}
		//GETTERS
		DVD getDVD_list()
		{
			return this->DVD_list[index];
		}
		int getcost()
		{
			return this->total_cost;
		}
		int getindex()
		{
			return this->index;
		}
		//SETTERS
		void settotalcost(int total_cost)
		{
			this->total_cost = total_cost;
		}
		void setindex(int index)
		{
			this->index = index;
		}
		void setDVD_list(DVD *DVD_list)
		{
			this->DVD_list = DVD_list;
		}
		//ADD FUNCTION
		void add(DVD& object)
		{
			if(index < size)
			{
				DVD_list[index] = object;
				index++;
			}
			else
			{
				increase_size(object);
			}
			total_cost = total_cost + object.getcost();
		}
		//SEARCH FUNCTION
		int Search(string name)
		{
			DVD object;
			int temp = 0;
			for(i = 1; i <= index; i++)
			{
				object = this->DVD_list[i];
				if(name == object.getname())
				{
					temp = i;
					break;
				}
			}
			total_cost = total_cost - object.getcost();
			return temp;
			
		}
		//DELETE FUNCTION
		void Delete(string name)
		{
			int temp = Search(name);
			if(temp > 0)
			{
				for(i = temp; i < index-1; i++)
				{
					this->DVD_list[i] = this->DVD_list[i+1];
				}
				index--;
			}
			else
			{
				cout << "Not Found" << endl;
			}
		}
		//DISPLAY FUNCTION
		void display()
		{
			for(i=0 ; i<index ; i++)
			{
				cout << this->DVD_list[i] << endl;
			}
			cout << "Total Cost: " << this->total_cost << endl << endl;
		}

		protected:
		//INCREASE SIZE FUNCTION
		void increase_size(DVD& object)
		{
			size = size * 2;
			DVD *new_DVD_list = new DVD[size];
			for(i = 0; i < size/2; i++)
			{
				new_DVD_list[i] = DVD_list[i];
			}
			delete [] DVD_list;
			DVD_list = new_DVD_list;
			DVD_list[index] = object;
			index ++;
		}
		
	private:

		int total_cost;
		DVD *DVD_list;
		int size;
		int index;
};
