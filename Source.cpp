#include <iostream>

using namespace std;
<<<<<<< HEAD
int tong(int a, int b);
int hieu(int a, int b){
	return a-b;
}
=======
int tong(int a, int b){
	return a+b;
}
int hieu(int a, int b);
>>>>>>> f5f58c2256f5dbcf7650c8c95784ea98aaa8fee8
int tich(int a, int b);
float thuong(int a, int b);
int main()
{
	int a,b;
	cout<<"\nNhap a:";
	cin>>a;
	cout<<"\nNhap b:";
	cin>>b;
	cout<<hieu(a,b)<<"hieu";
	cout<<cong(a,b)<<"tong";
	cout<<tich(a,b)<<"nhan";
	cout<<thuong(a,b)<<"thuong";
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	system("pause");
	return 0;
}