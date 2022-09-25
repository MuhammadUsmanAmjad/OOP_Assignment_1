#include <iostream>
using namespace std;
class copy_stack {
	int* source_stack ;
	int* destination_stack ;
	int temp_variable, temp_variable2 ;
	int top;
	int size;
public:
	copy_stack() {
		source_stack = new int[size];
		destination_stack = new int[size];
		 temp_variable=0, temp_variable2=0;
		 top=-1;
		 size = 0;
	}
	void input()
	{
		cout << "enter size:" << endl;
		cin >> size;
		while (top < size - 1)
		{
			top++;
			cin >> *(source_stack + top);
		}
	}
		bool isempty()
		{
			if (top == -1)
			{
				return true;
			}
			top = 0;
			return false;
			
		}
		void helper()
		{
			temp_variable = *(source_stack + temp_variable2);
			temp_variable2++;
			*(destination_stack + top) = temp_variable;
			top++;

		}
		void show()
		{
			cout << "Source Stack is:" << endl;
			while (top > -1)
			{
				cout << " " << *(source_stack + top) << endl;
				top--;
			}
			top = size - 1;
			cout << "Destination Stack is:" << endl;
			while (top > -1)
			{
				cout << " " << *(destination_stack + top) << endl;
				top--;
			}

		}


		void helper2()
		{
			if (isempty() == 1)
			{
				cout << "stack is empty." << endl;
				
			}
			else
			{
				top = 0;
				for (int i = 0; i < size; i++)
				{
					helper();
				}
				top--;
				show();
			}
		}
		~copy_stack()
		{
			delete[]source_stack;
			delete[]destination_stack;;
		}
};


int main()
{
	copy_stack obj;
	obj.input();
	obj.helper2();
	
     
	return 0;
}
