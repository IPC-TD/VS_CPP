#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class MyClass
{
	int _a;
public:
	MyClass(){}
	MyClass(const MyClass& m):_a(m._a){
		cout << "���ÿ������캯��" << endl;
	}
	MyClass(int a):_a(a){
		cout << "������ͨ���캯��" << endl;
	}
};

int main()
{
	MyClass m1;
	// ������ʽ1
	MyClass m2(m1);
	// ������ʽ2
	MyClass m3 = m1;

	cout << endl << "........�ָ���........." << endl << endl;
	// ���������ַ�ʽ���Ƿ�����������
	MyClass m4(10);
	MyClass m5 = 10;
	return 0;
}

