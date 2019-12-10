#include<iostream>
using namespace std;
int main()
{
	int m ;
	cout<<"Enter The Number"<<endl;
	cin>>m;
	int rem = 0;
	int count = 0 ;
	int n = m ;
	int sum = 0 ;
	while(n!= 0)
	{
		rem = n%10 ;
		n = n/10 ;
		count++ ;
	}
	n = m ;
	cout<<"N = "<<n<<endl;
	while(n!=0)
	{
		 rem = n%10 ;
		 
		
		int mul = 1;
		for(int i = 1 ;i<=count ;i++)
		{
					mul = mul * rem ;
		}
		cout<<"MUL"<<mul<<endl;
		sum = sum + mul ;
		n = n/10 ;
	}
	if(m == sum)
	{
		cout<<"ARMSTRONG NUMBER"<<endl;
	}
	else
	{
		cout<<"NOT"<<endl;
	}	
}


