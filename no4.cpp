#include <iostream>

using namespace std;

int main()
{
    int n1, n2, n3;
    int m1[3][3], m2[3][3];
    cout << "Enter 1st Matrix(9 number) :" << endl;
    for (int c=0; c<=2; c++){
        for (int d=0; d<=2; d++){
        cin >> m1[c][d];
        }
    }
    cout << "Matrix 1st :" << endl;
    for (int c=0; c<=2; c++){
        for (int d=0; d<=2; d++){
            cout << m1[c][d] << " ";
        }
        cout << endl;
    }
    cout << "Enter 2nd Matrix(9 number) :";
    for (int e=0; e<=2; e++){
        for (int f=0; f<=2; f++){
            cin >> m2[e][f];
        }
    }
    cout << "Matrix 2nd :" << endl;
    for (int c=0; c<=2; c++){
        for (int d=0; d<=2; d++){
            cout << m2[c][d] << " ";
        }
        cout << endl;
    } // user input the matrix
    /*int m1[3][3] = {
        1, 2, 3,
        4, 5, 6,
        7, 8, 1
    };
    int m2[3][3] = {
        1, 2, 3,
        3, 2, 1,
        4, 5, 2
    };*/ // default matrix
    cout << "then the multiplication of both matrix should be :" << endl;
    for (int a=0; a<=2; a++){
      n1 = (m1[a][0]*m2[0][0])+(m1[a][1]*m2[1][0])+(m1[a][2]*m2[2][0]);
      n2 = (m1[a][0]*m2[0][1])+(m1[a][1]*m2[1][1])+(m1[a][2]*m2[2][1]);
      n3 = (m1[a][0]*m2[0][2])+(m1[a][1]*m2[1][2])+(m1[a][2]*m2[2][2]);
    cout << n1 << " " << n2 << " " << n3 << endl;
    }
    return 0;
}
