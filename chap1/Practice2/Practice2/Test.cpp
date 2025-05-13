#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <cassert>;
////using namespace std;
//
//// Cpp实现栈结构
//struct Stack
//{
//	// 1.函数部分（C++结构体中的成员可以为函数）
//	// 结构体中非静态函数，可以访问本结构体中其他成员（函数，或数据）
//	// 其底层原因是每个函数都隐含的被传递一个名为“This”的结构体变量指针（这个知识放后面讲解）
//	// 注意就和此前的结构体一样，这里讨论的都是非static修饰成员（即非静态成员）
//	void Print()
//	{
//		for (int i = 0; i < _size; ++i)
//		{
//			//cout << _arr[i] << endl;
//			std::printf("%d\n", _arr[i]);
//		}
//	}
//	void Init()
//	{
//		_arr = (int*)malloc(sizeof(int) * 10);
//		assert(_arr);
//		_size = 0;
//		_capacity = 10;
//	}
//	void CheckCapacity()
//	{
//		if (_size == _capacity)
//		{
//			_capacity *= 2;
//		}
//	}
//	void Push(int x)
//	{
//		CheckCapacity();
//		_arr[_size++] = x;
//	}
//	/*
//	Pop();
//	Top():
//	...其他函数
//	*/
//
//
//	// 2.数据部分
//	int* _arr;
//	int _size;
//	int _capacity;
//};

//int main()
//{
//	// 并且C++中的结构体变量定义，无需typedef即可省略关键字
//	Stack s1;
//	// 访问C++中的成员函数，就如同此前访问C中的数据成员一样
//	// 使用点.操作符来访问对应的成员函数
//	// 这里的初始化，不需要传入s1变量的地址，就能初始化s1
//	// （因为C++中会隐含的传入一个（&s1）参数给成员函数，这个放后面讲解）
//	s1.Init();
//
//	Stack s2;
//	Stack* p2 = &s2;
//	p2->Init(); // 同理，也可使用指针+箭头的形式访问结构体的成员函数
//	
//	s1.Push(1);
//	s1.Push(2);
//	s1.Push(3);
//	p2->Push(4);
//	p2->Push(5);
//	p2->Push(6);
//
//	s1.Print();
//	p2->Print();
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//// C++中的类更倾向于使用class关键字来定义
//class Student
//{
//public: // public访问限定符放后面再讲解
//	void Init(char* name, int age, int stuID)
//	{
//		_name = name;
//		_age = age;
//		_stuID = stuID;
//	}
//	char* _name;
//	int _age;
//	int _stuID;
//};
//
//int main()
//{
//	Student s1;
//	char name[] = "小明";
//	s1.Init(name, 18, 1);
//	return 0;
//}

#include <iostream>
using namespace std;

// 如果成员函数中形参名与成员函数名相同，
// 函数内的标识符将被解析为形参标识符。
class Student
{
public: // public访问限定符放后面再讲解
	void Init(char* name, int age, int stuID)
	{
		name = name;
		age = age;
		stuID = stuID;
	}
	char* name;
	int age;
	int stuID;
};

int main()
{
	Student s1;
	char name[] = "小明";
	s1.Init(name, 18, 1);
	return 0;
}