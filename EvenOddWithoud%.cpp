#include<iostream>
using namespace std;
int main()
{
	int m ;
	cout<<"Enter The Data"<<endl;
	cin>>m;
	int n = m ;
	for(int i = 1 ;i<=m/2;i++)
	{
		n = n - 2 ;
		
	}
	
	cout<<"VALUE OF N :"<<n<<endl;
	if(n == 0)
	{
		cout<<"EVEN NO "<<m;
	}
	else
	{
		cout<<"ODD"<<m;
	}
}
