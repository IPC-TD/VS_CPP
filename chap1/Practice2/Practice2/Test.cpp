#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <cassert>;
////using namespace std;
//
//// Cpp实现栈结构
//struct Stack
//{
//	// 1.函数部分（C++结构体中的成员可以为函数）
//	// 结构体中非静态函数，可以访问本结构体中其他成员（函数，或数据）
//	// 其底层原因是每个函数都隐含的被传递一个名为“This”的结构体变量指针（这个知识放后面讲解）
//	// 注意就和此前的结构体一样，这里讨论的都是非static修饰成员（即非静态成员）
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
//	...其他函数
//	*/
//
//
//	// 2.数据部分
//	int* _arr;
//	int _size;
//	int _capacity;
//};

//int main()
//{
//	// 并且C++中的结构体变量定义，无需typedef即可省略关键字
//	Stack s1;
//	// 访问C++中的成员函数，就如同此前访问C中的数据成员一样
//	// 使用点.操作符来访问对应的成员函数
//	// 这里的初始化，不需要传入s1变量的地址，就能初始化s1
//	// （因为C++中会隐含的传入一个（&s1）参数给成员函数，这个放后面讲解）
//	s1.Init();
//
//	Stack s2;
//	Stack* p2 = &s2;
//	p2->Init(); // 同理，也可使用指针+箭头的形式访问结构体的成员函数
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
//// C++中的类更倾向于使用class关键字来定义
//class Student
//{
//public: // public访问限定符放后面再讲解
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
//	char name[] = "小明";
//	s1.Init(name, 18, 1);
//	return 0;
//}

//#include <iostream>
//using namespace std;

// 成员函数中形参名与成员变量名相同情况
//class Student
//{
//public: // public访问限定符放后面再讲解
//	void Init(char* name, int age, int stuID)
//	{
//		// 函数内的形参，优先级高于类成员变量
//		// 名字相同时，优先被解析为形参
//		name = name;
//		age = age;
//		stuID = stuID;
//	}
//	char* name;
//	int age;
//	int stuID;
//};

//// 建议进行前后缀的修饰，以进行区分，这里以前缀下划线举例：
//class Student
//{
//public: // public访问限定符放后面再讲解
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
//	char name[] = "小明";
//	s1.Init(name, 18, 1);
//	return 0;
//}

//class Student
//{
//public:
//private:
//	// 类中只提供函数声明
//	void Init(char* name, int age, int stuID);
//private:
//	char* _name;
//	int _age;
//	int _stuID;
//};
//// 在类的外部定义函数
//// 注意类成员存在于类作用域中，在外部进行定义时，需要使用：
//// 类名+作用域解析符来指定属于哪个成员
//void Student::Init(char* name, int age, int stuID)
//{
//	_name = name;
//	_age = age;
//	_stuID = stuID;
//}
//
//// 只能对类中已有的成员进行定义，类被定义完成的一刻即成员就已经固定
//// 无法在后续新增类成员，这点和命名空间不同。
//void Student::Init2(char* name, int age, int stuID)
//{
//	_name = name;
//	_age = age;
//	_stuID = stuID;
//}

//class Person
//{
//public:
//	// 显示基本信息
//	void showlnfo()
//	{
//		cout << _name << endl;
//		cout << _sex << endl;
//		cout << _age << endl;
//	}
//public:
//	char* _name; // 姓名
//	char* _sex;//性别
//	int _age;//年龄
//};
//int main()
//{
//	Person._age = 100;   // 编译失败：error C2059: 语法错误:“.”
//	return 0;
//}
//// 类只是个用于创建对象的类型（模板），在语法层面上面是没有内存空间的，无法存储数据
//// 实际上类位于代码区

//// 类中既有成员变量，又有成员函数
//class A1 {
//public:
//	void f1() {}
//private:
//	int _a;
//};
//
//// 类中仅有成员函数
//class A2 {
//public:
//	void f2() {}
//};
//
//// 类中什么都没有---空类
//class A3
//{};
//
//int main()
//{
//	cout << sizeof(A1) << endl;
//	cout << sizeof(A2) << endl;
//	cout << sizeof(A3) << endl;
//
//	return 0;
//}

