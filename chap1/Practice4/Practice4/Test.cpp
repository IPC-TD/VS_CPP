#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

//class MyClass
//{
//	int _a;
//public:
//	MyClass(){}
//	MyClass(const MyClass& m):_a(m._a){
//		cout << "���ÿ������캯��" << endl;
//	}
//	MyClass(int a):_a(a){
//		cout << "������ͨ���캯��" << endl;
//	}
//};
//
//int main()
//{
//	MyClass m1;
//	// ������ʽ1
//	MyClass m2(m1);
//	// ������ʽ2
//	MyClass m3 = m1;
//
//	cout << endl << "........�ָ���........." << endl << endl;
//	// ���������ַ�ʽ���Ƿ�����������
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
//	// ����һ��������Ĭ��ֵ�������Ĭ��ֵ�Ĺ��캯��
//	// ��ת�����캯����������int���ͣ�ת��ΪMyClass����
//	MyClass(int a, int b = 0, int c = 0) // ����ȫȱʡҲ��
//		:_a(a), _b(b), _c(c)
//	{
//		cout << "������ͨ���캯��" << endl;
//	}
//};
//void foo(const MyClass& m)
//{
//	cout << "foo�������óɹ�" << endl;
//}
//int main()
//{
//	// ͬ��
//	// ���ú���ʱ����������������βε����Ͳ�ƥ�䣬
//	// �����β�Ҫ��ת��һ��������Թ���
//	// �����������Ա�׼ת�����û��Զ���ת����
//	// �ڵ�ǰʾ���У�����Ψһ���ת��·��������
//	// ��������2ͨ��ת�����캯��MyClass(int a, int b = 0, int c = 0)
//	// ת����MyClass���͵���ʱ������ʱ�������󣬾���ֻ�����ԣ�
//	// �ٽ�����ʱ���������õĸ��βΰ�
//	// �β���const ���εĳ����ã������������ֻ����ʱ����
//	foo(2);
//
//	// ͬ��
//	// ������溯����void foo(MyClass& m)���Ͳ�����
//	// ת���Ľ�����洢��һ����ʱ����������޷��ṩ����const���ð�
//	// �ú������ã��޿���ת��·��������ʧ��
//	return 0;
//}


//class MyClass
//{
//	int _a;
//public:
//	MyClass() {}
//	// explicit�ؼ��֣���ֹ�ù��캯��������ʽ����ת���Ϳ�����ʼ��
//	explicit MyClass(int a) :_a(a) {
//		cout << "����ת�����캯��" << endl;
//	}
//	explicit MyClass(const MyClass& m) :_a(m._a) {
//		cout << "���ÿ������캯��" << endl;
//	}
//	// ��ֵ���������
//	MyClass& operator=(const MyClass& m){
//		_a = m._a;
//		return *this;
//	}
//	// C++11 ��֧������ת����������غ���Ϊexplicit
//	// ����ת�����������
//	explicit operator int () {
//		return _a;
//	}
//};
//
//void foo(int a) 
//{
//	cout << "����void foo(int a)" << endl;
//}
//int main()
//{
//	MyClass m1(10); // ��ȷ����ȷ���ù��캯��
//
//	// MyClass(int a)����ȷ��ֹ���ڿ�����ʼ��
//	// MyClass m2 = 10; // �������C2440������ʼ��"���޷���"int"ת��Ϊ"MyClass"
//
//
//	MyClass m3(m1); // ��ȷ����ȷ���ù��캯��
//	// MyClass(const MyClass& m)����ȷ��ֹ���ڿ�����ʼ��
//	// MyClass m4 = m1; //�������C2440����ʼ�������޷��ӡ�MyClass"ת��Ϊ"MyClass"
//
//	m1 = MyClass(20); // ��ȷ���Ҳ���ʽ����ת�����캯��
//	// ת�����캯������explicit���Σ���ֹ������ʽת��
//	//m1 = 20; // ������20�޷���ʽת����MyClass���ͣ���ֵʧ��
//
//	foo(m1.operator int()); // ��ȷ����ʽ����ת����������غ���
//	// ����ת������operator int��explicit���Σ���ֹ������˽ת��������ʧ��
//	//foo(m1);
//	return 0;
//}

// 
//class MyClass
//{
//	int _a;
//	static int _b; // ��������
//	static int _c; // ��������
//};
//
//int MyClass::_b;  // ���ⶨ�壨����ʽ�ṩ��ʼ��ֵ����洢��BBS�Σ���������ʱΪ��0ֵ��ʼ����
//int MyClass::_c = 0;  // ���ⶨ�壨��ʽ�ṩ��ʼ��ֵ����洢�����ݶΣ���������ʱΪ����س�ʼ��ֵ��
//int main()
//{
//	return 0;
//}


//class MyClass
//{
//public:
//	int _a;
//	static int _b; // ��������
//	static int _c; // ��������
//	static int _d; // ��������
//};
//
//int MyClass::_b;  // ���ⶨ�壨����ʽ�ṩ��ʼ��ֵ����洢��BBS�Σ���������ʱΪ��0ֵ��ʼ����
//int MyClass::_c = 10;  // ���ⶨ�壨��ʽ�ṩ��ʼ��ֵ����洢�����ݶΣ���������ʱΪ����س�ʼ��ֵ��
//
//// ��׼�涨��һ��Ҫ�������������ⶨ��
//// int MyClass::_d; // ������ﲻ���壬����Ϊ������ڴ棨���ṹ���þ�̬���󣩣�����һ��ʹ�øó�Ա������͹����ˡ�
//int main()
//{
//
//	return 0;
//}

//class MyClass
//{
//public: // Ϊ������ɷ���
//	int _a;
//	static int _b; // ��������
//	static int _c; // ��������
//	static int _d; // ��������
//};
//
//int MyClass::_b;  // ���ⶨ�壨����ʽ�ṩ��ʼ��ֵ����洢��BBS�Σ���������ʱΪ��0ֵ��ʼ����
//int MyClass::_c = 10;  // ���ⶨ�壨��ʽ�ṩ��ʼ��ֵ����洢�����ݶΣ���������ʱΪ����س�ʼ��ֵ��
//
//int MyClass::_d;
//int main()
//{
//	// ͨ����������
//	cout << MyClass::_b  << ' ' << MyClass::_c << ' ' << MyClass::_d << endl;
//	
//	MyClass m1;
//	// ͨ���������
//	m1._b = 100;
//	cout << m1._b << endl;
//
//	// ͨ����ָ�����
//	MyClass* p = &m1;
//	p->_d = 200;
//	cout << p->_d << endl;
//
//	return 0;
//}

//class A
//{
//public:
//	// ÿ�ε��ù��죬������һ��scount
//	A() { ++_scount; } // Ĭ�Ϲ���
//	A(const A& t) { ++_scount; } // ��������
//
//	// ÿ�ε������������ٶ��󣬶��Լ�һ��scout
//	~A() { --_scount; }
//
//	// ��ȡ����������˽��Ȩ�޵ľ�̬scout����ֵ
//	static int GetACount() { return _scount; }
//private:
//	static int _scount;
//};
//// ���ⶨ��
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
	// ��Ԫ
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