# include<iostream>
using namespace std;
int arr[10];
int minarr(int a,int min)
{
	if(a==10)
	return min;
	else
	{
		if(min<arr[a])
		min=arr[a];
		a++;
	    minarr(a,min);
	}
}
int maxarr(int a,int max)
{
	if(a==10)
	return max;
	else
	{
		if(max>arr[a])
		max=arr[a];
		a++;
	    maxarr(a,max);
	}
}
int main()
{
	int i;
	cout<<"enter 10 integers.\n";
	for(i=0;i<10;i++)
	cin>>arr[i];
	i=0;
	cout<<"the minimum number is= "<<minarr(i,arr[0])<<"and the maximum number is= "<<maxarr(i,arr[0]);
	return 0;
}
