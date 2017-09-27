# include<iostream>
using namespace std;
int i=1;
void printnum(int n)
{
	if(i>n)
	return;
	else
	{
		cout<<i<<"\n";
		i++;
		printnum(n);
	}
}
int main()
{
	int n;
	cout<<"enter the natural number limit\n";
	cin>>n;
	if(n<=0)
	cout<<"incorrect input\n";
	else
	{
		cout<<"the natural numbers between 1 and "<<n<<" are-\n";
		printnum(n);
	}
	return 0;
}
