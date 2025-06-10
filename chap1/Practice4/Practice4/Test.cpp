#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

//class MyClass
//{
//	int _a;
//public:
//	MyClass(){}
//	MyClass(const MyClass& m):_a(m._a){
//		cout << "调用拷贝构造函数" << endl;
//	}
//	MyClass(int a):_a(a){
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
//	MyClass m5 = 10;
//
//	//MyClass& m6 = 10;
//	const MyClass& m6 = 10;
//	return 0;
//}


//class MyClass
//{
//	int _a;
//	int _b;
//	int _c;
//public:
//	// 除第一个参数无默认值其余均有默认值的构造函数
//	// 该转换构造函数允许将内置int类型，转换为MyClass类型
//	MyClass(int a, int b = 0, int c = 0) // 换成全缺省也行
//		:_a(a), _b(b), _c(c)
//	{
//		cout << "调用普通构造函数" << endl;
//	}
//};
//void foo(const MyClass& m)
//{
//	cout << "foo函数调用成功" << endl;
//}
//int main()
//{
//	// 同理
//	// 调用函数时，传入参数与引用形参的类型不匹配，
//	// 引用形参要求转入一个类对象以供绑定
//	// 编译器将尝试标准转换和用户自定义转换，
//	// 在当前示例中，存在唯一最佳转换路径，即：
//	// 将字面量2通过转换构造函数MyClass(int a, int b = 0, int c = 0)
//	// 转换成MyClass类型的临时量（临时无名对象，具有只读常性）
//	// 再将该临时量，传引用的给形参绑定
//	// 形参是const 修饰的常引用，因此允许绑定这个只读临时对象
//	foo(2);
//
//	// 同理
//	// 如果上面函数是void foo(MyClass& m)，就不行了
//	// 转后后的结果，存储在一个临时变量，因此无法提供给非const引用绑定
//	// 该函数调用，无可用转换路径，调用失败
//	return 0;
//}


//class MyClass
//{
//	int _a;
//public:
//	MyClass() {}
//	// explicit关键字，禁止该构造函数用于隐式类型转换和拷贝初始化
//	explicit MyClass(int a) :_a(a) {
//		cout << "调用转换构造函数" << endl;
//	}
//	explicit MyClass(const MyClass& m) :_a(m._a) {
//		cout << "调用拷贝构造函数" << endl;
//	}
//	// 赋值运算符重载
//	MyClass& operator=(const MyClass& m){
//		_a = m._a;
//		return *this;
//	}
//	// C++11 起，支持类型转换运算符重载函数为explicit
//	// 类型转换运算符重载
//	explicit operator int () {
//		return _a;
//	}
//};
//
//void foo(int a) 
//{
//	cout << "调用void foo(int a)" << endl;
//}
//int main()
//{
//	MyClass m1(10); // 正确，明确调用构造函数
//
//	// MyClass(int a)被明确禁止用于拷贝初始化
//	// MyClass m2 = 10; // 编译错误：C2440：“初始化"：无法从"int"转换为"MyClass"
//
//
//	MyClass m3(m1); // 正确，明确调用构造函数
//	// MyClass(const MyClass& m)被明确禁止用于拷贝初始化
//	// MyClass m4 = m1; //编译错误：C2440“初始化”：无法从“MyClass"转换为"MyClass"
//
//	m1 = MyClass(20); // 正确，右侧显式调用转换构造函数
//	// 转换构造函数具有explicit修饰，禁止用于隐式转换
//	//m1 = 20; // 字面量20无法隐式转换成MyClass类型，赋值失败
//
//	foo(m1.operator int()); // 正确，显式调用转换运算符重载函数
//	// 类型转换函数operator int被explicit修饰，禁止用于隐私转换，调用失败
//	//foo(m1);
//	return 0;
//}

// 
//class MyClass
//{
//	int _a;
//	static int _b; // 类内声明
//	static int _c; // 类内声明
//};
//
//int MyClass::_b;  // 类外定义（不显式提供初始化值，则存储在BBS段，程序启动时为其0值初始化）
//int MyClass::_c = 0;  // 类外定义（显式提供初始化值，则存储在数据段，程序启动时为其加载初始化值）
//int main()
//{
//	return 0;
//}


