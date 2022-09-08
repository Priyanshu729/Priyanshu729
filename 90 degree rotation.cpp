#include<iostream>
using namespace std;
int main()
{
	int row;
	cout<<"ENTER THE ROW OF ARRAY";
	cin>>row;
	int col;
	cout<<"ENTER THE COLUMN OF ARRAY ";
	cin>>col;
	int a[row][col];
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cin>>a[i][j];
			
		}cout<<"\n";
    }for(int i=0;i<row;i++)
	{
		for(int j=row-1;j>=0;j--)
		{
			cout<<a[j][i]<<" ";
			
			
		}cout<<"\n";
	}
}//2nd method
//#include<iostream>
//using namespace std;
//int main()
//{
//	int row;
//	cout<<"ENTER THE ROW OF ARRAY";
//	cin>>row;
//	cout<<"ENTER THE COLUMN OF ARRAY ";
//	int col;
//	cin>>col;
//	int a[row][col];
//	for(int i=0;i<row;i++)
//	{
//		for(int j=0;j<col;j++)
//		{
//			cin>>a[i][j];
//		}cout<<"\n";
//	}
//	for(int i=0;i<row;i++)
//	{
//		for(int j=i+1;j<col;j++)
//		{
//			swap(a[i][j],a[j][i]);
//		}
//	}for (int i = 0; i<col; i++) {
//        int low = 0, high = col-1;
//        while (low<high) {
//            swap(a[i][low],a[i][high]);
//            low++;
//            high--;
//        }
//    }for(int i=0;i<row;i++)
//	{
//		for(int j=0;j<col;j++)
//		{
//			cout<<a[i][j]<<" ";
//		}cout<<"\n";
//	}
