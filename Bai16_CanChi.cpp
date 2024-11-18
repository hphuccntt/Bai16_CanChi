#include <iostream>
using namespace std;
int main()
{ 
	int socan, sochi;
	string can[] = { "Canh", "Tan", "Nham", "Quy", "Giap", "At", "Binh", "Dinh", "Mau", "Ky"};
	string chi[] = { "Than", "Dau", "Tuat", "Hoi", "Ty", "Suu", "Dan", "Mao", "Thin", "Ty", "Ngo", "Mui" };
	for (int nam = 2000; nam <= 2024; nam++)
	{
		socan = nam % 10;
		sochi = nam % 12;
		cout <<"Nam"<< nam <<": "<< can[socan] << "\t";
		cout << chi[sochi] << endl;

	}
	return 0;
}