//class Date
//{
//public:
//	void Init(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	void Print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//private:
//	int _year;     // 年
//	int _month;    // 月
//	int _day;      // 日
//};
//int main()
//{
//	Date d1, d2;
//	d1.Init(2022, 1, 11);
//	d2.Init(2022, 1, 12);
//	d1.Print();
//	d2.Print();
//	return 0;
//}


//class Date
//{
//public:
//	void Init(/* Date* this, */  int year, int month, int day) //this指针如同注释一般，隐含在第一个形参
//	{
//		// 函数体中，允许显式使用this指针指向类成员，效果一样。
//		this->_year = year;
//		this->_month = month;
//		this->_day = day;
//	}
//private:
//	int _year;     // 年
//	int _month;    // 月
//	int _day;      // 日
//};
//int main()
//{
//	Date d1, d2;
//	// 每个函数调用的第一个参数，都是隐含传入的对象地址
//	d1.Init(2025, 1, 1);
//	d2.Init(2025, 1, 2);
//	return 0;
//}

//#include <iostream>
//using namespace std;

//// 注意
//// 1.下面程序编译运行结果是？  A、编译报错  B、运行崩溃  C、正常运行
//class A1
//{
//public:
//    void Print()
//    {
//        cout << "Print()" << endl;
//    }
//private:
//    int _a;
//};
//
//int main()
//{
//    A1* p = nullptr;
//    p->Print();
//    return 0;
//}
//
//// 1.下面程序编译运行结果是？  A、编译报错  B、运行崩溃  C、正常运行
//class A2
//{
//public:
//    void Print()
//    {
//        cout << _a << endl;
//    }
//private:
//    int _a;
//};
//
//int main()
//{
//    A2* p = nullptr;
//    p->Print();
//    return 0;
//}


//class A
//{
//public:
//    void Print1()
//    {
//        cout << "Print()" << endl;
//    }
//private:
//    int _a;
//};
//
//int main()
//{
//    A* p = nullptr; // 这里的A类，别解析为下面定义的A类
//    p->Print1(); //所以 这里会提示：类"A"没有成员"Print"
//    return 0;
//}
//
//class A
//{
//public:
//    void Print2()
//    {
//        cout << _a << endl;
//    }
//private:
//    int _a;
//};



//#include <iostream>
//#include <assert.h>
//using namespace std;
//// C
//typedef int DataType;
//typedef struct Stack
//{
//	DataType* array;
//	int capacity;
//	int size;
//}Stack;
//void StackInit(Stack* ps)
//{
//	assert(ps);
//	ps->array = (DataType*)malloc(sizeof(DataType) * 3);
//	if (NULL == ps->array)
//	{
//		assert(0);
//		return;
//	}
//	ps->capacity = 3;
//	ps->size = 0;
//}
//void StackDestroy(Stack* ps)
//{
//	assert(ps);
//	if (ps->array)
//	{
//		free(ps->array);
//		ps->array = NULL;
//		ps->capacity = 0;
//		ps->size = 0;
//	}
//}
//void CheckCapacity(Stack* ps)
//{
//	if (ps->size == ps->capacity)
//	{
//		int newcapacity = ps->capacity * 2;
//		DataType* temp = (DataType*)realloc(ps->array,
//			newcapacity * sizeof(DataType));
//		if (temp == NULL)
//		{
//			perror("realloc申请空间失败!!!");
//			return;
//		}
//		ps->array = temp;
//		ps->capacity = newcapacity;
//	}
//}
//void StackPush(Stack* ps, DataType data)
//{
//	assert(ps);
//	CheckCapacity(ps);
//	ps->array[ps->size] = data;
//	ps->size++;
//}
//int StackEmpty(Stack* ps)
//{
//	assert(ps);
//	return 0 == ps->size;
//}
//void StackPop(Stack* ps)
//{
//	if (StackEmpty(ps))
//		return;
//	ps->size--;
//}
//DataType StackTop(Stack* ps)
//{
//	assert(!StackEmpty(ps));
//	return ps->array[ps->size - 1];
//}
//int StackSize(Stack* ps)
//{
//	assert(ps);
//	return ps->size;
//}
//int main()
//{
//	Stack s;
//	StackInit(&s);
//	StackPush(&s, 1);
//	StackPush(&s, 2);
//	StackPush(&s, 3);
//	StackPush(&s, 4);
//	printf("%d\n", StackTop(&s));
//	printf("%d\n", StackSize(&s));
//	StackPop(&s);
//	StackPop(&s);
//	printf("%d\n", StackTop(&s));
//	printf("%d\n", StackSize(&s));
//	StackDestroy(&s);
//	return 0;
//}

