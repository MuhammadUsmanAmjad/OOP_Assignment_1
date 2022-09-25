//#include<iostream>
//using namespace std;
//class queue {
//    int* arr;
//    int front;
//    int back;
//    int n = 100;
//public:
//    queue()
//    {
//        arr = new int[n];
//        front = -1;
//        back = -1;
//    }
//    void enqueue()
//    {
//        int x = 0;
//        if (back == n - 1)
//        {
//            cout << "queue overfloaded" << endl;
//            return;
//        }
//        back++;
//        cout << "enter element in queue:" << endl;
//        cin >> x;
//        *(arr + back) = x;
//        if (front == -1)
//            front++;
//    }
//    void dequeue()
//    {
//        if (front == -1 || front > back)
//        {
//            cout << "no element in the queue" << endl;
//            return;
//        }
//        front++;
//    }
//    int peak()
//    {
//        if (front == -1 || front > back)
//        {
//            cout << "no element in the queue" << endl;
//            return -1;
//        }
//        return arr[front];
//    }
//    bool isempty()
//    {
//        if (front == -1 || front > back)
//        {
//            return true;
//        }
//        return false;
//    }
//    ~queue()
//    {
//        delete[]arr;
//    }
//};
//int main()
//{
//    int x = 0;
//    queue obj;
//    do {
//        cout << "enter your choice" << endl << "1 for enqueue," << endl << "2 for dequeue," << endl;
//        cout << "3 for peek," << endl << "4 to check queue is empty or not." << endl;
//
//
//        cin >> x;
//        switch (x)
//        {
//        case 1:
//            obj.enqueue();
//            break;
//        case 2:
//            obj.dequeue();
//            break;
//        case 3:
//            cout<<obj.peak();
//            cout << endl;
//            break;
//        case 4:
//           cout<< obj.isempty();
//            break;
//        default:
//            cout << "invalid input." << endl;
//
//        }
//    } while (x != 'a');
//}
