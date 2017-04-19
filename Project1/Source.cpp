//#include<iostream>
//#include<Windows.h>
////#include<thread>
////
////
////using namespace std;
////
////void parent()
////{
////	for (int i = 0; i < 10; i++)
////	{
////		cout << "hello from parent \n" << endl;
////		
////	}
////		
////	Sleep(2000);
////	
////
////
////}
////
////void child()
////{
////	
////	for (int i = 0; i < 10; i++)
////	{
////		cout << "hello from child \n" << endl;
////		
////	}
////	Sleep(2000);
////	
////}
////int main()
////{
////	cout << "execution started" << endl;
////
////	thread t1(parent);
////	thread t2(child);
////	
////	t1.join();
////	t2.join();
////	
////
////	cout << "execution completed" << endl;
////
////	cin.get();
////}
//
#include<iostream>
#include<Windows.h>
#include<thread>
#include<mutex>
#include<conio.h>


using namespace std;
std::mutex mtx;
void parent()
{
	mtx.lock();
	for (int i = 0; i < 10; i++)
	{
        
      cout<< "hello from parent \n" << endl;
	  Sleep(2000);
		

	}
	mtx.unlock();

	



}

void child()
{
	mtx.lock();
	for (int i = 0; i < 10; i++)
	{

	
	cout << "hello from child \n" << endl;
	
	}
	mtx.unlock();

}
int main()
{
	cout << "execution started" << endl;
		thread t1(parent);
		thread t2(child);
		t1.join();
		t2.join();
	
	


	cout << "execution completed" << endl;

	cin.get();
	return 0;
}

//#include <iostream>       // std::cout
//#include <thread>         // std::thread
//#include <mutex>     
//#include<stdio.h>
//#include<conio.h>                // std::mutex
//
//std::mutex mtx;           // mutex for critical section
//
//void print_block(int n, char c) {
//	// critical section (exclusive access to std::cout si gnaled by locking mtx):
//	mtx.lock();
//	for (int i = 0; i<n; ++i) { std::cout << c; }
//	std::cout << '\n';
//	mtx.unlock();
//}
//
//int main()
//{
//	std::thread th1(print_block, 50, '*');
//	std::thread th2(print_block, 50, '$');
//
//	th1.join();
//	th2.join();
//
//	
//	
//
//	std::cin.get();
//
//	return 0;
//}
//
