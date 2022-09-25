//#include<iostream>
//using namespace std;
//
//class stack {
//	int* arr;
//	int n = 100;
//	int top = -1;
//public:
//	stack()
//	{
//		arr = new int[n];
//	}
//	void push()
//	{
//		int x = 0;
//			top++;
//			cout << "enter element in stack:" << endl;
//			cin >> x;
//			arr[top] = x;
//	}
//	void pop()
//	{
//		if (top == n)
//		{
//			cout << "stack overfollowed." << endl;
//		}
//			top--;
//	}
//	void peak()
//	{
//		if (top == -1)
//		cout << "No element in stack." << endl;
//		else
//		cout << arr[top];
//	}
//	bool isempty()
//	{
//		if (top == -1)
//		return 1;
//		else
//	    return 0;
//			
//	}
//	~stack()
//	{
//		delete[]arr;
//	}
//
//};
//int main()
//{
//	stack obj;
//	int x = 0;
//	do {
//		cout << endl << "enter your choice" << endl << "1 for push," << endl << "2 for pop," << endl;
//		cout << "3 for peak," << endl << "4 to check stack is empty or not." << endl;
//
//		cin >> x;
//		switch (x)
//		{
//		case 1:
//			obj.push();
//			break;
//		case 2:
//			obj.pop();
//			break;
//		case 3:
//			obj.peak();
//			break;
//		case 4:
//			cout << obj.isempty();
//			break;
//		default:
//			cout << "invalid input." << endl;
//
//		}
//	} while (x != 'a');
//
//}