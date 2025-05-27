#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdlib.h>

using namespace std;

//class Test
//{
//public:
//	Test(int size = 10)
//	{
//		_arr = (int*)malloc(sizeof(int) * size);
//	}
//	~Test()
//	{
//		static int i = 0;
//		cout << "Test函数第" << ++i << "次被调用" << endl;
//	}
//private:
//	int _a;
//	int _b;
//	int _c;
//	int* _arr;
//};
//
//class Stack
//{
//public:
//	// 默认构造
//	Stack(int initSize = 4)
//	{
//		_arr = (int*)malloc(initSize * sizeof(int));
//		_capasity = initSize;
//		_size = 0;
//	}
//	// 析构
//	~Stack()
//	{
//		free(_arr);
//		_arr = 0;
//		_capasity = 0;
//		_size = 0;
//		_t.~Test();
//		cout << "析构被调用" << endl;
//	}
//	// 扩容
//	// 入栈
//	// 出栈
//private:
//	int* _arr;
//	int _size;
//	int _capasity;
//	Test _t;
//};
//int main()
//{
//	Stack s1;
//	return 0;
//}
//class Test2
//{
//public:
//
//	~Test2()
//	{
//		cout << "Test2析构调用" << endl;
//	}
//
//};
//
//class Test
//{
//public:
//	Test(int size = 10)
//	{
//		_arr = (int*)malloc(sizeof(int) * size);
//	}
//	~Test()
//	{
//		free(_arr);
//		_arr = nullptr;
//		cout << "Test析构调用" << endl;
//	}
//private:
//	int _a;
//	int _b;
//	int _c;
//	int* _arr;
//};
//
//class Stack
//{
//public:
//	// 默认构造
//	Stack(int initSize = 4)
//	{
//		_arr = (int*)malloc(initSize * sizeof(int));
//		_capasity = initSize;
//		_size = 0;
//	}
//	// 析构
//	~Stack()
//	{
//		free(_arr);
//		_arr = 0;
//		_capasity = 0;
//		_size = 0;
//		cout << "Stack析构被调用" << endl;
//	}
//private:
//	int* _arr;
//	int _size;
//	int _capasity;
//	Test _t;
//	Test2 _t2;
//};
//int main()
//{
//	Stack s1;
//	return 0;
//}
class Test3
{
public:
	Test3()
	{
		_arr = (int*)malloc(sizeof(int) * 3);
	}
	~Test3()
	{
		free(_arr);
		_arr = nullptr; // 如果这里没置空，就会因释放两次资源而崩溃
		static int i = 0;
		cout << "Test3析构第" << ++i << "调用" << endl;
	}
private:
	int* _arr;

};
class Test4
{
public:

	~Test4()
	{
		_t3.~Test3();
		cout << "Test4析构调用" << endl;
	}
private:
	Test3 _t3;
};
int main()
{
	Test4 t4;
	return 0;
}
