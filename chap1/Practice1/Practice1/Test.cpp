#define _CRT_SECURE_NO_WARNINGS

//#include <iostream>
//using namespace std;


//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int a;
//	double b;
//	char c;
//
//	// 可以自动识别变量的类型
//	cin >> a;
//	cin >> b >> c;
//
//	cout << '\n';
//
//	cout << a << endl; // endl用于换行
//	cout << b << "  " << c << endl; //这里end后是L的小写
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//void Fun(int a = 0)
//{
//	cout << a << endl;
//}
//
//int main()
//{
//	Fun(); // 不传参，函数使用形参的默认值
//	Fun(10); // 传参时，函数使用该实参值
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//void Fun(int a, char b, double c, int d = 10, char e = 's', double f = 30.0)
//{
//	cout << a << endl;
//	cout << b << endl;
//	cout << c << endl;
//	cout << d << endl;
//	cout << e << endl;
//	cout << f << endl;
//}
//
//int main()
//{
//	Fun(1); // 错误，函数有3个未指定缺省值参数，应至少传入3个实参
//
//	Fun(1, 'x', 1.2); // 正确，传入的实参值从左到右，依次赋给形参a, b, c
//
//	Fun(1, 'x', 1.2, 20, , 40.0); // 错误，不允许中间跳过其他参数，必须给形参e传值
//
//	// 不允许中间跳过其他参数，因此传入的每个实参值，都将依次给到对应位置的形参的
//	// 这里传入的后两个参数，与对应位置的形参预期接收类型不符，
//	// 传入的字符'y'和浮点值40.0，将发生隐式类型转换后，传给形参 d 和 e
//	Fun(1, 'x', 1.2, 'y', 40.0); 
//
//	return 0;
//}

//// 函数重载的几种场景
//#include <iostream>
//using namespace std;
//
//// 1、函数参数类型不同
//int Add(int x, int y)
//{
//	cout << "int Add(int x, int y)" << endl;
//	return x + y;
//}
//
//double Add(double x, double y)
//{
//	cout << "double Add(double x, double y)" << endl;
//	return x + y;
//}
//
//// 2、参数个数不同
//void f()
//{
//	cout << "f()" << endl;
//}
//void f(int a)
//{
//	cout << "f(int a)" << endl;
//}
//
//// 3、参数类型顺序不同
//void f(int a, char b)
//{
//	cout << "f(int a,char b)" << endl;
//}
//void f(char b, int a)
//{
//	cout << "f(char b, int a)" << endl;
//}
//
//int main()
//{
//	Add(10, 20);
//	Add(10.1, 20.2);
//
//	f();
//	f(10);
//
//	f(10, 'a');
//	f('a', 10);
//
//	return 0;
//}

//#include <iostream>
//void show(int x, int y = 0)
//{
//	std::cout << 1 << std::endl;
//}
//void show(int x)  // ❌ 冲突，调用 show(10) 时无法确定调用哪一个
//{
//	std::cout << 1 << std::endl;
//}
//int main()
//{
//	show(10); // 编译器时报错：C2668"show"：对重载函数的调用不明确
//	return 0;
//}



//int main()
//{
//	int a = 10;
//	// int& ra;   // 该条语句编译时会出错
//	int& ra = a;
//	int& rra = a;
//	printf("%p  %p  %p\n", &a, &ra, &rra);  // 由于引用同一对象实体a，ra和rra现在和a一样都代表同一块内存空间，所以他们取出的地址是相同的
// 
// return 0;
//}

//int main()
//{
//	int a = 10;
//	int& ra = a;
//	int& rra = a;
//
//	extern int& rrra;
//	printf("%p  %p  %p\n", &a, &ra, &rra);  // 由于引用同一对象实体a，ra和rra现在和a一样都代表同一块内存空间，所以他们取出的地址是相同的
//	return 0;
//}

//int main()
//{
//	const int a = 10;
//	// int& b = a; // 该语句编译时会出错，a为常量
//	const int& b = a; // 正确的引用
//
//	// int& c = 10;  // 该语句编译时会出错，字面量10 为常量
//	const int& c = 10; // 正确的引用
//
//	return 0;
//}

//int main()
//{
//	double a = 1.23;
//	// int& b = a; // 该语句编译时会出错，显示：无法用“double"类型的值初始化“int &" 类型的引用(非常量限定)
//
//	const int& b = a; // b将绑定a类型转换时，产生的int类型临时变量空间。
//	printf("%f %d\n", a, b);
//	// 输出：1.230000 1
//
//	a = 4.56; // 对a的修改，不影响b， 因为a和b指代的对象不同
//	printf("%f %d\n", a, b); 
//	// 输出：4.560000 1
//	return 0;
//}