//class MyClass
//{
//public:
//	int _a;
//	static int _b; // 类内声明
//	static int _c; // 类内声明
//	static int _d; // 类内声明
//};
//
//int MyClass::_b;  // 类外定义（不显式提供初始化值，则存储在BBS段，程序启动时为其0值初始化）
//int MyClass::_c = 10;  // 类外定义（显式提供初始化值，则存储在数据段，程序启动时为其加载初始化值）
//
//// 标准规定，一定要类内声明，类外定义
//// int MyClass::_d; // 如果这里不定义，不会为其分配内存（不会构建该静态对象），程序一旦使用该成员，编译就过不了。
//int main()
//{
//
//	return 0;
//}

//class MyClass
//{
//public: // 为了类外可访问
//	int _a;
//	static int _b; // 类内声明
//	static int _c; // 类内声明
//	static int _d; // 类内声明
//};
//
//int MyClass::_b;  // 类外定义（不显式提供初始化值，则存储在BBS段，程序启动时为其0值初始化）
//int MyClass::_c = 10;  // 类外定义（显式提供初始化值，则存储在数据段，程序启动时为其加载初始化值）
//
//int MyClass::_d;
//int main()
//{
//	// 通过类名调用
//	cout << MyClass::_b  << ' ' << MyClass::_c << ' ' << MyClass::_d << endl;
//	
//	MyClass m1;
//	// 通过对象调用
//	m1._b = 100;
//	cout << m1._b << endl;
//
//	// 通过类指针调用
//	MyClass* p = &m1;
//	p->_d = 200;
//	cout << p->_d << endl;
//
//	return 0;
//}

//class A
//{
//public:
//	// 每次调用构造，都自增一次scount
//	A() { ++_scount; } // 默认构造
//	A(const A& t) { ++_scount; } // 拷贝构造
//
//	// 每次调用析构，销毁对象，都自减一次scout
//	~A() { --_scount; }
//
//	// 获取函数，返回私有权限的静态scout的数值
//	static int GetACount() { return _scount; }
//private:
//	static int _scount;
//};
//// 类外定义
//int A::_scount = 0;
//void TestA()
//{
//	cout << A::GetACount() << endl;
//	A a1, a2;
//	A a3(a1);
//	cout << A::GetACount() << endl;
//}
//
//int main()
//{
//	TestA();
//	return 0;
//}

//
//class A
//{
//public:
//	int _a;
//	int _b;
////private:
//	int _c;
//public:
//	void Print()
//	{
//		cout << _a << ' ' << _b << ' ' << _c << endl;
//	}
//};
//
//int main()
//{
//	A a1 = { 1, 2 ,3 };
//	a1.Print();
//
//	A a2{ 4, 5,6 };
//	a2.Print();
//
//	return 0;
//}

//class A
//{
//	// 友元
//	friend ostream& operator<<(ostream& out, A& a);
//	friend istream& operator>>(istream& cin, A& a);
//	int _a;
//	int _b;
//	int _c;
//public:
//	A(int a = 0, int b = 0, int c = 0)
//	:_a(a), _b(b), _c(c){};
//};
//ostream& operator<<(ostream& out, A& a)
//{
//	cout << a._a << '/' << a._b << '/' << a._c << endl;
//	return out;
//}
//istream& operator>>(istream& cin, A& a)
//{
//	 cin >> a._a >> a._b >> a._c;
//	return cin;
//}
//int main()
//{
//	A a1(1, 2, 3);
//	A a2(4, 5, 6);
//	cout << a1 << a2 << endl;
//	A a3;
//	cin >> a3;
//	cout << a3;
//	return 0;
//}

