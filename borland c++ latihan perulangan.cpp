#include<conio.h>
#include<iostream.h>
main()
{
	int bill;
   cout<<"\t\t Latihan perulangan c++ dengan for "<<endl;
	cout<<"\t\t===================================="<<endl;
	cout<<"\n 1. menapilkan deret angka 1 sampai 10 : ";
	for (bill=0;bill<=10;bill++)
	{
	cout<<bill;
	}
   cout<<"\n 2. menampilkan deret bilagan genap dari angka 1 sampai 10 : ";
   for (bill=0;bill<=10;bill+=2)
   {
   cout<<bill;
   }
   cout<<"\n 3. menampilkan deret bilagan ganjil dari angka 1 sampai 10 : ";
   for (bill=1;bill<=10;bill+=2)
   {
   cout<<bill;
   }

getch();
}
