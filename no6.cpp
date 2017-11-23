#include <iostream>
using namespace std;

//Fungsi untuk input array dan status bool
float averagePositive(int input[10], bool status);

int main()
{
  int input[10];

//Proses untuk input angka oleh user
  cout << "Masukkan Bilangan Pada Array = " << endl;
  for (int i = 0; i < 10; i++) {
    cin >> input[i];
  }

  cout << "Rata - Rata Angka Positif = " << averagePositive(input, true) << endl;
  cout << "Rata - Rata Angka Negatif = " << averagePositive(input, false) << endl;
}

float averagePositive(int input[10], bool status)
{
  float positif = 0, negatif = 0, jumlahPos = 0, jumlahNeg = 0;
  
//Proses menghitung jumlah positif dan negatif
  for (int i = 0; i < 10; i++) {
    if (input[i] > 0) {
      positif += input[i];
      jumlahPos++;
    } else {
      negatif += input[i];
      jumlahNeg++;
    }
  }

  if (status) {
    return positif / jumlahPos;
  } else {
    return negatif / jumlahNeg;
	
  }
}
