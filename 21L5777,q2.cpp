#include<iostream>
#include<fstream>
using namespace std;
void  print_path(int i, int j)
{
	cout << "(" << i << "," << j << ") , ";
}
class pathdetect {
	int** arr;
	int rows, cols;
	friend void print_path(int, int);
public:
	pathdetect()
	{
		arr = new int* [20];
		for (int i = 0; i < 20; i++)
		{
			arr[i] = new int[20];
		}
		for (int i = 0; i < 20; i++)
		{
			for (int j = 0; j < 20; j++)
				arr[i][j] = 0;
		}
	}
	void input()
	{
		fstream fin("demo.txt");
		char ch;
		fin >> rows >> cols;
		cout << "rows : " << rows << endl << "columns : " << cols << endl;
		//initialization of dynamic array
		
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols - 1; j++)
			{
				fin >> ch;
				arr[i][j] = char_to_int(ch);
				cout << ch << ", ";
				fin >> ch;
			}
			fin >> ch;
			cout << ch << endl;
			arr[i][cols - 1] = char_to_int(ch);
		}
		fin.close();
	}

	int char_to_int(char ch)
	{
		return static_cast<int>(ch) - 48;
	}

	

	void path_detect()
	{
		int count = 0;
		int i = 0, j = 0;
		cout << "This is the shortest way to reach at petrol pump is: " << endl;
		for (; i < rows; )
		{
			for (; j < cols; )
			{
				//if (arr[i][j] == 1 && i!=rows && j!=cols)
				//{
					if (count == 0) {
						print_path(i, j);
					}
					if (arr[i][j + 1] == 1 )
					{
						print_path(i, j + 1);
						count++;
						j++;
					}
					else if (arr[i + 1][j] == 1)
					{

						print_path(i + 1, j);
						count++;
						i++;
					}

				//}
				else if (arr[i][j] == 0 && i == 0)
				{
					cout << "path not found." << endl;
					i = rows;
					j = cols;
				}
				else
					break;
			}
		}
	}
	~pathdetect()
	{
		//delocalizing the 2D dunamic array
		for (int i = 0; i < 20; i++)
		{
			delete[]arr[i];
			
		}
		arr = nullptr;
		delete arr;
	}
};


int main()
{
	pathdetect obj;
	obj.input();
	obj.path_detect();


	
	system("pause");
	return 0;
}

