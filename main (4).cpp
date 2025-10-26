/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;
class Karakter {
public:
	string adi;
	int can;
	void kosma() {
		cout<<adi<<"KoEuyor"<<endl;
	}
};

int main()
{
	Karakter karakter1;
	karakter1.adi ="Mini Pekka";
	karakter1.can =4200;

	Karakter karakter2;
	karakter2.adi="D0ksir Golemi";
	karakter2.can=8000;

	cout<<"Karaktater1:"<<karakter1.adi<<endl;
	cout<<"Karaktater2:"<<karakter2.adi<<endl;

	karakter1.kosma();
	karakter2.kosma();


    return 0;
}