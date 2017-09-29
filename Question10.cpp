# include<iostream>
using namespace std;
int a=0,b=1,i=2,j=1;
int fibonacci(int n)
{
	if(i==n)
	return b;
	else if(j==n)
	return a;
	else
	{
		a=a+b;
		b=a+b;
		i=i+2;
		j=j+2;
		fibonacci(n);
	}
}
int main()
{
	int n;
	cout<<"enter the fibonacci term to be displayed.\n";
	cin>>n;
	if(n<=0)
	{
		cout<<"incorrect input\n";
		exit(1);
	}
	else
	cout<<"the "<<n<<"th fibonacci term is "<<fibonacci(n);
	return 0;
}
