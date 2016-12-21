#include<iostream>
#include<conio.h>
#include<string.h>
#include<dos.h>
#include<windows.h>

using namespace std;
int main()
{
  string ip, choose, answer, repeat;
  int select;
  cout<<"Do you have ADB Driver installed on your pc? (if you don't konw the asnswer insert 'no'): ";
  cin>>answer;
  if (answer=="no")
  {
    cout<<"Press enter to open the download page for the driver (Thanks to @Snoop05)"<<endl;
    system("pause");
    system("start chrome.exe http://forum.xda-developers.com/showthread.php?t=2588979");
  }
  else
  {
    cout<<"Insert the IP address of your device: ";
    cin>>ip;
    system(("adb connect "+ip).c_str());
    cout<<"Choose if you want to BACKUP or RESTORE file: ";
    cin>>choose;
    if(choose=="BACKUP"||choose=="Backup"||choose=="backup")
    {
  	   cout<<"Enter the number that corresponds to what you want to save: "<<endl
       <<"1. Photos (DCIM)"<<endl<<"2. Music"<<endl<<"3. Bluetooth"<<endl
       <<"4. WhastApp (all)"<<endl<<"5. All SDCard"<<endl;
       cin>>select;
       if(select==1)
       {
         cout<<"You've selected DCIM"<<endl;
         cout<<"Do you want to repeat the backup of DCIM daily? (at the time you've started the tool, Ctrl^C to shutdown)"<<endl;
         cin>>repeat;
         if(repeat=="yes"||repeat=="Yes")
         {
           while(true)
           {
             system("adb pull /storage/emulated/0/DCIM /Backup/Photos");
             system("cls");
             system("color 0A");
             cout<<"Complete";
             Sleep(86400000);
             system("color 01");
           }
         }
         else
         {
           system("adb pull /storage/emulated/0/DCIM /Backup/Photos");
           system("cls");
           system("color 0A");
           cout<<"Complete";
           return 0;
         }
       }
       if(select==2)
       {
         cout<<"You've selected Music"<<endl;
         cout<<"Do you want to repeat the backup of Music daily? (at the time you've started the tool, Ctrl^C to shutdown)"<<endl;
         cin>>repeat;
         if(repeat=="yes"||repeat=="Yes")
         {
           while(true)
           {
             system("adb pull /storage/emulated/0/Music /Backup/Music");
             system("cls");
             system("color 0A");
             cout<<"Complete";
             Sleep(86400000);
             system("color 01");
           }
         }
         else
         {
           system("adb pull /storage/emulated/0/Music /Backup/Music");
           system("cls");
           system("color 0A");
           cout<<"Complete";
           return 0;
         }
       }
       if(select==3)
       {
         cout<<"You've selected Bluetooth"<<endl;
         cout<<"Do you want to repeat the backup of Bluetooth daily? (at the time you've started the tool, Ctrl^C to shutdown)"<<endl;
         cin>>repeat;
         if(repeat=="yes"||repeat=="Yes")
         {
           while(true)
           {
             system("adb pull /storage/emulated/0/Bluetooth /Backup/Bluetooth");
             system("cls");
             system("color 0A");
             cout<<"Complete";
             Sleep(86400000);
             system("color 01");
           }
         }
         else
         {
           system("adb pull /storage/emulated/0/Bluetooth /Backup/Bluetooth");
           system("cls");
           system("color 0A");
           cout<<"Complete";
           return 0;
         }
       }
       if(select==4)
       {
         cout<<"You've selected WhatsApp"<<endl;
         cout<<"Do you want to repeat the backup of WhatsApp daily? (at the time you've started the tool, Ctrl^C to shutdown)"<<endl;
         cin>>repeat;
         if(repeat=="yes"||repeat=="Yes")
         {
           while(true)
           {
             system("adb pull /storage/emulated/0/WhastApp /Backup/WhastApp");
             system("cls");
             system("color 0A");
             cout<<"Complete";
             Sleep(86400000);
             system("color 01");
           }
         }
         else
         {
           system("adb pull /storage/emulated/0/WhastApp /Backup/WhastApp");
           system("cls");
           system("color 0A");
           cout<<"Complete";
           return 0;
         }
       }
       if(select==5)
       {
         cout<<"You've selected All SD Card"<<endl;
         cout<<"Do you want to repeat the backup of All SD Card daily? (at the time you've started the tool, Ctrl^C to shutdown)"<<endl;
         cin>>repeat;
         if(repeat=="yes"||repeat=="Yes")
         {
           while(true)
           {
             system("adb pull /storage/emulated/0 /Backup/Complete");
             system("cls");
             system("color 0A");
             cout<<"Complete";
             Sleep(86400000);
             system("color 01");
           }
         }
         else
         {
           system("adb pull /storage/emulated/0 /Backup/Complete");
           system("cls");
           system("color 0A");
           cout<<"Complete";
           return 0;
         }
       }
     }
     if(choose=="Restore"||choose=="RESTORE"||choose=="restore")
     {
       cout<<"Enter the number that corresponds to what you want to restore: "<<endl
       <<"1. Photos (DCIM)"<<endl<<"2. Music"<<endl<<"3. Bluetooth"<<endl
       <<"4. WhastApp (all)"<<endl<<"5. All SDCard"<<endl;
       cin>>select;
       if(select==1)
       {
         system("adb push /Backup/Photos /storage/emulated/0/DCIM");
         system("cls");
         system("color 0A");
         cout<<"Complete";
         return 0;
       }
       if(select==2)
       {
         system("adb push /Backup/Music /storage/emulated/0/Music");
         system("cls");
         system("color 0A");
         cout<<"Complete";
         return 0;
       }
       if(select==3)
       {
         system("adb push /Backup/Bluetooth /storage/emulated/0/Bluetooth");
         system("cls");
         system("color 0A");
         cout<<"Complete";
         return 0;
       }
       if(select==4)
       {
         system("adb push /Backup/WhastApp /storage/emulated/0/WhastApp");
         system("cls");
         system("color 0A");
         cout<<"Complete";
         return 0;
       }
       if(select==5)
       {
         system("adb push /Backup/Complete /storage/emulated/0");
         system("cls");
         system("color 0A");
         cout<<"Complete";
         return 0;
       }
       return 0;
     }
   }
}