//// C++
//typedef int DataType;
//class Stack
//{
//public:
//	void Init()
//	{
//		_array = (DataType*)malloc(sizeof(DataType) * 3);
//		if (NULL == _array)
//		{
//			perror("malloc申请空间失败!!!");
//			return;
//		}
//		_capacity = 3;
//		_size = 0;
//	}
//	void Push(DataType data)
//	{
//		CheckCapacity();
//		_array[_size] = data;
//		_size++;
//	}
//	void Pop()
//	{
//		if (Empty())
//			return;
//		_size--;
//	}
//	DataType Top() { return _array[_size - 1]; }
//	int Empty() { return 0 == _size; }
//	int Size() { return _size; }
//	void Destroy()
//	{
//		if (_array)
//		{
//			free(_array);
//			_array = NULL;
//			_capacity = 0;
//			_size = 0;
//		}
//	}
//private:
//	void CheckCapacity()
//	{
//		if (_size == _capacity)
//		{
//			int newcapacity = _capacity * 2;
//			DataType* temp = (DataType*)realloc(_array, newcapacity *
//				sizeof(DataType));
//			if (temp == NULL)
//			{
//				perror("realloc申请空间失败!!!");
//				return;
//			}
//			_array = temp;
//			_capacity = newcapacity;
//		}
//	}
//private:
//	DataType* _array;
//	int _capacity;
//	int _size;
//};
//int main()
//{
//	Stack s;
//	s.Init();
//	s.Push(1);
//	s.Push(2);
//	s.Push(3);
//	s.Push(4);
//
//	printf("%d\n", s.Top());
//	printf("%d\n", s.Size());
//	s.Pop();
//	s.Pop();
//	printf("%d\n", s.Top());
//	printf("%d\n", s.Size());
//	s.Destroy();
//	return 0;
//}

//#include <iostream>
//using namespace std;

//class Date
//{
//public:
//	void Init(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	void Print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date d1;
//	d1.Init(2022, 7, 5);
//	d1.Print();
//	Date d2;
//	d2.Init(2022, 7, 6);
//	d2.Print();
//	return 0;
//}


//class Date
//{
//public:
//	Date() // 无参构造函数
//	{
//		_year = 0;
//		_month = 0;
//		_day = 0;
//	}
//	Date(int year, int month, int day = 0) // 有参数构造函数
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//public:
//	void Print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1; // 会调用无参构造函数
//	Date d2(2025, 1, 1); // 会调用有参构造函数
//	d1.Print();
//	d2.Print();
//	Date d3();
//	return 0;
//}


//class Date
//{
//private: // 私有权限
//	Date() // 无参构造函数（私有成员）
//	{
//		_year = 0;
//		_month = 0;
//		_day = 0;
//	}
//	Date(int year , int month = 1, int day = 1) // 半缺省构造函数（私有成员）
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//public:
//	void Print() { cout << _year << "-" << _month << "-" << _day << endl; }
//private:
//	int _year, _month, _day;
//};
//int main()
//{
//	Date d1; // 编译错误❌，无法在类的外部访问私有的无参构造函数成员
//	Date d2(2025); // 同理，编译错误，无法访问私有的成员
//	return 0;
//}



//class Time {
//public:
//    int hour = 0;
//    int minute = 0;
//
//    Time() {
//        std::cout << "Time default constructor called" << std::endl;
//    }
//};
//class Date {
//    Time t1;
//
//public:
//    Date() : t1() {  // 显式调用 t1 的默认构造函数
//        std::cout << "Date constructor called" << std::endl;
//    }
//};
//


