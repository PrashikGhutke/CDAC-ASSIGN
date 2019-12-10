#include<iostream>
using namespace std;
int main()
{
	int count = 0;
	int a[4] = {1,5,7,-1};
	int num = 6 ;
	for(int i = 0 ;i<4;i++)
	{
		for(int j = 0 ;j <4 ;j++)
		{
			int add = a[i] + a[j];
			//int sub = a[i] - a[j];
			if(num == add)
			{
				count++ ;
			}
			
			
		}
	}
		cout<<"PAIRS =  "<<count;
	
}
