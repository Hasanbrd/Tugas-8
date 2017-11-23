#include <iostream>

using namespace std;

int main()
{
    int n, num=0;
    cin >> n;
    for (int a=1; a<=n+1; a++){
        if (a!=n){
            if (n%a==0){
                num += a;
            }
        }
    }
    if (num != n){
        cout << "This is not a perfect number";
    }
    else {
        cout << "This is a perfect number.";
    }
    return 0;
}
