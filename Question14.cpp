# include<iostream>
using namespace std;
int arr[10],sum=0;
int sumarr(int a)
{
	if(a==10)
	return sum;
	else
	{
		sum=sum+arr[a];
		a++;
	    sumarr(a);
	}
}
int main()
{
	int i;
	cout<<"enter 10 integers.\n";
	for(i=0;i<10;i++)
	cin>>arr[i];
	i=0;
	cout<<"sum of integers= "<<sumarr(i);
	return 0;
}
