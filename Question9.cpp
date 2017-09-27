# include<iostream>
using namespace std;
long fact=1;
int a=1;
long factorial(int n)
{
	if(n==0)
	return (fact);
	else
	{
		fact=fact*n;
		factorial(--n);
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
	cout<<"the factorial is "<<factorial(n);
	return 0;
}
