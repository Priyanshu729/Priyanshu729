#include<iostream>
using namespace std;
int main()
{
	int arr[7]={1,2,1,3,4,3,7};
	int i=0;
	int temp;
	while(i<7)
	{
		if(arr[i]!=arr[arr[i]-1])
		{
		   temp=arr[i];
		   arr[i]=arr[arr[i]-1];
		   arr[arr[i]-1]=temp;
	    }
		else
		{
			i++;
		}   
    }for(int i=0;i<7;i++)
	{
		if(arr[i]!=i+1)
		{
			cout<<"missing terms are :"<<i+1;
			cout<<"repeating terms are :"<<arr[i];
		}
	}
}
