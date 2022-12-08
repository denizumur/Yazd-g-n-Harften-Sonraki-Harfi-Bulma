

#include <iostream>
#include <math.h>
#include<string>
using namespace std;
//bu program girdiğiniz metindeki her harften bir sonra gelen harfi, her sayıdan sonra gelen sayıyı yazar.
//ve metindeki harf-sayı-bosluk sayısını bulur.
int main() {
	string metin;
	int sayisayac = 0;
	int harfsayac = 0;
	int bosluksayac = 0;
	cout << "Metin Giriniz" << endl; getline(cin, metin);
	for (int i = 0; i < metin.length(); i++) {
		if (isalpha(metin[i])) {

			harfsayac++;
			if (metin[i] == 'z') {
				metin[i] = 'a';
			}
			else  {
				metin[i]++;
			}
		}
			else if (isalnum(metin[i])){
			metin[i] ++;
			sayisayac++;
			}
			else if (isspace(metin[i])) {
			bosluksayac++;

		}
		
	}
	cout << "Yeni Metin= " << metin << endl;
	cout << "Metinde " << sayisayac << " sayi, " << harfsayac << " harf, " << bosluksayac << " bosluk vardir." << endl;
	system("PAUSE");
	return 0;
	}