//class Time
//{
//public:
//    Time(int hour = 1, int minute = 1, int second = 1)
//    {
//        _hour = hour;
//        _minute = minute;
//        _second = second;
//    }
//private:
//    int _hour;
//    int _minute;
//    int _second;
//};
//class Date
//{
//public:
//    Date()
//        : _year(0), _month(0), _day(0), _arr{ 1, 2 },
//        _t1(0, 0, 0), _t2(0, 0, 0), _t3(0, 0, 0), _t4(0, 0, 0), _t5(0, 0, 0),
//        _t6{ {0, 0, 0} , {0, 0, 0} , {0, 0, 0} }
//    {}
//
//private:
//    int _year;
//    int _month;
//    int _day;
//    int _arr[2];
//    Time _t1;
//    Time _t2;
//    Time _t3;
//    Time _t4;
//    Time _t5;
//    Time _t6[3];
//};
//
//int main()
//{
//    Date d;
//    return 0;
//}

//class B {
//public:
//    B() {
//        static int count = 0;
//        std::cout << "B() 构造函数被调用" << ++count << "次" << std::endl;
//    }
//};
//
//class A {
//public:
//    A() {
//        std::cout << "A() 构造函数被调用" << std::endl;
//    }
//
//private:
//    B arr[3]; // B 类型的数组成员
//    B b;
//};
//
//int main()
//{
//    A a;
//    return 0;
//}


//class Time
//{
//public:
//    Time(int hour = 1, int minute = 1, int second = 1)
//    {
//        _hour = hour;
//        _minute = minute;
//        _second = second;
//    }
//private:
//    int _hour;
//    int _minute;
//    int _second;
//};
//class Date
//{
//public:
//    Date(): _t1(0, 0, 0){} // 为自定义类型成员，调用默认构造函数
//private:
//    int _year;
//    int _month;
//    int _day;
//    Time _t1;
//
//};
//
//int main()
//{
//    Date d;
//    return 0;
//}


//class Time
//{
//public:
//    Time(int hour = 1, int minute = 1, int second = 1)
//    {
//        _hour = hour;
//        _minute = minute;
//        _second = second;
//    }
//private:
//    int _hour;
//    int _minute;
//    int _second;
//};
//class Date
//{
//public:
//    // 初始化器列表优先级，比成员指定默认值更高
//    Date()
//        : _year(0), _month(0), _day(0), x{3.3}
//    {}
//
//    void Print()
//    {
//        cout << _year << endl;
//        cout << _month << endl;
//        cout << _day << endl;
//    }
//private:
//    int _year = 1;
//    int _month = 2;
//    int _day = 3;
//    int x;
//};
//
//int main()
//{
//    Date d1;
//    d1.Print();
//    return 0;
//}



//class Date
//{
//public:
//    // 初始化器列表优先级，比成员指定默认值更高
//    Date() :
//        _year(0), // 正常
//        _month(2.2), // 编译允许，但有警告，会丢失精度
//        _day{3.3} // ❌ 编译错误：不允许从 double 窄化为 int（C++11 起）
//    {}
//private:
//    int _year;
//    int _month;
//    int _day;
//};
//int main()
//{
//    Date d1;
//    return 0;
//}

