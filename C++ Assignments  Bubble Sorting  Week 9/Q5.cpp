#include <iostream>
using namespace std;
int main()
{
    int arr[6] = {34, 45, 5, 63, 4, 1};
    int n = 6;
    int i;
    for (i = 0; i < n - 1; i++)
        if (arr[i] > arr[i + 1])
        {
            cout << "No" << endl;
            break;
        }
    if (i == n - 1)
        cout << "Yes" << endl;
    return 0;
    return 0;
}