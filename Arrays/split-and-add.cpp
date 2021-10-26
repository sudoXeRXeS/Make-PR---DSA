// CPP program to split array and move first
// part to end.
#include <iostream>
using namespace std;

void splitArr(int arr[], int n, int k)
{
	for (int i = 0; i < k; i++) {

		// Rotate array by 1.
		int x = arr[0];
		for (int j = 0; j < n - 1; ++j)
			arr[j] = arr[j + 1];
		arr[n - 1] = x;
	}
}

// Driver code
int main()
{
	int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
	
	int position;
    cin>>position;

	splitArr(arr, n, position);

	for (int i = 0; i < n; ++i)
		cout <<" "<< arr[i];

	return 0;
}

// This code is contributed by shivanisinghss2110