//int main()
//{
//	const int a = 1;
//	int* p = &a; // 属于权限的扩大，在C++中不允许
//
//	const int* p = &a; // 正确
//	return 0;
//}

//// 形惨为引用，在被传值时初始化。
//void Swap(int& a, int& b)
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//
//int main()
//{
//	int a = 1;
//	int b = 2;
//
//	Swap(a, b);
//	printf("%d %d\n", a, b);
//
//	return 0;
//}


//// 引用和常量指针
//int main()
//{
//	int a = 10;
//	
//	int& ra = a;         // 绑定a对象
//	int* const pa = &a;  // 指向a对象
//	
//	int b = 20;
//	ra = b; // 无法更换绑定对象，这里被解析为向ra绑定的内存空间赋值。
//	// pa = b; // 无法更换指向对象，语法报错
//	printf("%d %d %d\n", a, b, *pa); // 输出新的值：20 20 20
//
//	b = 10;
//	*pa = b; // 修改指向对象的值
//	printf("%d %d %d\n",a, b, *pa); // 输出新值：10 10 10
//
//	return 0;
//}

//int main()
//{
//	const int a = 1;
//
//	// 普通引用和非指向常量的指针，绑定/指向 一个常量对象，属于权限的扩大，在C++中都不允许
//	// int* ra = a; // 语法错误，非const修饰的常量引用，不允许绑定常量对象
//	// int* pa1 = &a; // 语法错误，非cosnt修饰的“指向常量的指针”，不允许指向常量对象
//	// int* const pa2 = &a; // 语法错误，非cosnt修饰的“指向常量的指针”，不允许指向常量对象
//
//	const int ra = a; // 正确，常量引用，绑定常量对象，后续无法更改绑定对象，也无法修改指向对象的值
//	const int* pa1 = &a; // 正确，指向常量的指针，后续可以更换指向对象，但无法更换指向对象的值
//	const int* const pa2 = &a; // 正确，指向常量的常量指针，后续无法更换指向对象，也无法修改指向对象的值
//
//	return 0;
//}

//int main()
//{
//	double a = 1.23;
//	// int& b = a; // 该语句编译时会出错，显示：无法用“double"类型的值初始化“int &" 类型的引用(非常量限定)
//	const int& b = a; // 允许
//
//	float c = 2.34;
//	// int& d = c; // 错误，即使类型大小相同，也是不行的
//	const int& d = c; // 允许
//	return 0;
//}


//// 引用做返回值
//const int& Count1()
//{
//	static int n = 0;
//	n++;
//	return n++; // 表达式返回++前n的临时无名对象
//}
//int& Count2()
//{
//	static int n = 0;
//	n++;
//	return ++n; // 表达式返回对象n本身
//}
//int main()
//{
//	const int& ret1 = Count1(); // 函数返回值为0的临时对象的引用，初始化表达式执行完后，该无名引用名被销毁
//	int& ret2 = Count2(); // 函数返回返回变量n的引用，初始化表达式执行完后，该无名引用名被销毁
//
//	printf("%d %d\n", ret1, ret2); // 预期输出1 2，实际1 2
//	
//	// 思考为什么
//	Count1();
//	printf("%d %d\n", ret1, ret2); // 预期输出 1 2，实际3 2
//
//
//	return 0;
//}

// 指针与引用底层实现一致（调试下看反汇编）
//int main()
//{
//	int a = 10;
//	// 引用
//	int& ra = a;
//	ra = 20;
//	// 指针
//	int* pa = &a;
//	*pa = 20;
//	return 0;
//}


//inline int Add(int a, int b)
//{
//	return a + b;
//}
//int main()
//{
//	int ret = 0;
//	ret = Add(2, 3);
//	return 0;
//}
//int a = 10;
//int& Test1()
//{
//	static int a;
//	return a;
//}
//int& Test2()
//{
//	static int a;
//	extern int g;
//	cout << g << endl;
//	return a;
//}
//int g = 100;
//void Test3();
//struct Student;
//int main()
//{
//	int& b = Test1();
//	int& c = Test2();
//	Student d = {1, 3, 5};
//	Test3();
//	printf("%p %p %p", &a, &b, &c);
//	return 0;
//}
//
//
//struct Student
//{
//	int a;
//	int b;
//	int c;
//};

//根据标准，内联函数必须在每个被使用的翻译单元内可见定义
// 内联函数允许存在多个定义，只要他们在每个翻译单元中定义是相同且唯一的
#include "F.h"
#include <iostream>
using namespace std;
int main()
{
	f(10);
	return 0;
}