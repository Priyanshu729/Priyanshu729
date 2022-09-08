#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		
	}int low,mid;
	low=0;
	mid=0;
	int high;
	high=n-1;
	cout<<high;
	int temp=0;
	while (mid<=high)
	{
		switch(a[mid])
		{
			case 0:
				swap(a[low++],a[mid++]);
				break;
			case 1:
				mid++;
				break;
			case 2:
				swap(a[mid],a[high--]);
				break;
		}
	
	}
	for(int i=0;i<n;i++){
		cout<<a[i];
	}
}
