#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;


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

// 形惨为引用，在被传值时初始化。
void Swap(int& a, int& b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

int main()
{
	int a = 1;
	int b = 2;

	Swap(a, b);
	printf("%d %d\n", a, b);

	return 0;
}