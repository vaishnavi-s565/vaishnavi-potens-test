#include <stdio.h>
using namespace std;
bool hasArrayTwoCandidates(int A[], int arr_size,
                           int sum)
{
    int l, r;
 
    sort(A, A + arr_size);

    l = 0;
    r = arr_size - 1;
    while (l < r) {
        if (A[l] + A[r] == sum)
            return 1;
        else if (A[l] + A[r] < sum)
            l++;
        else // A[i] + A[j] > sum
            r--;
    }
    return 0;
}
 
int main()
{
    int A[] = { 1, 2, 6, 9, 3 };
    int n = 13;
    int arr_size = sizeof(A) / sizeof(A[0]);
 
        if (hasArrayTwoCandidates(A, arr_size, n))
        cout << "Array has two elements"
                " with given sum";
    else
        cout << "Array doesn't have two"
                " elements with given sum";
 
    return 0;
}