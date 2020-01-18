#include<iostream>
using namespace std;

void calc()
{
  //Program Kalkulator;
  cout<<"Kalkulator"<<endl;
}

void difr()
{
  //Program Turunan Polinom;
  cout<<"Turunan"<<endl;
}

int main()
{
  cout<<"Program Kalkulator dan Turunan Polinom"<<endl;
  cout<<"______________________________________"<<endl;
  cout<<"1. Kalkulator \n" << "2. Turunan \n";
  cout<<"Masukkan pilihan : ";

  char n;
  cin>>n; 

  cout<<"______________________________________"<<endl;

  if (n == '1')
    calc();
  else
    difr();

  return 0;
}
