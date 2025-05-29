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

//class Date
//{
//public:
//    Date(int year = 1900, int month = 1, int day = 1)
//    {
//        _year = year;
//        _month = month;
//        _day = day;
//    }
//    //private:
//    int _year;
//    int _month;
//    int _day;
//};
//
//bool operator==(const Date& d1, const Date& d2)
//{
//    return d1._year == d2._year
//        && d1._month == d2._month
//        && d1._day == d2._day;
//}
//void Test()
//{
//    Date d1(2018, 9, 26);
//    Date d2(2018, 9, 27);
//    cout << (d1 == d2) << endl;   // 控制台输出0，即false
//}
//int main()
//{
//    Test();
//    return 0;
//}

//class Date
//{
//public:
//	Date(int year = 1900, int month = 1, int day = 1)
//    {
//        _year = year;
//        _month = month;
//        _day = day;
//    }
//
//    // bool operator==(Date* this, const Date& d2)
//    // 这里需要注意的是，左操作数是this，指向调用函数的对象
//    bool operator==(const Date & d2)
//    {
//        return _year == d2._year && 
//            _month == d2._month && 
//            _day == d2._day;
//    }
//private:
//    int _year;
//    int _month;
//    int _day;
//};
//
//void Test()
//{
//    Date d1(2018, 9, 26);
//    Date d2(2018, 9, 27);
//    cout << (d1 == d2) << endl;   // 控制台输出0，即false
//}
//int main()
//{
//    Test();
//    return 0;
//}

//// 对于下面三个operator+函数，类外的两个函数因为形参类型顺序不同，可构成重载
//// 而类内部的函数因为与类外处于不同的作用域，因为也可以共存。
//struct MyClass
//{
//	MyClass(int a, int b) : _a{ a }, _b{ b } {};
//	int operator+(int& b)
//	{
//		cout << "类内 int operator+(int& b)被调用" << endl;
//		return b + _a + _b;
//	}
//	int _a;
//	int _b;
//};
//int operator+(int& b, MyClass& a)
//{
//	cout << "类外 int operator+(int& b, MyClass& a)被调用" << endl;
//	return b + a._a +a._b;
//}
//int operator+(MyClass& a, int& b)
//{
//	cout << "类外 int operator+(A& a, int& b)被调用" << endl;
//	return b + a._a + a._b;
//}
//
//int main()
//{
//	MyClass a(1, 2);
//	int b = 3;
//
//	// 对着表达式a + b，编译器可以解析为
//	// operator+(a, b) 或者 MyClass::operate+(b)
//	// 在本示例中，类内外部有两个可精确匹配该表达式的函数
//	// 它们分别是类外部的：int operator+(MyClass& a, int& b)
//	// 以及类内部的：int operator+(int& b)
//	// 这两个函数分别处于不同的作用域，可以本身可共存（编译可过）
//	// 但它们对下面表达式a + b 匹配程度同等（无需对表达式参数进行任何转换）
//	// 因此表达式 a + b 存在二义性，编译不通过。
//	// int c = a + b; // 编译报错：“operator+”不明确
//
//	int c = a.operator+(b);   // 正确，明确调用类内部的+运算符重载函数，其中对象a被隐含取地址作为函数第一个参数this的实参，无二义性
//	int d = operator+(b, a);  // 正确，明确调用类外部的+运算符重载函数，无二义性
//	cout << c << ' ' << d << endl; // 输出：6 6
//
//	// b作为内置类型，第一个参数不是自定义类，在不对b隐式转型的情况，无类成员函数可调用
//	// b + a 表达式，在不隐式转型的情况下，可被解析为：operator+(b, a)
//	// 类外部存在函数：int operator+(int& b, MyClass& a)
//	// 因此表达式 b + a 存在唯一最佳匹配函数，编译器调用类外部函数：int operator+(int& b, MyClass& a)
//	int e = b + a;  // 正确，存在唯一最佳匹配运算符重载函数
//	int f = operator+(a, b);  // 正确，明确调用类外部的运算符重载函数
//	cout << e << ' ' << f << endl; // 输出：6 6
//	return 0;
//}


//struct MyClass
//{
//	MyClass(int a, int b) : _a{ a }, _b{ b } {};
//	MyClass(char a) : _a{ a }, _b{ a } {};
//	
//
//	//operator char()
//	//{
//	//	cout << "类内 operator char()被调用" << endl;
//	//	return _a;
//	//}
//	int operator+(MyClass& b) 
//	{
//		cout << "类内 int operator+(int b)被调用" << endl;
//		return b._a + b._b + _a + _b;
//	}
//	int _a;
//	int _b;
//};
//
//int main()
//{
//	MyClass a(1, 2);
//	char b = 3;
//
//	int c = a + b; 
//	cout << c << endl; 
//
//	return 0;
//}


//class MyInt {
//	int value;
//public:
//	MyInt(int v) : value(v) {  // 转换构造函数：int → MyInt
//		std::cout << "MyInt(int) called\n";
//	}
//
//	int get() const { return value; }
//
//	// 加法运算符，只接受两个 MyInt
//	MyInt operator+(const MyInt& other) const {
//		std::cout << "operator+ called\n";
//		return MyInt(this->value + other.value);
//	}
//};
//
//int main() {
//	MyInt a(10);
//	int b = 5;
//	MyInt result = a + b;  // b 通过（转换）构造函数，从int 被转换为 MyInt(5)
//	std::cout << "result = " << result.get() << "\n";
//}

class MyClass {
	MyClass& operator=(const MyClass& rhs);
};
MyClass& MyClass::operator=(const MyClass& rhs) {
	return *this;
}
int main()
{

	return 0;
}







