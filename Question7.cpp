# include<iostream>
# include<math.h>
using namespace std;
int rev=0,a;
int reverse(int n,int d)
{
	a=n%10;
	if(n==0)
	return rev;
	else
	{
		rev=rev+(a*pow(10,d-1));
		d--;
		reverse(n/10,d);
	}
}
int main()
{
	int n,i=0,b;
	cout<<"enter the natural number\n";
	cin>>n;
	b=n;
	if(n<=0)
	{
		cout<<"incorrect input\n";
		exit(1);
	}
	else
	{
		while(b!=0)
		{
			i++;
			b=b/10;
		}
		if(reverse(n,i)==n)
		cout<<"the number is a palindrome.";
		else
		cout<<"the number is not a palindrome.";
	}
	return 0;
}