//class MyClass
//{
//	int _x;
//	int _y;
//public:
//	MyClass(int x = 0, int y = 0)
//		:_x(x), _y(y)
//	{
//		cout << "调用默认构造" << endl;
//	}
//	~MyClass()
//	{
//		cout << "调用析构函数" << endl;
//	}
//
//};
//int main()
//{
//	MyClass m1[3];
//	return 0;
//}
//
//class MyClass
//{
//	int _x;
//	int _y;
//public:
//	MyClass(int x = 0, int y = 0)
//		:_x(x), _y(y)
//	{
//		cout << "调用默认构造" << endl;
//	}
//	~MyClass()
//	{
//		cout << "调用析构函数" << endl;
//	}
//
//};
//int main()
//{
//	MyClass m1[2] = { {1, 2}, {3, 4} }; // 在C++98/03版本，只有当元素类型为数组或者聚合类
//										// 才允许使用花括号聚合初始化，如果是C++98/03，这里是语法错误
//										// 
//										// C++11支持花括号统一初始化，则这里被认为是对元素执行列表初始化（统一初始化），
//										// 花括号内的参数就依次传递给构造函数，用于构造该数组元素
//
//	MyClass m2[2] = { (1, 2), (3, 4) }; // C++98/03版本，聚合初始化内，圆括号内多个逗号分隔的表达式
//										// 被认为是一个逗号表达式，取逗号表达式结果，即2与4，用于构造该元素
//										// 
//										// C++11支持统一初始化，但这里是的圆括号，
//										// 所以依旧认为这是聚合初始化内部的，一个逗号表达式参数
//
//	MyClass m3[2][2] = {                     // 最外层的括号，是对二维数组采用聚合初始化
//						{ {1, 2}, {3, 4} },  // 次外层的括号，是对二位数组的元素，即MyClass [2]类型的数组，进行聚合初始化
//						{{5, 6}, {7, 8} }	 // 最内层的括号，在C++98/03版本，被认为是对聚合初始化，
//						};					 // 所以会因为MyClass不是聚合类型，而导致语法错误
//											 // 
//											 // 在C++11版本起，由于不是m3数组的“标量值”不是聚合类型，
//											 // 因此一维子数组中，提供给标量值的花括号，被认为是使用统一初始化语法
//											 // 将内层花括号的表达式列表，视为传递给构造函数初始化的多个参数。
//	return 0;
//}


//// 时间类
//class Time
//{
//public:
//    Time() {} // 默认构造
//    Time(int hour, int minute, int second) // 普通构造
//        : _hour(hour)
//        , _minute(minute)
//        , _second(second)
//    {}
//    void Print()
//    {
//        cout << "时间：" << _hour << ':' << _minute << ':' << _second << endl;
//    }
//private:
//    // 在类成员声明时，给定一个默认值（C++11）
//    int _hour = 0;
//    int _minute = 0;
//    int _second = 0;
//};
//int main()
//{
//    Time t1; // 调用默认构造，采用给定默认值初始化
//    t1.Print(); // 输出：时间：0:0:0
//
//    Time t2(1, 1, 1); // 给三个参数，调用普通构造
//                      // 普通构造函数有初始化器，且函数体内无赋值行为
//                      // 初始化时成员有初始化器，则采用初始化器提供的值
//    t2.Print(); // 输出：时间：1:1:1
//    return 0;
//}

