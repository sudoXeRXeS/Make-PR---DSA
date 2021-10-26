// A Naive C++ program to find maximum sum rotation
#include<bits/stdc++.h>

using namespace std;

// Returns maximum value of i*arr[i]
int maxSum(int arr[], int n)
{
// Initialize result
int res = INT_MIN;

// Consider rotation beginning with i
// for all possible values of i.
for (int i=0; i<n; i++)
{

	// Initialize sum of current rotation
	int curr_sum = 0;

	// Compute sum of all values. We don't
	// actually rotate the array, instead of that we compute the
	// sum by finding indexes when arr[i] is
	// first element
	for (int j=0; j<n; j++)
	{
		int index = (i+j)%n;
		curr_sum += j*arr[index];
	}

	// Update result if required
	res = max(res, curr_sum);
}

return res;
}

// Driver code
int main()
{
	int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
	cout << maxSum(arr, n) << endl;
	return 0;
}
