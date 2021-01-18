#include<iostream>
using namespace std;
int main()
{
	int a[100];
	int i,n;
	cout<<"How many numbers are in the array? \n";
	cin>>n;
	cout<<"Enter the elements \n";
	for(i=0;i<=n-1;++i)
	cin>>a[i];
	cout<<"Contents of the array \n";
	for(i=0;i<=n-1;++i)
	cout<<a[i]<<'\t';
	return 0;
}
 
