//// Question 10
//#include "StaticQueue.h"
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//    int val;
//    int n;
//
//    StaticQueue queue(6);
//
//    for (int count = 0; count < 6; count++)
//    {
//        cout << "Enter an value: ";
//        cin >> val;
//        queue.enqueue(val);
//    }
//
//    cout << "Enter which position you would like to move to the front: " << endl;
//    cin >> n;
//    queue.moveNthFront(n);
//
//    for (int count = 0; count < 6; count++)
//    {
//        queue.dequeue(val);
//        cout << val << endl;
//    }
//
//    system("PAUSE");
//    return 0;
//}