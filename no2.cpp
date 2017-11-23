#include <iostream>

using namespace std;

int main()
{
    int n;
    int temp = 0;
    cout << "n :";
    cin >> n;
    int arr[n];
    for (int a=0; a<=n-1; a++){
        cin >> arr[a];
    }
    for (int b=0; b<=n-1; b++){
        if (arr [b]%2 == 0)
            {
                cout << arr[b] << " ";
                temp = temp + 1;
            }
    }
    if (temp == 0){
        cout << "There are no even number";
    }
    return 0;
}
