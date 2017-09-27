# include<iostream>
using namespace std;
int sum=0;
int even(int a, int b)
{
	if(a==b)
	{
		if(a%2==0)
		sum=sum+a;
		return sum;
	}
	else
	{
		if(a%2==0)
		sum=sum+a;
		a++;
		even(a,b);
	}
}
int odd(int a,int b)
{
	if(a==b)
	{
		if(a%2!=0)
		sum=sum+a;
		return sum;
	}
	else
	{
		if(a%2!=0)
		sum=sum+a;
		a++;
		odd(a,b);
	}
}
int main()
{
	int n,m,c;
	cout<<"enter the lower and upper limits(both positive & lower<upper)\n";
	cin>>n>>m;
	if(n<=0 || m<=0 || n>m)
	{
		cout<<"incorrect input\n";
		exit(1);
	}
	else
	{
		cout<<"choose the input-\nodd numbers - 1\neven numbers - 2\n";
		cin>>c;
		switch(c)
		{
			case 1:
				cout<<"sum= "<<odd(n,m);
				break;
			case 2:
				cout<<"sum= "<<even(n,m);
				break;
			default:
				cout<<"incorrect input";
		}
	}
	return 0;
}
