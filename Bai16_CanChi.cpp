#include <iostream>
using namespace std;
int main()
{ 
	int socan, sochi, nam;
	cout << "nhap so can: "; cin >> socan;
	cout << "nhap so chi: "; cin >> sochi;
	cout << "nhap nam: "; cin >> nam;
	string can[] = { "Canh", "Tan", "Nham", "Quy", "Giap", "At", "Binh", "Dinh", "Mau", "Ky"};
	string chi[] = { "Than", "Dau", "Tuat", "Hoi", "Ty", "Suu", "Dan", "Mao", "Thin", "Ty", "Ngo", "Mui" };
	socan = nam % 10;
	sochi = nam % 12;
	cout << can[socan] << "\n";
	cout << chi[sochi] << "\n";
	return 0;
}