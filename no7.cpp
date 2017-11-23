#include <iostream>
using namespace std;


bool isPrime(int num) {
	bool prime = false;
	
	if(num == 2 || num == 3 || num == 5 || num == 7)
		prime = true;
	else if(num % 2 != 0 && num % 3 != 0 && num % 5 != 0 && num % 7 != 0)
		prime = true;
		
	return prime;
}

//Fungsi untuk membuat array bilangan prima
int* getPrime(int n) {
	int count = 0;
	int* prime = new int[n];
	
	for(int i = 1; count < n; i++) {
		if(isPrime(i)) {
			prime[count] = i;
			count++;
		}
	}
	
	return prime;
}

main() {
	int n;
	
	cout<<"Masukkan n: ";
	cin>>n;
	
	//Memanggil fungsi untuk mendapatkan bilagan prima
	int* prima = getPrime(n);
	
	cout<<endl<<"Hasilnya: "<<endl;
	
	//Menampilkan hasil
	for(int i = 0; i < n; i++) {
		cout<<prima[i]<<endl;
	}
}
