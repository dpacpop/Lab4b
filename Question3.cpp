# include<iostream>
using namespace std;
void even(int a, int b)
{
	if(a==b)
	{
		if(a%2==0)
		cout<<a;
		return;
	}
	else
	{
		if(a%2==0)
		cout<<a<<"\n";
		a++;
		even(a,b);
	}
}
void odd(int a,int b)
{
	if(a==b)
	{
		if(a%2!=0)
		cout<<a;
		return;
	}
	else
	{
		if(a%2!=0)
		cout<<a<<"\n";
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
				odd(n,m);
				break;
			case 2:
				even(n,m);
				break;
			default:
				cout<<"incorrect input";
		}
	}
	return 0;
}
