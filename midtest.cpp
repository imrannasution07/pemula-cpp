#include<iostream>
using namespace std;

int main()
{
    cout<<" Nama        : Ali Imran Nasution \n";
    cout<<" NIM         : 170170061 \n";
    cout<<" No Absen    : 14 \n \n \n";
	int Arr[100],n,i,small,large,large2,find;
	char try1;
    coba:
	cout<<" Masukkan jumlah larik yang di inginkan : ";
	cin>>n;

	for(i=0;i<n;i++)
	{
		cout<<" Masukkan nilai "<<"["<<i<<"]"<<":";
		cin>>Arr[i];
	}
    cout<<endl;
    
    int choice;
    cout<< " Silahkan pilih perintah yang ingin anda lakukan : \n";
    cout<<" 1. Mencari Bilangan Terbesar, Kedua Tebesar, Terkecil \n";
    cout<<" 2. Mencari Bilangan dalam Index Array \n";
    cout<< " masukkan angka 1-2 : ";
    cin>>choice;
    cout<<endl;
    if (choice==1)
{
	small=Arr[0];
	large=Arr[0];
	large2=Arr[0];
	 
	
	for(i=1;i<n;i++)
	    {
		if(Arr[i]<small)
			small=Arr[i];
		if(Arr[i]>large)
            large2 = large;
            large = Arr[i];
		if (Arr[i] > large2 && Arr[i] != large)
            large2 = Arr[i];
	}

	cout<<"\n Bilangan Terkecil : "<<small;
    cout<<"\n Bilangan Terbesar : "<<large;
    cout<<"\n Bilangan Kedua Terbesar : "<<large2;
    
    }
    
    else if(choice==2)
    {
        cout<<" masukkan bilangan yang ingin anda cari :";
        cin>>find;
        for(i=0;i<n;i++)
            if (Arr[i]==find)
                { cout<<find<<" ditemukan pada array "<<"["<<i<<"]";
                break; }
            if (Arr[i]!=find)
                { cout<<find<<" tidak ditemukan pada array ";}
    }
    
    else { cout<<" input salah !"; }    
    cout<<endl;
    cout<< " apakah anda ingin mencoba lagi? y/t : ";
    cin>>try1;
    if (try1=='y'||try1=='Y')
    { goto coba; }
    else if(try1=='t'||try1=='T')    
    { return 0; }
    else { cout<<" input salah!";}
    return 0;
}