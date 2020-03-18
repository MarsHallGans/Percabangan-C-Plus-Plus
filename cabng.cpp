#include <iostream>
using namespace std;

int main()
{
	string pass;
	
	cout <<"=========From Login Admin=========\n";
	cout <<"Masukan Password : "; cin >> pass;
	
	if (pass == "MarsHall"){
		
		cout <<"Selamat Datang Admin\n";
		
	} else {
		
		cout <<"Passwordnya salah anjing!!!\n";
	}
	
}
