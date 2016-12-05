#include <iostream.h>
#include <conio.h>
#include<stdio.h>
main()
{
long int jur,wkt,umr,kls,jum,harga,menu_utama;
char stj ,nama[50],ktp[25];
up :
{cout<<"\n\t====================================================\n";
cout<<"\t|||   SELAMAT DATANG PEMESANAN TIKET KERETA API  |||\n";
cout<<"\t||| PEMESANAN KHUSUS PEMBERANGKATAN DARI JAKARTA |||\n";
cout<<"\t====================================================\n\n";}

{menu_utama:
cout<<"\nMasukkan Nama Anda    : ";gets (nama);
cout<<"Masukkan NO KTP        : ";cin>>ktp;
cout<<endl;
jur :
cout<<"\t\t\t=================\n";
cout<<"\t\t\t>>   JURUSAN   <<\n";
cout<<"\t\t\t=================";
cout<<endl;
cout<<"\t\t\t| 1.Bandung\t|   \n";
cout<<"\t\t\t| 2.Solo\t|\n";
cout<<"\t\t\t| 3.Semarang\t|\n";
cout<<"\t\t\t| 4.Surabaya\t|\n";
cout<<"\t\t\t| 5.Banyuwangi\t|\n";
cout<<"\t\t\t=================\n";
cout<<"\t\t\tPilih[1-5]: ";cin>>jur;clrscr();
wkt :
cout<<"\t\t\t=================\n";
cout<<"\t\t\t>>    WAKTU    <<\n";
cout<<"\t\t\t=================";
cout<<endl;
cout<<"\t\t\t| 1.Pagi\t|\n";
cout<<"\t\t\t| 2.Siang\t|\n";
cout<<"\t\t\t| 3.Malam\t|\n";
cout<<"\t\t\t| 4.Kembali\t|\n";
cout<<"\t\t\t=================\n";
cout<<"\t\t\tPilih[1-4]: ";
cin>>wkt;clrscr();
if (wkt==4)
{goto jur; }

umr :
cout<<"\t\t\t=================\n";
cout<<"\t\t\t>>    USIA    <<\n";
cout<<"\t\t\t=================";
cout<<endl;
cout<<"\t\t\t| 1.Dewasa\t|\n";
cout<<"\t\t\t| 2.Anak-anak\t|\n";
cout<<"\t\t\t| 3.Kembali\t|\n";
cout<<"\t\t\t=================\n";
cout<<"\t\t\tPilih[1-3]: ";
cin>>umr;clrscr();
if (umr==3)
{goto wkt; }
cout<<"\t\t\t=================\n";
cout<<"\t\t\t>>    KELAS    <<\n";
cout<<"\t\t\t=================";
cout<<endl;
cout<<"\t\t\t| 1.Eksekutif\t|\n";
cout<<"\t\t\t| 2.Bisnis\t|\n";
cout<<"\t\t\t| 3.Ekonomi\t|\n";
cout<<"\t\t\t| 4.Kembali\t|\n";
cout<<"\t\t\t=================\n";
cout<<"\t\t\tPilih[1-4]: ";
cin>>kls;
cout<<endl;
if (kls==4)
{goto umr; }
cout<<endl;
cout<<"Masukkan Jumlah Pemesanan : ";cin>>jum;clrscr();
cout<<"\nJumlah Tiket Yang di Pesan : "<<jum<<" Tiket";

{
if (kls==1)
{
cout<<"\nKelas Yang Dipilih       : Eksekutif";
cout<<"\nHarga Satuan Tiket       : Rp350000";}
else if (kls==2)
{cout<<"\nKelas Yang Dipilih       : Bisnis";
cout<<"\nHarga Satuan Tiket       : Rp250000";}
else
{cout<<"\nKelas Yang Dipilih       : Ekonomi";
cout<<"\nHarga Satuan Tiket       : Rp100000";}
}

cout<<"\n--------------------------------------";
{
if (kls==1)
{harga=jum*350000;
cout<<"\nTotal Harga = Rp"<<harga;}
else if (kls==2)
{harga=jum*250000;
cout<<"\nTotal Harga = Rp"<<harga;}
else
{harga=jum*100000;
cout<<"\nTotal Harga = Rp"<<harga;}
}
cout<<endl;
cout<<"\nApakah Anda Setuju [y/t]: ";cin>>stj;clrscr();
if (stj=='y')
{goto tkt;}
else
{goto up;}

tkt:
cout<<"======================================================"<<endl;
cout<<"           TIKET KERETA YANG ANDA PESAN"<<endl;
cout<<"\n======================================================"<<endl;

cout<<"Nama        : "<<nama<<endl;
cout<<"NO KTP        : "<<ktp<<endl;
switch(jur)
{case 1:
 cout<<"Jurusan     : Bandung"<<endl;
 break;
case 2:
 cout<<"Jurusan     : Solo "<<endl;
 break;
case 3:
 cout<<"Jurusan     : Semarang"<<endl;
 break;
case 4:
 cout<<"Jurusan     : Surabaya"<<endl;
 break;
default:
 cout<<"Jurusan     : Banyuwangi"<<endl;
 }
switch(umr)
{case 1:
 cout<<"Usia        : Dewasa"<<endl;
 break;
default:
 cout<<"Usia        : Anak-Anak "<<endl;
 break; }
 switch(kls)
{case 1:
 cout<<"Kelas        : Eksekutif"<<endl;
 break;
case 2:
 cout<<"Kelas        : Bisnis "<<endl;
 break;
default:
 cout<<"Kelas        : Ekonomi"<<endl;
 break;}
 cout<<endl;
 switch(wkt)
{case 1:
 cout<<"Jadwal Pemberangkatan Pagi pukul 07:30"<<endl;
 break;
case 2:
 cout<<"Jadwal Pemberangkatan Siang pukul 13:45 "<<endl;
 break;
default:
 cout<<"Jadwal Pemberangkatan Malam Pukul 19:20"<<endl;
 break;  }

cout<<"Jumlah Tiket Yang Dipesan "<<jum<<endl;
cout<<"\n------------------------------------------------------"<<endl;
cout<<"Total         : Rp"<<harga<<",00"<<endl;
cout<<endl;
cout<<"\n======================================================"<<endl;
cout<<"Terimakasih Telah Memesan Tiket Pada Kami"<<endl;
cout<<"Apakah Anda Ingin Memesan Tiket Lagi?[y/t] : ";cin>>stj;
if (stj=='y')
{goto menu_utama;}
else
clrscr();
{
cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;
cout<<"\t.:Terima Kasih Semoga Perjalanan Anda Menyenangkan:.";}}

}