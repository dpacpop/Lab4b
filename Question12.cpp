# include<iostream>
using namespace std;
int lcm(int a,int b,int c)
{
	if(c%a==0 && c%b==0)
	return c;
	else
	{
		c++;
	    lcm(a,b,c);
	}
}
int main()
{
	int a,b;
	cout<<"enter the two numbers to calculate their LCM.\n";
	cin>>a>>b;
	if(a<=0 || b<=0)
	{
		cout<<"incorrect input\n";
		exit(1);
	}
	else
	{
		if(a>=b)
		cout<<"the LCM is "<<lcm(a,b,a);
		else
		cout<<"the LCM is "<<lcm(a,b,b);
	}
	return 0;
}