//class Time
//{
//public:
//    Time(int hour = 1, int minute = 1, int second = 1)
//    {
//        _hour = hour;
//        _minute = minute;
//        _second = second;
//    }
//    void Print()
//    {
//        cout << _hour << ' ' 
//            << _minute << ' ' 
//            << _second << ' ' << endl << endl;
//    }
//private:
//    int _hour;
//    int _minute;
//    int _second;
//};
//class Date
//{
//public:
//    Date()
//        : _year(0), _month(0), _day(0), _arr1{ 1, 2 }, _arr2{ {1,2,3}, {4,5,6} },
//        _t1(1, 2, 3),
//        _t2(0, 0, 0),
//        // _t3(0, 0, 0), 无初始化器，采用默认初始化
//        _t4{ {1, 2, 3} , // 隐式调用构造函数
//        Time{4, 5, 6} , // 显式调用构造函数
//            {0, 0, 0} , 
//            (7, 8, 9), // 采用圆括号，里面被当成逗号表达式，值传结果值9给第一个参数
//                       // 第五个元素无参数，采用默认初始化
//        }              
//    {}
//    void Print()
//    {
//        _t1.Print();
//        _t2.Print();
//        _t3.Print();
//        _t4[0].Print();
//        _t4[1].Print();
//        _t4[2].Print();
//        _t4[3].Print();
//        _t4[4].Print();
//    }
//private:
//    int _year;
//    int _month;
//    int _day;
//    int _arr1[2];
//    int _arr2[2][3];
//    Time _t1;
//    Time _t2;
//    Time _t3;
//    Time _t4[5];
//};
//
//int main()
//{
//    Date d;
//    d.Print();
//    return 0;
//}

//class Time
//{
//public:
//    Time() : _hour(0), _minute(0), _second(0) {} // 默认构造函数，初始化成员为0值
//    Time(int hour, int minute, int second) 
//    {
//        _hour = hour;
//        _minute = minute;
//        _second = second;
//    }
//    void Print()
//    {
//        cout << _hour << ' '
//            << _minute << ' '
//            << _second << ' ' << endl << endl;
//    }
//private:
//    int _hour;
//    int _minute;
//    int _second;
//};
//class Date
//{
//public:
//    // Time类中的默认构造函数已经显式初始化为0了，
//
//    Date() // 不给初始化器的，为默认初始化
//        : _year(0), _month(0), _day(0), _arr{ 1, 2 },
//        _t1(), _t2(), _t4()
//    {}
//    void Print()
//    {
//        _t1.Print();
//        _t2.Print();
//        _t3.Print();
//        _t4[0].Print();
//        _t4[1].Print();
//        _t4[2].Print();
//        _t4[3].Print();
//        _t4[4].Print();
//    }
//private:
//    int _year;
//    int _month;
//    int _day;
//    int _arr[2];
//    Time _t1;
//    Time _t2;
//    Time _t3;
//    Time _t4[5];
//};
//
//int main()
//{
//    Date d;
//    d.Print();
//    return 0;
//}

#include <iostream>
using namespace std;
class Date
{
public:
	Date(int year = 0, int month = 1, int day = 1)
	{
		if (year < 0 || month < 0 || month > 12 || day < 0 || day > getDay(year, month))
		{
			cout << "无效日期，已置成默认值" << endl;
			return;
		}
		_year = year;
		_month = month;
		_day = day;
	}
	~Date() {};
	Date(const Date& d)
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
	}
	void Print()
	{
		cout << _year << '-' << _month << '-' << _day << endl;
	}
	bool operator==(const Date& d)
	{
		return this->_year == d._year &&
			this->_month == d._month &&
			this->_day == d._day;
	}	
	bool operator>(const Date& d)
	{
		if (this->_year > d._year)
			return true;

		else if (this->_year == d._year && this->_month > d._month)
			return true;

		else if (this->_year == _year && this->_month == _month && this->_day > d._day)
			return true;

		else
		return false;
	}
	bool operator<(const Date& d)
	{
		return !(*this == d || *this > d);
	}
	// 待完善
	void operator+(int day)
	{
		if (day < 0 || day > INT_MAX / 2)
		{
			cout << "无效天数" << endl;
			return;
		}
		_day += day;

	}
private:
	int getDay(int year, int month)
	{
		static int day[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
		if (month == 2 && (year % 4 == 0 && year % 100 != 0 || year % 400 == 0))
			return 29;
		
		return day[month];
	}
	int _year;
	int _month;
	int _day;
};
int main()
{
	Date d1(2025, 1, 1);
	Date d2(2025, 1, 2);
	d1.Print();
	d2.Print();
	cout << "d1 == d2 ? " << (d1 == d2) << endl;
	cout << "d1 > d2 ? " << d1.operator>(d2) << endl;
	cout << "d1 < d2 ? " << d1.operator<(d2) << endl;
	return 0;
}