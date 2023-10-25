#include <iostream>

using namespace std;
<<<<<<< HEAD
int tong(int a, int b);
int hieu(int a, int b);
int tich(int a, int b){
	return a*b;
}
float thuong(int a, int b);
int main()
{
	
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	tich(2*3);
	
=======
<<<<<<< HEAD

int hieu(int a, int b){
	return a-b;
}
=======
int tong(int a, int b){
	return a+b;
}

>>>>>>> f5f58c2256f5dbcf7650c8c95784ea98aaa8fee8
int tich(int a, int b);
float thuong(int a, int b)
{
	if(b == 0)
	{
		cout <<"KO CHIA CHO 0";
		
	}
	
	return a/b;
	
};
int congdayso(int a){
	int s=0;
	for(int i=0;i<=a;i++){
		sum+=a
	}
	return s;
}
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
	cout<<Capsocong(a)<<"capsocong";
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	thuong(a,b);
>>>>>>> ede2192bc1d7e2c5a4bb0e4e6cdd04be4764e773
	system("pause");

	return 0;
}