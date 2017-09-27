# include<iostream>
using namespace std;
int sum=0;
int numsum(int n)
{
	if(n==0)
	{
		sum=sum+n;
		return sum;
	}
	else
	{
		sum=sum+n;
		n--;
		numsum(n);
	}
}
int main()
{
	int n;
	cout<<"enter the natural number limit\n";
	cin>>n;
	if(n<=0)
	{
		cout<<"incorrect input\n";
		exit(1);
	}
	else
	cout<<"sum= "<<numsum(n);
	return 0;
}