//class MyClass
//{
//	int _a;
//	int _b;
//public:
//	MyClass() {}
//	// explicit关键字，禁止该构造函数用于隐式类型转换和拷贝初始化
//	explicit MyClass(int a) :_a(a), _b(a) {
//		cout << "调用转换构造函数" << endl;
//	}
//	explicit MyClass(int a, int b) :_a(a), _b(b){
//		cout << "调用多参构造函数" << endl;
//	}
//	// 注意：自定义类型函数形参的初始化，或函数返回的临时对象的初始化
//	// 都属于拷贝初始化，如果拷贝构造为explicit，将不被允许发生。
//	explicit MyClass(const MyClass& m) :_a(m._a) {
//		cout << "调用拷贝构造函数" << endl;
//	}
//	// 赋值运算符重载
//	MyClass& operator=(const MyClass& m) {
//		_a = m._a;
//		_b = m._b;
//		return *this;
//	}
//	// C++11 起，支持类型转换运算符重载函数为explicit
//	// 类型转换运算符重载
//	explicit operator int() {
//		return _a;
//	}
//};
//
//void foo(int a)
//{
//	cout << "调用void foo(int a)" << endl;
//}
//void foo2(MyClass m)
//{
//	cout << "调用void foo2(MyClass m)" << endl;
//}
///*
//MyClass foo3(MyClass& m)
//{
//	cout << "调用MyClass foo3(MyClass& m)" << endl;
//	// 函数传值返回自定义类型，需要创建临时对象进行返回
//	// 这个临时对象的初始化，属于拷贝初始化，而拷贝构造函数为explicit
//	// 其初始化过程等效于：MyClass tmp = obj; 而非直接初始化的 MyClass tmp(obj);
//	// 因此下面的传值返回会因为拷贝构造函数不可用，而编译失败。
//	return m; // 编译错误：C2440：“return"：无法从"MyClass"转换为"MyClass"
//}
//*/
//
//int main()
//{
//	// 函数MyClass(int a)被明确禁止用于拷贝初始化
//	// MyClass m2 = 10; // 编译错误：C2440：“初始化"：无法从"int"转换为"MyClass"
//	MyClass m1(10); // 正确，明确调用构造函数
//
//	// 函数MyClass(const MyClass& m)被明确禁止用于拷贝初始化
//	// MyClass m4 = m1; //编译错误：C2440“初始化”：无法从“MyClass"转换为"MyClass"
//	MyClass m3(m1); // 正确，明确调用构造函数
//
//	// 同理，C11起支持统一初始化，可使用花括号列表初始化，来构造临时右操作数
//	// 而且，编译器优化后，也是可以直接将参数用于构造左操作数的（无需先拷贝构造临时对象）
//	// 但是拷贝初始化本身，是被explicit关键字声明的函数所禁止的
//	// MyClass m5 = { 1, 2 }; // 编译错误：C3445："MyClass”的复制列表初始化不能使用显式构造函数
//	MyClass m4{ 1, 2 }; // 正确，显式调用多参构造函数
//
//	// 转换构造函数具有explicit修饰，禁止用于隐式转换，字面量20无法隐式转换，赋值失败
//	// m1 = 20; // 编译错误：C2679：二元"="：没有找到接受"int类型的右操作数的运算符（或没有可接受的转换）
//	m1 = MyClass(20); // 正确，右侧显式调用转换构造函数
//	
//	// 类型转换函数operator int被explicit修饰，禁止用于隐私转换，调用失败
//	// foo(m1); // 编译错误：C2664："voidfoo（int)”：无法将参数1从"MyClass"转换为"int”
//	foo(m1.operator int()); // 正确，显式调用转换运算符重载函数
//	
//	// 传值调用含有自定义类形参的函数，其形参初始化为拷贝初始化
//	// 上面的拷贝构造函数已经已经被声明为explicit，因此传值调用不被允许
//	//foo2(m1); // 编译错误：C2664：“voidfoo2（MyClass）"：无法将参数1从"MyClass"转换为"MyClass
//
//	return 0;
//}

//class C {
//public:
//    explicit C(int x) {}
//};
//
//C c1(1);    // ✅ 直接初始化，合法
//C c2 = 1;  // ❌ 错误，不能用于拷贝初始化
//
//class D {
//public:
//    int x;
//    D() {};
//    explicit D(const D& x) {}
//};
//void foo1(D d){} // ❌ 语法上ok，但拷贝构造为explicit，实际上无法被调用
//D foo2(D& d)
//{
//    return D; // ❌ 错误，传值返回，临时量的初始化是拷贝初始化
//}
//int mian()
//{
//    D d;
//    foo1(d); // ❌ 错误，函数传值调用是，其形参初始化是拷贝初始化
//    return 0;
//}

//
//class D {
//public:
//    int x;
//    D() {};
//    explicit D(const D& x) {}
//};
//void foo1(D d) {} // ❌ 语法上ok，但拷贝构造为explicit，实际上无法被调用
//D foo2(D& d)
//{
//    return D; // ❌ 错误，传值返回，临时量的初始化是拷贝初始化
//}
//int mian()
//{
//    D d;
//    foo1(d); // ❌ 错误，函数传值调用是，其形参初始化是拷贝初始化
//    return 0;
//}

class Date
{
public:
    // 初始化器列表优先级，比成员指定默认值更高
    Date() :
        _year(0), // 正常
        _month(2.2), // 编译允许，但有警告，会丢失精度
        _day{ 3.3 } // ❌ 编译错误：不允许从 double 窄化为 int（C++11 起）
    {}
private:
    int _year;
    int _month;
    int _day;
    int x = 3.14;  // 编译允许，但有警告，会丢失精度
    int y = { 3.14 };
};
int main()
{
    Date d1;
    return 0;
}
//int main()
//{
//	int arr[3]{ 1, 2, 3.5 };
//	return 0;
//}