#include<bits/stdc++.h>
using namespace std;
void kthSmallest(int arr[], int N, int K)
{
    sort (arr, arr + N);
    cout<<"Kth smallest element is: "<<arr[K-1]<<endl;
    cout<<"Kth largest element is: "<<arr[N - K]<<endl;
}
int main()
{
    int arr[] = {12, 3, 5, 7, 19};
    int N = sizeof(arr) / sizeof(arr[0]), K = 2;
    kthSmallest (arr, N, K);
    return 0;
}