#include<iostream.h>
#include<conio.h>

 int main(){
char hari;
	cout<<"PILIHAN :  "<<endl;
   cout<<"A= SENIN ";
   cout<<"B= SELASA ";
   cout<<"C= RABU ";
   cout<<"D= KAMIS ";
   cout<<"E= JUMAT ";
   cout<<"F= SABTU ";
   cout<<"G= AHAD ";
   cout<<endl;
   cout<<endl;

   cout<"MASUKAN KODE HARI(A-G): ";
   cin>>hari;

   if(hari=='a' || hari =='A')
   	cout<<" senin"<<endl;
   else if(hari=='b' || hari =='B')
   	cout<<" selasa"<<endl;
   else if(hari=='c' || hari =='C')
   	cout<<" rabu"<<endl;
   else if(hari=='d' || hari =='D')
   	cout<<" kamis"<<endl;
   else if(hari=='e' || hari =='E')
   	cout<<" jumat"<<endl;
   else if(hari=='f' || hari =='F')
   	cout<<"jumat"<<endl;
   else if(hari=='g' || hari =='G')
   	cout<<" ahad"<<endl;
getch();
return 0;
}



