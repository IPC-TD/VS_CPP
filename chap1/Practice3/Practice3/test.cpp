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

//class Date
//{
//public:
//    Date(int year = 1900, int month = 1, int day = 1)
//    {
//        _year = year;
//        _month = month;
//        _day = day;
//    }
//
//    Date(const Date& d) :
//        _year{ d._year },
//        _month{ d._month },
//        _day{ d._day }
//    {}
//
//    // 传入引用
//    Date& operator=(const Date& d) 
//    {
//        if (this != &d) // 防自赋值
//        {
//            _year = d._year;
//            _month = d._month;
//            _day = d._day;
//        }
//        return *this; // 返回自身引用
//    }
//private:
//    int _year;
//    int _month;
//    int _day;
//};

//class Date
//{
//public:
//    Date(int year = 1900, int month = 1, int day = 1)
//    {
//        _year = year;
//        _month = month;
//        _day = day;
//    }
//
//    Date(const Date& d) :
//        _year{ d._year },
//        _month{ d._month },
//        _day{ d._day }
//    {}
//
//    Date& operator=(const Date& d);
////private:
//    int _year;
//    int _month;
//    int _day;
//};
//
//// 可用在类内声明，类外定义
//Date& Date::operator=(const Date& d)
//{
//    if (this != &d) // 防自赋值
//    {
//        _year = d._year;
//        _month = d._month;
//        _day = d._day;
//    }
//    return *this; // 返回自身引用
//}
//
//// 但不能定义成类作用域外的全局函数
//Date& operator=(Date& d1, const Date& d2)
//{
//    if (&d1 != &d2) // 防自赋值
//    {
//        d1._year = d2._year;
//        d1._month = d2._month;
//        d1._day = d2._day;
//    }
//    return d1; // 返回自身引用
//}

//class Time
//{
//public:
//    Time() :_hour{ 1 }, _minute{ 1 }, _second{ 1 } {}
//
//    Time& operator=(const Time& t)
//    {
//        if (this != &t)
//        {
//            _hour = t._hour;
//            _minute = t._minute;
//            _second = t._second;
//        }
//        return *this;
//    }
//private:
//    int _hour;
//    int _minute;
//    int _second;
//};
//class Date
//{
//private:
//    // 基本类型(内置类型)
//    int _year = 1970;
//    int _month = 1;
//    int _day = 1;
//    // 自定义类型
//    Time _t;
//};
//int main()
//{
//    Date d1;
//    Date d2;
//    d1 = d2; // 调用编译器为Date类生成的默认赋值运算符重载函数
//    return 0;
//}

//#include <iostream>
//#include <assert.h>
//using namespace std;
//
//class Stack
//{
//	int* _arr;
//	int _size;
//	int _capasity;
//public:
//	// 默认构造
//	Stack(int size = 5) :_size{ 0 }, _capasity{ size }
//	{
//		_arr = (int*)malloc(sizeof(int) * _capasity);
//		// 这里还没学“异常”机制，而且cpp不允许无返回值return空
//		// 所以这里还是继续使用assert宏
//		assert(_arr);
//	}
//	// 拷贝构造
//	Stack(const Stack& s)
//		: _arr{s._arr}, 
//		_size{s._size}, 
//		_capasity{s._capasity}
//	{}
//	// 析构
//	~Stack()
//	{
//		free(_arr);
//		_arr = nullptr;
//		_size = 0;
//		_capasity = 0;
//	}
//	// 赋值重载（有申请资源，赋值重载也是要实现的）
//	// 后面学习，当前示例代码，还不会用到，
//};
//
//int main()
//{
//	Stack s1;
//	Stack s2 = s1; // 等效于 Stack s2(s1)
//}



