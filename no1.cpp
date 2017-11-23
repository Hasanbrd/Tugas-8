#include <iostream>

using namespace std;

int main()
{
    int arr[10], bil1, bil2;
    for (int a=0; a<=9; a++){
        cout << "Masukkan angka ke-" << a+1 << ":";
        cin >> arr[a];
    }
    bil1 = arr[0];
    bil2 = arr[0];
    for (int a=0; a<=9; a++){
        if (bil1 >= arr[a]){
            bil1 = arr[a];
        }
        else if(bil2 <= arr[a]){
            bil2=arr[a];
        }
    }
    cout << bil1*bil2 << endl;
    return 0;
}
