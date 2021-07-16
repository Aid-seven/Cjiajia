//#include<iostream>
//using namespace std;
//int a = 3;
//int main()
//{
//	float b;
//	b = 4.5;
//	cout << a << '\n' << b;
//	return 0;
//}

////输出双精度数
//#include<iostream>
//#include<iomanip>
//using namespace std;
//int main()
//{
//	double a = 123.456789012345;
//	cout << a
//		<< '\n' << setprecision(9) << a
//		<< '\n' << setprecision(6)
//		<< '\n' << setiosflags(ios::fixed)
//		<< '\n' << setiosflags(ios::fixed) << setprecision(8) << a
//		<< '\n' << setiosflags(ios::scientific) << a
//		<<'\n'<< setiosflags(ios::scientific) << setprecision(4) << a;
//	return 0;
//}

////输出整数
//#include<iostream>
//#include<iomanip>
//using namespace std;
//int main()
//{
//	int b = 123456;
//	cout << b
//		<< '\n' << hex << b
//		<< '\n' << setiosflags(ios::uppercase) << b
//		<< '\n' << setw(10) << b << ',' << b
//		<< '\n' << setfill('*') << setw(10) << b
//    	<< '\n' << setiosflags(ios::showpos) << b;
//	return 0;
//}

////各行小数点对齐
//#include<iostream>
//#include<iomanip>
//using namespace std;
//int main()
//{
//	double a = 123.456, b = 3.14159, c = -3214.67;
//	cout << setiosflags(ios::fixed) << setiosflags(ios::right) << setprecision(2);
//	cout << setw(10) << a << endl;
//	cout << setw(10) << b << endl;
//	cout << setw(10) << c<< endl;
//	return 0;
//}

////输出单个字符
//#include<iostream>
//using namespace std;
//int main()
//{
//	char a, b, c;
//	a = 'B';
//	b = 'O';
//	c = 'Y';
//	putchar(a);putchar(b);putchar(c);putchar('\n');
//	putchar(66);putchar(79);putchar(89);putchar(10); putchar('\n');
//	putchar('\101'); putchar('\n');
//    putchar('\n');
//	putchar('\1050');
//	return 0;
//}

////输入单个字符
//#include<iostream>
//using namespace std;
//int main()
//{
//	char c;
//	c = getchar(); putchar(c + 32);putchar('\n');
//	return 0;
//}

////用scanf函数和printf函数进行输入和输出  !!(scanf)
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a;
//	float b;
//	char c;
//	scanf_s("%d %c %f", &a, &c, &b);  //注意要在变量前面加地址运算符&
//	printf("a=%d,b=%f,c=%c\n", a, b, c);
//	return 0;
//}

////求一个一元二次方程的根ax²+bx+c=0的根。a，b，c的值在运行时由键盘输入，它们的值满足b²-4ac>=0.
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a, b, c, x1, x2;
//	cin >> a >> b >> c;
//	x1 = (-b + sqrt(b*b - 4* a*c));
//	x2 = (-b - sqrt(b*b + 4 * a*c));
//	cout << "x1=" << x1 << '\n' << "x2=" << x2;
//	return 0;
//}

