//#include<iostream>  //用cout输出时需要此头文件
//using  namespace std;  //使用命名空间std
//int main()
//{
//	cout << "This is a C++ program.\n";  //用C++的方法输出一行
//	return 0;
//}
////求a+b的和
//#include<iostream>  //预处理命令 i-o-sream输入输出流 在c语言中头文件带.h,C++不带，若自己编制的头文件可带.h
//using namespace std; //使用命名空间std
//int main() //主函数 C++要求main函数必须声明为int型
//{
//	int a, b, sum;    //定义a，b，sum为整型
//		cin  >> a >> b;    //c-in输入流对象 >>提取运算符 cin>>叫做cin语句从输入设备中（如键盘）提取数据送到输入流cin中
//	sum = a + b;   //赋值语句，将a+b赋值给整型变量sum
//	cout << "a+b=" << sum << endl; //c-out输出流对象 <<插入运算符将输入流cout的内容输出到系统指定的设备中（如显示屏） endl=\n
//	return 0;
//}

////给x，y求大者
//#include<iostream>
//using namespace std;
//int max(int x, int y) //定义max函数，函数值为整型，形式参数x，y也为整型
//{  //max函数体开始
//	int z;
//	if (x > y)z = x; // if语句，如果x>y，则将x的值赋给z
//	else z = y;  //否则将y的值赋给z
//	return(z);  //将z的值返回，通过max带回调用处
//}
//int main()
//{
//	int a, b,m;
//	cin >> a >> b;
//	m = max(a, b);  //调用max函数，将得到的值赋给m
//	cout << "max=" << m << '\n';
//		return 0;
//}
//这里要注意输入的值应该用空格隔开，如18 25，而不能输入8，25或8；25，这样会使第二个变量成为不可预见值

//以上若调换max和main函数 则编译系统不知道max函数含义，会出错，故而我们可以对max函数进行声明，对以上程序进行改写
//#include<iostream>
//using namespace std;
//int main()
//{
//	int max(int x, int y);  //对max进行声明，通知系统max是一个函数，函数值是整型，函数有两个参数，都是整型 函数声明位置应在函数调用之前
//	int a, b, c;
//	cin >> a >> b;
//	c = max(a, b);
//	cout << "max=" << c << '\n';
//	return 0;
//}
//int max(int x, int y)
//{
//	int z;
//	if (x > y)z = x;
//	else z = y;
//	return (z);
//}

//包含类的C++程序
//#include<iostream>
//using namespace std;
//class Student  //声明一个类，类名为Student 是我们指定的类，还有系统已预先定义好的，如int，float
//	//“类”是把一组数据和有权调用这些数据的函数封装在一起的一种数据结构，体现了数据的1.封装性2.信息隐蔽性  “一个类”是有一批数据以及对其操作的函数组成的
//{
//private:  //以下为类中的私有部分  只能被本类中的成员函数所调用（除友函数） 目的对某些数据进行保护，以防止误调用“信息屏蔽性”
//	int num;  //num score数据成员
//	int score;
//public:  //以下为公有部分  可以被类内外都调用
//	void setdata()  // setdata display 成员函数 定义公有函数setdata
//	{
//		cin >> num;
//	                                                                                                                                                         	cin >> score;
//	}
//	void display()  //定义公有函数display  
//	{
//		cout << "num=" << num << endl;
//		cout << "score=" << score << endl;
//	};
//};  //类的声明结束 
//Student stud1, stud2;  //定义stud1和stud2为Student类的变量，称为对象 具有类型特征的变量成为对象
//int main()
//{
//	stud1.setdata();  //调用对象stud1的setdata函数  “.”成员运算符，把对象和成员连接起来
//	stud2.setdata();
//	stud1.display();  //调用对象stud1的setdata函数
//	stud2.display();
//	return 0;
//}

//练习 课本十五页
///*一.*/#include<iostream>
//using namespace std;
//int main()
//{
//	cout << "This" << "is";
//	cout << "a" << "C++";
//	cout << "program." << endl;
//	return 0;
//}
///*二.*/#include<iostream>
//using namespace std;
//int main()
//{
//	int a, b, c;
//	a = 10;
//	b = 23;
//	c = a + b;
//	cout << "a+b=";
//	cout << c;
//	cout << endl;
//	return 0;
//}
///*三.*/#include<iostream>
//using namespace std;
//int main()
//{
//	int a, b, c;
//	int f(int x, int y, int z);
//	cin >> a >> b >> c;
//	c = f(a, b, c);
//	cout << c << endl;
//	return 0;
//}
//int f(int x, int y, int z)
//{
//	int m;
//	if (x < y)m = x;
//	else m = y;
//	if (z < m)m = z;
//		return(m);
//}
/*四.*/#include<iostream>
//using namespace std;
//int main()
//{
//	int a, b,c;
//	cin >> a>> b;
// c=a+b;
//	cout << "a+b=" << c;
//	return 0;
//}
///*五.*/#include<iostream>
//using namespace std;
//int main()
//{
//	int add(int x, int y);
//	int a, b,c;
//	cin >> a >> b;
//	c = add(a, b);
//	cout << "a+b=" << c << endl;
//	return 0;
//}
//int add(int x, int y)
//{
//	int z;
//	z = x + y;
//	return (z);
//}
///*六.*/#include <iostream>
//using namespace std;
//	int main()
//{
//	void sort(int x, int y, int z);
//	int x, y, z;
//	cin >> x >> y >> z;
//	sort(x, y, z);
//	return 0;
//}
//void sort(int x, int y, int z)
//{
//	int temp;
//	if (x > y) { temp = x; x = y; y = temp; }  //{}内3个语句的作用是将x和y的值互换
//	if (z < x) cout << z << ',' << x<< ',' << y << endl;
//	  else if (z < y)cout << x << ',' << z << ',' << y << endl;
//	     else cout << x << ',' << y << ',' << z << endl;
//}