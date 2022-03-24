#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while( t--)
	{
		int n,k;
		cin>>n>>k;
		int arr[n],arr2[n];
		for( int i= 0; i < n; i ++)
		{
			cin>>arr[i];
		}
		for( int i= 0; i < n; i ++)
		{
			cin>>arr2[i];
		}
		sort( arr , arr+n);
		sort( arr2,arr2+n);
		reverse( arr2,arr2+n);
		int count = 0;
		if( k!=0)
		{
			for( int i= 0; i < n; i ++)
			{
				if( count < k)
				{
					if(arr[i]<arr2[i])
					
					{swap(arr[i],arr2[i]);
					count++;}
				}
				else
					{
						break;
					}
				
			}
		}
		int sum = 0;

		for( int i = 0; i < n; i ++)
		{
			sum += arr[i];
		}

		cout<<sum<<endl;
	}
}	