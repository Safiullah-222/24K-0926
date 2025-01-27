#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 20, 90, 100, 60};
    int *ptr = arr;
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (*(ptr + j) > *(ptr + j + 1)) {
                int temp = *(ptr + j);
                *(ptr + j) = *(ptr + j + 1);
                *(ptr + j + 1) = temp;
            }
        }
    }

    cout << *(ptr + n - 2);

    return 0;
}
