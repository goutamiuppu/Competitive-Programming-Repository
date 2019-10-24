#include <bits/stdc++.h>
using namespace std;
struct Height {
	int feet;
	int inches;
};
int findMax(Height arr[], int n);
// driver program
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n, tmp1, tmp2;
	    cin>>n;
	    Height arr[n];
	    for(int i=0; i<n; i++)
	    {
	        cin>>tmp1>>tmp2;
	        arr[i]={tmp1, tmp2};
	    }
	    int res = findMax(arr, n);
	    cout<<res<<endl;
	}
	return 0;
}
// function must return the maximum Height
// return the height in inches
int findMax(Height arr[], int n)
{
    // Code here

    int sum1=0;
    int sum2=0;
    int i;
    for(i=0;i<n;i++)
    {
        sum2=arr[i].feet*12+arr[i].inches;
        if(sum2>sum1)
        {
            sum1=sum2;
        }
    }
    return sum1;
}