//class MyClass
//{
//	int _a;
//	int _b;
//public:
//	MyClass(int a, int b) : _a{ a }, _b{ b } {}
//	void Print() { cout << _a << " " << _b << endl; }
//	// 前置++
//	MyClass& operator++()
//	{
//		++_a;
//		++_b;
//		return *this;
//	}
//	// 后置++
//	MyClass operator++(int)
//	{
//		MyClass tmp(*this); // 调用默认拷贝构造
//		++_a;
//		++_b;
//		// 函数不返回引用，是因为tmp是临时对象
//		// 函数结束就销毁了
//		return tmp;
//	}
//};
//int main()
//{
//	MyClass s1(1, 2);
//	MyClass s2 = s1++; // 调用默认拷贝构造
//	MyClass s3 = ++s1; // 调用默认拷贝构造
//	s2.Print();  // 输出：1 2
//	s3.Print();  // 输出：3 4
//	return 0;
//}
//class Date
//{
//	int _year;
//	int _month;
//	int _day;
//public:
//	Date(int year = 0, int month = 1, int day = 1)
//		:_year(year)
//		,_month(month)
//		,_day(day)
//	{}
//};
//class Time
//{
//	int _H;
//	int _M;
//	int _S;
//	Date _d;
//public:
//	Time()
//	{
//		_H = 0;
//		_M = 0;
//		_S = 0;
//
//		// 进入函数体内时，_d成员就已经创建了
//		// _d(2025, 1, 1)  // 因此这种写法是不行的
//		// 如果想在函数体内赋值，可用这样
//		Date d(2025, 1, 1); // 创建一个对象
//		// 将对象赋值给成员变量
//		_d = d; // 调用赋值运算符的重载函数（后面马上要学习的内容）
//
//		// 相比于直接在初始化器列表中初始化成员，在函数体内赋值的话
//		// 额外多了一次创建对象的开销（调用构造函数）
//		// 以及额外的一次对象赋值开销（调用默认的赋值运算符重载函数）
//	}
//};
//int main()
//{
//	Time t;
//	return 0;
//}

//class MyClass
//{
//    int _a;
//public:
//    MyClass() {}
//    MyClass(int a) :_a(a) {}
//    void Print()
//    {
//        cout << _a << endl;
//    }
//};
//class Time
//{
//public:
//    Time(int hour = 0, int minute = 0, int second = 0)
//        : _hour(hour)
//        ,_minute(minute)
//        ,_second(second)
//    {}
//    void Print()
//    {
//        cout << _hour << ':' << _minute << ':' << _second << endl;
//    }
//private:
//    int _hour;
//    int _minute;
//    int _second;
//};
//
//class Date
//{
//public:
//    Date() {} // 默认构造函数
//    Date(int y, int m, int d, int h, int M, int s, int arr[2][2])
//        :_year(y)
//        , _month(m)
//        , _day(d)
//        , _t(h, M, s)
//        , _arr{ arr[0][0], arr[0][1], arr[1][0], arr[1][1] }
//    {}
//    void Print()
//    {
//        cout << _year << '-' << _month << '-' << _day << endl;
//        _t.Print();
//        _m.Print();
//        cout << "i = " << _i << endl;
//        for (int* i = &_arr[0][0]; i <= &_arr[1][1]; ++i)
//        {
//            cout << *i << endl;
//        }
//    }
//private:
//    // 内置类型 
//    int _year = 1970;
//    int _month = 1;
//    int _day = 1;
//    int _arr[2][2] = { {1, 2}, {3, 4} };
//    // 自定义类型
//    MyClass _m{ 1 };
//    Time _t{1, 1, 1}; 
//    // 只读const成员
//    const int _i = 0;
//};
//
//int main()
//{
//    Date d1;
//    int arr[][2] = {5, 6, 7, 8};
//    Date d2(2025, 1, 1, 6, 6, 6, arr);
//    d1.Print();
//    d2.Print();
//    return 0;
//}

//// 类中的非静态函数访问非静态函数
//
//class MyClass
//{
//	int _a;
//	int _b;
//public:
//	void Init(int a, int b)
//	{
//		_a = a;
//		_b = b;
//	}
//	void Print1()
//	{
//		Print2();
//	}
//	void Print2()
//	{
//		cout << _a << ' ' << _b << endl;
//	}
//};
//int main()
//{
//	MyClass a;
//	a.Init(1, 2);
//	a.Print1();
//	return 0;
//}

//// 取地址操作符，和cosnt取地址操作符的重载
//
//class MyClass
//{
//	int _a;
//	int _b;
//public:
//	// 如果不写，编译器默认生成的，如果显式定义，则不再生成
//	// 编译器生成的，也是下面这样，所以一般都是不写的
//	// 普通版本（普通对象取地址调用的）
//	MyClass* operator&()
//	{
//		return this;
//	}
//	// cosnt版本（const对象取地址调用的）
//	const MyClass* operator&()const
//	{
//		return this;
//	}
//	void Print()
//	{
//		cout << _a << ' ' << _b << endl;
//	}
//};
//
//int main()
//{
//	MyClass m1;
//	void* pm = &m1;
//
//	*((int*)pm) = 1;
//	*((int*)pm+1) = 2;
//
//	m1.Print();
//	return 0;
//}

//class MyClass
//{
//	int _a;
//	int _b;
//public:
//	MyClass* operator&()
//	{
//		return nullptr; // 不让外部获取地址
//	}
//	const MyClass* operator&()const
//	{
//		return nullptr; // 不让外部获取地址
//	}
//	void Print()
//	{
//		cout << _a << ' ' << _b << endl;
//	}
//};
//int main()
//{
//	MyClass m1;
//	cout << &m1 << endl;
//	return 0;
//}

