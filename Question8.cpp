# include<iostream>
using namespace std;
int sum=0,a;
int sumofdig(int n)
{
	a=n%10;
	if(n==0)
	return sum;
	else
	{
		sum=sum+a;
		sumofdig(n/10);
	}
}
int main()
{
	int n;
	cout<<"enter the natural number\n";
	cin>>n;
	if(n<=0)
	{
		cout<<"incorrect input\n";
		exit(1);
	}
	else
	cout<<"the sum of digits is "<<sumofdig(n);
	return 0;
}
