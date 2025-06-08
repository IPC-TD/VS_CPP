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

class A
{
	// 友元
	friend ostream& operator<<(ostream& out, A& a);
	friend istream& operator>>(istream& cin, A& a);
	int _a;
	int _b;
	int _c;
public:
	A(int a = 0, int b = 0, int c = 0)
	:_a(a), _b(b), _c(c){};
};
ostream& operator<<(ostream& out, A& a)
{
	cout << a._a << '/' << a._b << '/' << a._c << endl;
	return out;
}
istream& operator>>(istream& cin, A& a)
{
	 cin >> a._a >> a._b >> a._c;
	return cin;
}
int main()
{
	A a1(1, 2, 3);
	A a2(4, 5, 6);
	cout << a1 << a2 << endl;
	A a3;
	cin >> a3;
	cout << a3;
	return 0;
}