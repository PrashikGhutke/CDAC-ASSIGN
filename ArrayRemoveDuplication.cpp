#include<iostream>
using namespace std;
int main()
{
	int a[5];
	cout<<"Enter The Number";
	for(int i = 0 ;i<5;i++)
	{
		cin>>a[i];
	}
	int count = 0;
	for(int i = 0 ;i<= 4;i++)
	{
		for(int j = i+1;j<=4;j++)
		{
			if(a[i] == a[j])
			{
				for(int k = j ;k<=4;k++)
				{
					a[k] = a[k+1];
				}
				count++; 
			}
		}
	}
	
	cout<<"NEW LIST"<<endl;
	for(int i = 0 ;i<count;i++)
	{
		cout<<a[i]<<endl;
	}
	
}
