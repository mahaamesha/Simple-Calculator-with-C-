#include<iostream>
using namespace std;

void calc()
{
  //Program Kalkulator;
  cout<<"Kalkulator"<<endl;
  cout<<"______________________________________"<<endl;
  float x,y;
  char o;
  cout<<"Masukan Angka Pertama : ";
  cin>>x;
  cout<<"Masukan Operator      : ";
  cin>>o;
  cout<<"Masukan Angka Kedua   : ";
  cin>>y;
  
  cout<<"______________________________________"<<endl;

  if(o == '+'){
    cout<<x<<o<<y<<" = "<<x+y;
  }
  else if(o == '-'){
    cout<<x<<o<<y<<" = "<<x-y;
  }
  else if(o == '/'){
    cout<<x<<o<<y<<" = "<<x/y;
  }
  else if(o == '*'){
    cout<<x<<o<<y<<" = "<<x*y;
  }
  else {
    cout<<"input tidak sesuai";
  };
  cout<<endl;
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
  
  bool input = true;
  string n;
  while (input)
  {
    cout<<"Masukkan pilihan : ";
    cin>>n;
    if (n == "1" || n == "2")
      input = false;
  }
   
  cout<<"______________________________________"<<endl;

  if (n == "1")
    calc();
  else
    difr();

  return 0;
}
