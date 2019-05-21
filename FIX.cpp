#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<cstring>
#include<string.h>
#include<windows.h>
#include<iomanip>
using namespace std;

int main()
{
    system("Color fc");
cout<<endl;
cout<<"=======================================================================================================================\n";
cout<<"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<Selamat Datang di MIRANO.Net>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n";
cout<<"=======================================================================================================================\n";
int i;
char user[10];
char pass[10];
for (i=1; i<=3; i++)
        {
            string user="";
            string pass="";
cout<<"===========User============\n";cin>>user;
cout<<"===========Pass============\n";cin>>pass;

        if (user=="admi" && pass=="2018")
        {
            cout<<"\n\nAnda Berhasil Masuk.\n"<<endl;
            goto Paket;

        }
        else
        {
            cout<<"\n\nMaaf User dan Pass yang dimasukkan salah.\n\n"<<endl;
            system("CLS");
            return main();
        }
        }
        Paket:
        system("CLS");
        int pil;
        cout<<"===============================================================================================================\n";
        cout<<"||                                             Daftar Pilihan Paket                                          ||\n";
        cout<<"===============================================================================================================\n";
        cout<<"||                    1. VIP                         ||                      2. Regular                      ||\n";
        cout<<"===============================================================================================================\n";
        cout<<"||                                                 Benefit                                                   ||\n";
        cout<<"===============================================================================================================\n";
        cout<<"||                     *AC                           ||------------------------------------------------------||\n";
        cout<<"||            *Download Up To 10 Mbps                ||              *Download Up To 5 Mbps                  ||\n";
        cout<<"||            *Free Smoking Area                     ||              *Smoking Area                           ||\n";
        cout<<"||            *Menu Makan Gratis                     ||------------------------------------------------------||\n";
        cout<<"===============================================================================================================\n";
        ulangi:
            cout<<"Masukkan Pilihan Anda:";
            cin>>pil;
            switch(pil)
            {
            case 1:
                    struct billing_VIP;
    {
        system("CLS");
        char user[10];
        char no[5];
        int menit;
        int jam;
        int detik;
        int jamTVIP;
        int jamH;
        int jamM;
        int jamS;
        cout<<endl;
        cout<<"===============================================================================================================\n";
        cout<<"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<MIRANO.Net>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n";
        cout<<"===============================================================================================================\n";
        cout<<"=======================================Tarif Rp.50 setiap 10 detik(VIP)========================================\n"<<endl;
        cout<<"Username:\n";cin>>user;
        cout<<"Nomor Komputer:\n";cin>>no;
        cout<<"Masukkan Jam:\n";cin>>jam;
        cout<<"Masukkan Menit:\n";cin>>menit;
        cout<<"Masukkan Detik:\n";cin>>detik;
        jamH=(jam*120*50);
        jamM=(menit*50);
        jamS=(detik*50)/10;
        jamTVIP=jamH+jamM+jamS;
        goto Makanan_Gratis;

        Makanan_Gratis:
            char menu[20];
            cout<<"==================================Menu Paket Makan Gratis==================================================\n";
            cout<<"                1.Indomie+Telor               ||                           2.Nasi+Ayam                     \n";
            cout<<"===========================================================================================================\n";
            cout<<"Masukkan Menu Paket Makan:";cin>>menu;
            system("CLS");
            goto Bill;

        Bill:
        cout<<"Username:"<<user<<endl;
        cout<<"Nomor Komputer:"<<no<<endl;
        cout<<"Paket Makan:"<<menu<<endl;
        cout<<"Total Pembayaran: Rp.\n"<<jamTVIP<<",-";
        goto Intro;

        Intro:
            {
        cout<<endl;
        cout<<"---------------------------------------------------------------------------------------------------------------\n";
        cout<<"========================================Thanks For Using MIRANO.Net============================================\n";
        cout<<"=====================Terima Kasih Atas Kedatangannya|Kenyamanan Anda Adalah Prioritas Kami=====================\n";
        cout<<"==================================Personal Contact/Customer Service:0896-17053416==============================\n"<<endl;
        break;
            }

    }
    case 2:
           struct billing_Regular;
    {
        system("CLS");
        char user[10];
        char no[2];
        int menit;
        int jam;
        int detik;
        int t;
        int jamTR;
        int jamH;
        int jamM;
        int jamS;
        cout<<endl;
        cout<<"===============================================================================================================\n";
        cout<<"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<MIRANO.Net>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n";
        cout<<"===============================================================================================================\n";
        cout<<"======================================Tarif Rp.25 setiap 10 detik(Regular)=====================================\n"<<endl;
        cout<<"Username:\n";cin>>user;
        cout<<"Nomor Komputer:\n";cin>>no;
        cout<<"Masukkan Jam:\n";cin>>jam;
        cout<<"Masukkan Menit:\n";cin>>menit;
        cout<<"Masukkan Detik:\n";cin>>detik;
        jamH=(jam*120*25);
        jamM=(menit*25);
        jamS=(detik*25)/10;
        jamTR=jamH+jamM+jamS;

        system("CLS");
        cout<<"Username:"<<user<<endl;
        cout<<"Nomor Komputer:"<<no<<endl;
        cout<<"Total Pembayaran: Rp.\n"<<jamTR<<",-\n";

        cout<<endl;
        cout<<"---------------------------------------------------------------------------------------------------------------\n";
        cout<<"========================================Thanks For Using MIRANO.Net============================================\n";
        cout<<"=====================Terima Kasih Atas Kedatangannya|Kenyamanan Anda Adalah Prioritas Kami=====================\n";
        cout<<"=====================================Customer Service:0896-1705-3416===========================================\n";
        cout<<"==================================Personal Contact/Customer Service:0896-17053416==============================\n"<<endl;
        break;
        }
        default:
    cout<<"Pilihan Anda Salah!";
    system("CLS");
    goto Paket;
}
}

