//#include<iostream>  //��cout���ʱ��Ҫ��ͷ�ļ�
//using  namespace std;  //ʹ�������ռ�std
//int main()
//{
//	cout << "This is a C++ program.\n";  //��C++�ķ������һ��
//	return 0;
//}
////��a+b�ĺ�
//#include<iostream>  //Ԥ�������� i-o-sream��������� ��c������ͷ�ļ���.h,C++���������Լ����Ƶ�ͷ�ļ��ɴ�.h
//using namespace std; //ʹ�������ռ�std
//int main() //������ C++Ҫ��main������������Ϊint��
//{
//	int a, b, sum;    //����a��b��sumΪ����
//		cin  >> a >> b;    //c-in���������� >>��ȡ����� cin>>����cin���������豸�У�����̣���ȡ�����͵�������cin��
//	sum = a + b;   //��ֵ��䣬��a+b��ֵ�����ͱ���sum
//	cout << "a+b=" << sum << endl; //c-out��������� <<�����������������cout�����������ϵͳָ�����豸�У�����ʾ���� endl=\n
//	return 0;
//}

////��x��y�����
//#include<iostream>
//using namespace std;
//int max(int x, int y) //����max����������ֵΪ���ͣ���ʽ����x��yҲΪ����
//{  //max�����忪ʼ
//	int z;
//	if (x > y)z = x; // if��䣬���x>y����x��ֵ����z
//	else z = y;  //����y��ֵ����z
//	return(z);  //��z��ֵ���أ�ͨ��max���ص��ô�
//}
//int main()
//{
//	int a, b,m;
//	cin >> a >> b;
//	m = max(a, b);  //����max���������õ���ֵ����m
//	cout << "max=" << m << '\n';
//		return 0;
//}
//����Ҫע�������ֵӦ���ÿո��������18 25������������8��25��8��25��������ʹ�ڶ���������Ϊ����Ԥ��ֵ

//����������max��main���� �����ϵͳ��֪��max�������壬������ʶ����ǿ��Զ�max�������������������ϳ�����и�д
//#include<iostream>
//using namespace std;
//int main()
//{
//	int max(int x, int y);  //��max����������֪ͨϵͳmax��һ������������ֵ�����ͣ������������������������� ��������λ��Ӧ�ں�������֮ǰ
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

//�������C++����
//#include<iostream>
//using namespace std;
//class Student  //����һ���࣬����ΪStudent ������ָ�����࣬����ϵͳ��Ԥ�ȶ���õģ���int��float
//	//���ࡱ�ǰ�һ�����ݺ���Ȩ������Щ���ݵĺ�����װ��һ���һ�����ݽṹ�����������ݵ�1.��װ��2.��Ϣ������  ��һ���ࡱ����һ�������Լ���������ĺ�����ɵ�
//{
//private:  //����Ϊ���е�˽�в���  ֻ�ܱ������еĳ�Ա���������ã����Ѻ����� Ŀ�Ķ�ĳЩ���ݽ��б������Է�ֹ����á���Ϣ�����ԡ�
//	int num;  //num score���ݳ�Ա
//	int score;
//public:  //����Ϊ���в���  ���Ա������ⶼ����
//	void setdata()  // setdata display ��Ա���� ���幫�к���setdata
//	{
//		cin >> num;
//	                                                                                                                                                         	cin >> score;
//	}
//	void display()  //���幫�к���display  
//	{
//		cout << "num=" << num << endl;
//		cout << "score=" << score << endl;
//	};
//};  //����������� 
//Student stud1, stud2;  //����stud1��stud2ΪStudent��ı�������Ϊ���� �������������ı�����Ϊ����
//int main()
//{
//	stud1.setdata();  //���ö���stud1��setdata����  ��.����Ա��������Ѷ���ͳ�Ա��������
//	stud2.setdata();
//	stud1.display();  //���ö���stud1��setdata����
//	stud2.display();
//	return 0;
//}

//��ϰ �α�ʮ��ҳ
///*һ.*/#include<iostream>
//using namespace std;
//int main()
//{
//	cout << "This" << "is";
//	cout << "a" << "C++";
//	cout << "program." << endl;
//	return 0;
//}
///*��.*/#include<iostream>
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
///*��.*/#include<iostream>
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
/*��.*/#include<iostream>
//using namespace std;
//int main()
//{
//	int a, b,c;
//	cin >> a>> b;
// c=a+b;
//	cout << "a+b=" << c;
//	return 0;
//}
///*��.*/#include<iostream>
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
///*��.*/#include <iostream>
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
//	if (x > y) { temp = x; x = y; y = temp; }  //{}��3�����������ǽ�x��y��ֵ����
//	if (z < x) cout << z << ',' << x<< ',' << y << endl;
//	  else if (z < y)cout << x << ',' << z << ',' << y << endl;
//	     else cout << x << ',' << y << ',' << z << endl;
//}