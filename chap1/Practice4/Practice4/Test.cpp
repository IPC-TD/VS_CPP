#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class MyClass
{
	int _a;
public:
	MyClass(){}
	MyClass(const MyClass& m):_a(m._a){
		cout << "调用拷贝构造函数" << endl;
	}
	MyClass(int a):_a(a){
		cout << "调用普通构造函数" << endl;
	}
};

int main()
{
	MyClass m1;
	// 创建方式1
	MyClass m2(m1);
	// 创建方式2
	MyClass m3 = m1;

	cout << endl << "........分割线........." << endl << endl;
	// 还是这两种方式，是否依旧无区别？
	MyClass m4(10);
	MyClass m5 = 10;
	return 0;
}

