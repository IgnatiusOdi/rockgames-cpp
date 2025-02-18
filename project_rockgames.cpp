#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
using namespace std;
int main()
{
	srand(time(NULL));
	char n1 = 'y';
	while(n1 == 'y')
	{
		system("cls");
		cout<<"================================================================================"<<endl;
		cout<<"ATURAN PERMAINAN"<<endl;
		cout<<"--------------------------------------------------------------------------------"<<endl;
		cout<<"Komputer akan menyediakan jumlah batu secara acak."<<endl;
		cout<<"Pengambilan jumlah batu antara 1 sampai 3."<<endl;
		cout<<"Setelah mengambil batu dan jumlah batu menjadi <= 0, maka dianggap kalah."<<endl;
		cout<<"================================================================================"<<endl;
		cout<<endl;
		cout<<"Pilih giliran"<<endl;
		cout<<"1. Computer mulai dulu."<<endl;
		cout<<"2. Anda mulai dulu."<<endl;
		int n;
		bool x;
		while(true)
		{
			cout<<"Pilihan Anda= ";
			n=getch();
			if(n=='v'||n=='V'||n=='1')
				{
					cout<<"1"<<endl;
					x=false;
					break;
				}
			else if(n=='b'||n=='B'||n=='2')
				{
					cout<<"2"<<endl;
					x=true;
					break;
				}
			else
				cout<<"Inputan salah !"<<endl;
		}
		int batu = (rand() % 11 + 5) * 4;
		if(n=='2' || n =='v' || n == 'V')
			batu=batu+1;
		else
			batu = batu + rand()%3+2;
		cout<<"Jumlah batu yang disediakan = "<<batu<<endl;
		cout<<endl;
		//debugging --> proses mencari kesalahan
		while(batu > 0)
		{
			int ambil;
			if(x == false)
			{
				if(batu%4==2)
				{
					ambil=1;
				}
				else if(batu%4==3)
				{
					ambil=2;
				}
				else if(batu%4==0)
				{
					ambil=3;
				}
				else 
					ambil = rand()%3 + 1;
					
				if(ambil > batu)
					ambil = batu;
					
				cout<<"Jumlah yang diambil komputer= "<<ambil<<endl;
				x = true;
			}
			else
			{
				cout<<"Jumlah batu yang Anda ambil= ";
				cin>>ambil;
				if(ambil>=1 && ambil<=3 && ambil<=batu)
					x=false;
			}
			
				if(ambil<1 || ambil>3 || ambil>batu)
				{
					cout<<"Inputan tidak valid"<<endl;
					cout<<endl;
				}
				else
				{
					batu=batu-ambil;
					cout<<"Sisa batu sekarang= "<<batu<<endl;
					cout<<endl;
				}
		}
		if (batu==0&&n==false)
			cout<<"Komputer menang!"<<endl;
		else
			cout<<"Anda menang!"<<endl;
		cout<<endl;
		n=0;
		cout<<"Ulangi permainan? (y/n) ";
		cin>>n1;
		if (n1!='y')
		exit;
	}
}