//
//// 随便定义的类
//class MyClass
//{
//    int _a;
//public:
//    MyClass() {}
//    MyClass(int a) :_a(a) {}
//    void Print()
//    {
//        cout << "MyClass m = " << _a << endl;
//    }
//};
//// 时间类
//class Time
//{
//public:
//    Time(int hour = 0, int minute = 0, int second = 0)
//        : _hour(hour)
//        , _minute(minute)
//        , _second(second)
//    {}
//    void Print()
//    {
//        cout << "时间：" << _hour << ':' << _minute << ':' << _second << endl;
//    }
//private:
//    int _hour;
//    int _minute;
//    int _second;
//};
//// 日期类
//class Date
//{
//public:
//    Date() {} // 默认构造函数
//    Date(int y, int m, int d, int h, int M, int s, int arr[2][2])
//        :_year(y)
//        , _month(m)
//        , _day(d)
//        , _t(h, M, s)
//        , _arr{ arr[0][0], arr[0][1], arr[1][0], arr[1][1] }
//    {}
//
//    // 打印函数（按成员顺序）
//    void Print()
//    {
//        // 日期
//        cout << "日期：" << _year << '-' << _month << '-' << _day << endl;
//        // 两个自定义类数组
//        _t.Print();
//        _m.Print();
//        // 内置类型数组
//        cout << "数组内容：";
//        for (int* i = &_arr[0][0]; i <= &_arr[1][1]; ++i)
//        {
//            cout << *i << ' ';
//        }
//        cout << endl;
//        // const 成员
//        cout << "i = " << _i << endl;
//        cout << endl;
//    }
//private:
//    // 内置类型 
//    int _year = 1970;
//    int _month = 1;
//    int _day = 1;
//    int _arr[2][2] = { {1, 2}, {3, 4} };
//    // 自定义类型
//    Time _t{ 1, 1, 1 };
//    MyClass _m{ 1 };
//    // 只读const成员
//    const int _i = 0;
//};
//
//int main()
//{
//    Date d1;
//    int arr[][2] = { 5, 6, 7, 8 };
//    Date d2(2025, 1, 1, 6, 6, 6, arr);
//    d1.Print();
//    d2.Print();
//    return 0;
//}


//class MyClass {
//	int _a;
//	int _b;
//public:
//	//MyClass(int a = 0, int b = 0)
//	//	:_a(a),_b(b){
//	//	cout << "默认构造被调用" << endl;
//	//}
//	MyClass(int a)
//		:_a(a), _b(a) {
//		cout << "MyClass(int a, int b = 0)构造被调用" << endl;
//	}
//	MyClass(const MyClass& m)
//		:_a(m._a), _b(m._b) {
//		cout << "拷贝构造被调用" << endl;
//	}
//	operator MyClass& () 
//	{
//		cout << "operator const MyClass& () " << endl;
//		return *this;
//	}
//
//	operator MyClass()
//	{
//		cout << "operator MyClass()" << endl;
//		return *this;
//	}
//	// 打印函数
//	void Print()
//	{
//		cout << "void Print()" << endl;
//		//cout << _a << ' ' << _b << endl;
//	}
//	// const版本的打印函数，const是函数签名的一部分
//	// 因此上下两个打印函数，构成重载
//	void Print() const
//	{
//		cout << "void Print() const" << endl;
//		//cout << _a << ' ' << _b << endl;
//	}
//};
//int main()
//{
//	//MyClass m1;
//	//const MyClass m2;
//	//// 根据C++标准
//	//m1.Print(); // 普通对象优先调用非const版本
//	//m2.Print(); // const对象，只能调用const版本
//
//	//// 如果普通成员想调用const 版本的Print，可以这样操作
//	//// 使用const无名拷贝构造调用
//	//(const MyClass(m1)).Print();
//	//// 使用const 引用别名来调用
//	//const MyClass& ref = m1;
//	//ref.Print();
//
//	//((const MyClass&)m1).Print();
//
//	MyClass m1(1);
//	(MyClass)m1;
//	MyClass m2 = (MyClass)m1;
//	m2 = (MyClass)m1;
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//class MyClass {
//	int _a;
//	int _b;
//public:
//	MyClass(int a = 0, int b = 0)
//		:_a(a),_b(b){
//		cout << "默认构造被调用" << endl;
//	}
//	MyClass(const MyClass& m)
//		:_a(m._a), _b(m._b) {
//		cout << "拷贝构造被调用" << endl;
//	}
//	operator MyClass ()
//	{
//		cout << "operator MyClass () " << endl;
//		return *this;
//	}
//	operator const MyClass()
//	{
//		cout << "operator const MyClass()" << endl;
//		return *this;
//	}
//	operator MyClass&()
//	{
//		cout << "operator MyClass&()" << endl;
//		return *this;
//	}
//	operator const MyClass&()
//	{
//		cout << "operator const MyClass&()" << endl;
//		return *this;
//	}
//	// 打印函数
//	void Print()
//	{
//		cout << "void Print()" << endl;
//		//cout << _a << ' ' << _b << endl;
//	}
//	// const版本的打印函数，const是函数签名的一部分
//	// 因此上下两个打印函数，构成重载
//	void Print() const
//	{
//		cout << "void Print() const" << endl;
//		//cout << _a << ' ' << _b << endl;
//	}
//};
//int main()
//{
//	MyClass m1(1);
//
//	(MyClass)m1;
//	(const MyClass)m1;
//
//	(MyClass&)m1;
//	(const MyClass&)m1;
//	return 0;
//}
//

