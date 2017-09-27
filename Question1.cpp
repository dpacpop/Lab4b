# include<iostream>
using namespace std;
int i=1,j=0;
int power(int a, int b)
{
	if(j==b)
	{
		return i;
	}
	else
	{
		i=i*a;
		j++;
		power(a,b);
	}
}
int main()
{
	int a,b;
	cout<<"enter the base and the exponent(base>1, exponent>0)\n";
	cin>>a>>b;
	if(a<=1 || b<=0)
	cout<<"incorrect input\n";
	else
	cout<<"the power is "<<power(a,b);
	return 0;
}
