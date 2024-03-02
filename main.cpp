#include<bits/stdc++.h>
using namespace std;
int main()
{
	int size;
	cout<<"Enter the size";
	cin>>size;

	int arr[size];
	cout<<"Enter "<<size<<"elements";
	for(int i=0;i<size;i++)
		{
			cin>>arr[i];
		}

	int count=0;
	int maxi=0;
	for(int i=0;i<size;i++)
		{
			if(arr[i]==1)
			{
				count++;
			}
			else{
				count=0;
			}
			maxi=max(maxi,count);
		}

	cout<<"Number of Ones is "<<maxi;
}