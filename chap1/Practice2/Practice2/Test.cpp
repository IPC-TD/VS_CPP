#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <cassert>;
////using namespace std;
//
//// Cppʵ��ջ�ṹ
//struct Stack
//{
//	// 1.�������֣�C++�ṹ���еĳ�Ա����Ϊ������
//	// �ṹ���зǾ�̬���������Է��ʱ��ṹ����������Ա�������������ݣ�
//	// ��ײ�ԭ����ÿ�������������ı�����һ����Ϊ��This���Ľṹ�����ָ�루���֪ʶ�ź��潲�⣩
//	// ע��ͺʹ�ǰ�Ľṹ��һ�����������۵Ķ��Ƿ�static���γ�Ա�����Ǿ�̬��Ա��
//	void Print()
//	{
//		for (int i = 0; i < _size; ++i)
//		{
//			//cout << _arr[i] << endl;
//			std::printf("%d\n", _arr[i]);
//		}
//	}
//	void Init()
//	{
//		_arr = (int*)malloc(sizeof(int) * 10);
//		assert(_arr);
//		_size = 0;
//		_capacity = 10;
//	}
//	void CheckCapacity()
//	{
//		if (_size == _capacity)
//		{
//			_capacity *= 2;
//		}
//	}
//	void Push(int x)
//	{
//		CheckCapacity();
//		_arr[_size++] = x;
//	}
//	/*
//	Pop();
//	Top():
//	...��������
//	*/
//
//
//	// 2.���ݲ���
//	int* _arr;
//	int _size;
//	int _capacity;
//};

//int main()
//{
//	// ����C++�еĽṹ��������壬����typedef����ʡ�Թؼ���
//	Stack s1;
//	// ����C++�еĳ�Ա����������ͬ��ǰ����C�е����ݳ�Աһ��
//	// ʹ�õ�.�����������ʶ�Ӧ�ĳ�Ա����
//	// ����ĳ�ʼ��������Ҫ����s1�����ĵ�ַ�����ܳ�ʼ��s1
//	// ����ΪC++�л������Ĵ���һ����&s1����������Ա����������ź��潲�⣩
//	s1.Init();
//
//	Stack s2;
//	Stack* p2 = &s2;
//	p2->Init(); // ͬ��Ҳ��ʹ��ָ��+��ͷ����ʽ���ʽṹ��ĳ�Ա����
//	
//	s1.Push(1);
//	s1.Push(2);
//	s1.Push(3);
//	p2->Push(4);
//	p2->Push(5);
//	p2->Push(6);
//
//	s1.Print();
//	p2->Print();
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//// C++�е����������ʹ��class�ؼ���������
//class Student
//{
//public: // public�����޶����ź����ٽ���
//	void Init(char* name, int age, int stuID)
//	{
//		_name = name;
//		_age = age;
//		_stuID = stuID;
//	}
//	char* _name;
//	int _age;
//	int _stuID;
//};
//
//int main()
//{
//	Student s1;
//	char name[] = "С��";
//	s1.Init(name, 18, 1);
//	return 0;
//}

#include <iostream>
using namespace std;

// �����Ա�������β������Ա��������ͬ��
// �����ڵı�ʶ����������Ϊ�βα�ʶ����
class Student
{
public: // public�����޶����ź����ٽ���
	void Init(char* name, int age, int stuID)
	{
		name = name;
		age = age;
		stuID = stuID;
	}
	char* name;
	int age;
	int stuID;
};

int main()
{
	Student s1;
	char name[] = "С��";
	s1.Init(name, 18, 1);
	return 0;
}