//#include <iostream>
//using namespace std;
//
//class MyClass {
//    int a = 0;
//public:
//    MyClass() = default;
//    MyClass(const MyClass&) = default;
//    // 转换运算符定义
//    operator MyClass() {
//        cout << "operator MyClass() called" << endl;
//        return *this;
//    }
//
//    operator const MyClass() const {
//        cout << "operator const MyClass() called" << endl;
//        return *this;
//    }
//
//    operator MyClass& () {
//        cout << "operator MyClass&() called" << endl;
//        return *this;
//    }
//
//    operator const MyClass& () const {
//        cout << "operator const MyClass&() called" << endl;
//        return *this;
//    }
//    MyClass to_copy() const {
//        return *this; // 明确调用拷贝构造
//    }
//};
//
//int main() {
//    MyClass obj;
//    const MyClass cobj;
//
//    // 测试转换运算符调用
//    cout << "--- Explicit casts ---" << endl;
//    (MyClass)obj;       // 调用拷贝构造函数（非转换运算符）
//    (const MyClass)obj; // 调用拷贝构造函数
//
//    cout << "\n--- Reference casts ---" << endl;
//    (MyClass&)obj;      // 直接绑定（无输出）
//    (const MyClass&)cobj; // 直接绑定（无输出）
//
//    cout << "\n--- Explicit conversion operator call ---" << endl;
//    obj.operator MyClass ();  // 显式调用
//    obj.operator const MyClass ();  // 显式调用
//    obj.operator MyClass& ();  // 显式调用
//    obj.operator const MyClass& ();  // 显式调用
//
//}


//class MyClass
//{
//	int _a;
//public:
//	MyClass() {}
//	MyClass(const MyClass& m) :_a(m._a) {
//		cout << "调用拷贝构造函数" << endl;
//	}
//	MyClass(int a) :_a(a) {
//		cout << "调用普通构造函数" << endl;
//	}
//};
//
//int main()
//{
//	MyClass m1;
//	// 创建方式1
//	MyClass m2(m1);
//	// 创建方式2
//	MyClass m3 = m1;
//
//	cout << endl << "........分割线........." << endl << endl;
//	// 还是这两种方式，是否依旧无区别？
//	MyClass m4(10);
//	const MyClass& m5 = 10;
//
//	const MyClass& m6(10);
//	const MyClass& m7 = 10;
//	return 0;
//}

class MyClass
{
	int _a;
public:
	// 这里的单参数构造函数，具有类型转换作用
	// 允许将内置int类型，转换为MyClass类型
	MyClass(int a) :_a(a) {
		cout << "调用普通构造函数" << endl;
	}
};
void foo(const MyClass& m)
{
	cout << "foo函数调用成功" << endl;
}
int main()
{
	// 调用函数时，传入参数与引用形参的类型不匹配，
	// 引用形参要求转入一个类对象以供绑定
	// 编译器将尝试标准转换和用户自定义转换，
	// 在当前示例中，存在唯一最佳转换路径，即：
	// 将字面量2通过转换构造函数MyClass(int a)
	// 转换成MyClass类型的临时量（临时无名对象，具有只读常性）
	// 再将该临时量，传引用的给形参绑定
	// 形参是const 修饰的常引用，因此允许绑定这个只读临时对象
	foo(2);

	// 如果上面函数是void foo(MyClass& m)，就不行了
	// 转后后的结果，需要存储在一个临时变量（有明确的内存空间）给引用绑定
	// 而临时变量在C++中是常量属性的，因此无法提供给非const引用绑定
	// 该函数调用，无可用转换路径，调用失败
	return 0;
}