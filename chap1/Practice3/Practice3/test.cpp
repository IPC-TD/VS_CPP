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
//		cout << "Test������" << ++i << "�α�����" << endl;
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
//	// Ĭ�Ϲ���
//	Stack(int initSize = 4)
//	{
//		_arr = (int*)malloc(initSize * sizeof(int));
//		_capasity = initSize;
//		_size = 0;
//	}
//	// ����
//	~Stack()
//	{
//		free(_arr);
//		_arr = 0;
//		_capasity = 0;
//		_size = 0;
//		_t.~Test();
//		cout << "����������" << endl;
//	}
//	// ����
//	// ��ջ
//	// ��ջ
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
//		cout << "Test2��������" << endl;
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
//		cout << "Test��������" << endl;
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
//	// Ĭ�Ϲ���
//	Stack(int initSize = 4)
//	{
//		_arr = (int*)malloc(initSize * sizeof(int));
//		_capasity = initSize;
//		_size = 0;
//	}
//	// ����
//	~Stack()
//	{
//		free(_arr);
//		_arr = 0;
//		_capasity = 0;
//		_size = 0;
//		cout << "Stack����������" << endl;
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
class Test3
{
public:
	Test3()
	{
		_arr = (int*)malloc(sizeof(int) * 3);
	}
	~Test3()
	{
		free(_arr);
		_arr = nullptr; // �������û�ÿգ��ͻ����ͷ�������Դ������
		static int i = 0;
		cout << "Test3������" << ++i << "����" << endl;
	}
private:
	int* _arr;

};
class Test4
{
public:

	~Test4()
	{
		_t3.~Test3();
		cout << "Test4��������" << endl;
	}
private:
	Test3 _t3;
};
int main()
{
	Test4 t4;
	return 0;
}
