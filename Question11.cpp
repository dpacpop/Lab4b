# include<iostream>
using namespace std;
int i=1,j=1;
int gcd(int a,int b)
{
	if(i==a || i==b)
	return j;
	else
	{
		if(a%i==0 && b%i==0)
		j=i;
		i++;
		gcd(a,b);
	}
}
int main()
{
	int a,b;
	cout<<"enter the two numbers to calculate their GCD.\n";
	cin>>a>>b;
	if(a<=0 || b<=0)
	{
		cout<<"incorrect input\n";
		exit(1);
	}
	else
	cout<<"the GCD is "<<gcd(a,b);
	return 0;
}
