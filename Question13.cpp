# include<iostream>
using namespace std;
int arr[50];
void disparr(int a)
{
	if(a==50)
	return;
	else
	{
		cout<<arr[a]<<endl;
		a++;
	    disparr(a);
	}
}
int main()
{
	int i;
	cout<<"the elements of the array are-\n";
	for(i=0;i<50;i++)
	arr[i]=i+1;
	i=0;
	disparr(i);
	return 0;
}
