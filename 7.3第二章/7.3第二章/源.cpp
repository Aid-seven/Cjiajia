//#include<iostream>
//using namespace std;
//int main()
//{
//	int i, j;
//	i = 'A';  //将一个字符常量赋给整型变量i
//	j = 'B';
//	cout << i << ' ' << j << '\n';
//	return 0;
//}

//将小写字母化为大写字母
//#include<iostream>
//using namespace std;
//int main()
//{
//	char c1, c2;
//	c1 = 'a';
//	c2 = 'b';
//	c1 = c1 - 32;
//	c2 = c2 - 32;
//	cout << c1 << ' ' << c2 << endl;
//	return 0;
//}

//计算贷款，使用符号常量
//#include<iostream>
//using namespace std;
//#define PRICE 30 //预处理指令，指定PRICE代表常量30，因为这个不是语句，注意末尾不要加分号 符号常量虽然有名字但是不是变量
//int main()
//{
//	int num, total;
//	num = 10;
//	total = num * PRICE;
//	cout << "total=" << total << endl;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	float x;
//	int i;
//	x = 3.6;
//	i = (int)x;
//	cout << "x=" << x << ",i=" <<i<< endl;
//	return 0;
//}
 
//有符号数据传送给无符号变量
//#include<iostream>
//using namespace std;
//int main()
//{
//	unsigned short a;
//	short int b = -1;
//		a = b;
//	cout << "a=" << a << endl;
//	return 0;
//}

////练习 课本37
//#include<iostream>
//using namespace std;
//int main()
//{
//	char c1 = 'a', c2 = 'b', c3 = 'c', c4 = '\101', c5 = '\116';
//	cout << c1 << c2 << c3 << '\n';
//	cout << "\t\t" << c4 << '\t' << c5 << '\n';
//		return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	char c1 = 'C', c2 = '+', c3 = '+';
//	cout << "I says:\"" << c1 << c2 << c3 << '\"';
//	cout << "\t\t" << "He says :\"C++ is very interesting!\"" << '\n';
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	int i, j, m, n;
//	i = 8;
//	j = 10;
//	m = ++i + j++;
//	n= (++i) + (++j) + m;
//	cout << i << '\t' << j << '\t' << m << '\t' << n << endl;
//	return 0;
//}