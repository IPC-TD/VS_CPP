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
//class Test3
//{
//public:
//	Test3()
//	{
//		_arr = (int*)malloc(sizeof(int) * 3);
//	}
//	~Test3()
//	{
//		free(_arr);
//		_arr = nullptr; // 如果这里没置空，就会因释放两次资源而崩溃
//		static int i = 0;
//		cout << "Test3析构第" << ++i << "调用" << endl;
//	}
//private:
//	int* _arr;
//
//};
//class Test4
//{
//public:
//
//	~Test4()
//	{
//		_t3.~Test3();
//		cout << "Test4析构调用" << endl;
//	}
//private:
//	Test3 _t3;
//};
//int main()
//{
//	Test4 t4;
//	return 0;
//}

//class Date
//{
//public:
//    Date(int year = 1900, int month = 1, int day = 1)
//    {
//        _year = year;
//        _month = month;
//        _day = day;
//    }
//    // Date(const Date d)  // 错误写法，编译报错：C2652“Date”：非法的复制构造函数：第一个参数不应是"Date"
//    Date(const Date& d)   // 正确写法
//    {
//        _year = d._year;
//        _month = d._month;
//        _day = d._day;
//    }
//private:
//    int _year;
//    int _month;
//    int _day;
//};
//int main()
//{
//    Date d1;
//    Date d2(d1);
//    return 0;
//}

//class A
//{
//public:
//	A(int a, int b, int* arr)
//	{
//		_a = a;
//		_b = b;
//		_c = arr;
//	}
//	void Print()
//	{
//		cout << "_a = " << _a << endl;
//		cout << "_b = " << _b << endl;
//		cout << "&_c = " << _c << endl;
//	}
//	void Test(int value)
//	{
//		*_c = value;
//	}
//private:
//	int _a = 0;
//	int _b = 0;
//	int* _c = nullptr;
//};
//
//int main()
//{
//	int c = 3;
//	A a1(1, 2, &c);
//	A a2 = a1;  // 会调用默认拷贝构造
//	a1.Print();
//	a2.Print();
//
//	return 0;
//}

//class A
//{
//public:
//	A(){} // 这里要给个默认构造
//
//	A(const A&) // 无名形参
//	{
//		cout << "A拷贝构造函数被调用" << endl;
//	}
//private:
//	int _a;
//};
//class B
//{
//public:
//	B() {} // 这里要给个默认构造，
//
//	// 无显式拷贝构造，由编译器默认生成
//	// 自己实现，则编译器不再生成
//	B(const B& b)
//		: _classA(b._classA),_b(b._b) // 使用b对象成员值传递给初始化器进初始化
//	{
//		_classA = b._classA; // 这里是赋值运算符的重载(后面学）
//		_b = b._b; // 这里是赋值
//	}
//private:
//	A _classA;
//	int _b;
//};
//
//int main()
//{
//	B b1;
//	B b2(b1); // 等效于 B b2 = b1;
//	return 0;
//}

//class MyClass {
//public:
//	MyClass() {};
//	// MyClass(int x) : member{ x } // ❌ 错误：声明中不能写初始化器列表
//	MyClass(int x); // 正确，函数声明（而且要注意类中函数只能有一个声明或者定义）
//	
//private:
//	int member;
//};
//// 类外定义：
//// MyClass::
//MyClass::MyClass(int x) : member{ x } {};  // 正确，完整的函数定义
//int main()
//{
//	return 0;
//}

//struct MyClass1 {
//    void foo();         // 声明
//    void foo() { }      // 错误！重复定义
//    int x;
//};
//struct MyClass2 {
//    void foo();   // 声明
//    void foo();   // 重复声明
//    int x;
//};
//void MyClass2::foo() { } // 类外定义
//int main()
//{
//    return 0;
//}

//// 初始化器列表，可以使用构造函数的形参列表中的形参
//class A
//{
//public:
//	A(int a = 0, int b = 0, int c = 0) // 构造函数A的声明（签名）部分
//		: _a(a), _b(b), _c(c)  // 初始化器列表
//	{
//		// A的构造函数体
//	}
//	void Print()
//	{
//		cout << _a << ' ' << _b << ' ' << _c;
//	}
//private:
//	int _a;
//	int _b;
//	int _c;
//};
//int main()
//{
//	A a1(1, 2, 3);
//	a1.Print();
//	return 0;
//}



//class A
//{
//public:
//	A(): 
//		_a(0), 
//		_b(0), 
//		_c(0,2)  // 语法错误
//	{
//		// A的构造函数体
//	}
//	void Print()
//	{
//		cout << _a << ' ' << _b << ' ' << _c;
//	}
//private:
//	int _a;
//	int _b;
//	int _c;
//};
//int main()
//{
//	A a1;
//	a1.Print();
//	return 0;
//}


//class A
//{
//public:
//	// 默认构造
//	A(int a = 0, int b = 0,int c = 0)
//		:_a{a}, _b{b}, _c{c}
//	{
//		cout << "A(int a = 0, int b = 0,int c = 0) ： this = " << this << endl;
//	}
//	// 拷贝构造
//	A(const A& a)
//		: _a{ a._a }, _b{ a._b }, _c{ a._c } 
//	{
//		cout << "A(const A& a) ：this = " << this << endl;
//	}; 
//	~A()
//	{
//		cout << "~A() ： this = " << this << endl;
//	}
//private:
//	int _a;
//	int _b;
//	int _c;
//};
//A Test1(A a)
//{
//	return a;
//}
//A& Test2(A& a)
//{
//	return a;
//}
//int main()
//{
//	A a1;
//	A a2 = a1; // 等效于 A a2(a1);
//	Test1(a1);
//	Test2(a1);
//}

struct MyClass
{
	MyClass(int a, int b) : _a{ a }, _b{ b } {};
	int operator+(int& b)
	{
		cout << "类内 int operator+(int& b)被调用" << endl;
		return b + _a + _b;
	}
	int _a;
	int _b;
};
//int operator+(int& b, MyClass& a)
//{
//	cout << "类外 int operator+(int& b, MyClass& a)被调用" << endl;
//	return b + a._a +a._b;
//}
int operator+(MyClass& a, int& b)
{
	cout << "类外 int operator+(A& a, int& b)被调用" << endl;
	return b + a._a + a._b;
}
int main()
{
	MyClass a(1, 2);
	int b = 3;

	//int c = b + a;    // += 运算符重载
	//int d = operator+(b, a);
	//cout << c << ' ' << d << endl;

	//int e = a + b;    // += 运算符重载
	//int f = operator+(a, b);
	//cout << e << ' ' << f << endl;
	return 0;
}