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
  cout<<"______________________________________"<<endl;
  int orde;
    char koef;

    cout<<"Pangkat Tertinggi: ";
    cin>>orde;

    //cetak bentuk umum polinom
    for (int i = orde; i >= 0; i--)
    {
        koef = (char)65+orde-i;
        if (i != 0)
        {
            cout<<koef<<"x^"<<i<<" + ";
        }
        else
        {
            cout<<koef;
        }
    }
    cout<<endl;

    //masukkan nilai koefisien ABC...Z
    int val[orde+1];
    for (int i = orde; i >= 0; i--)
    {
        koef = (char)65+orde-i;
        cout<<koef<<": ";
        cin>>val[i];
    }
    cout<<endl;
    
    //cetak polinomial hasil input
    cout<<"Polinomial: "<<endl;
    for (int i = orde; i >= 0; i--)
    {
        if (i != 0)
        {
            cout<<val[i]<<"x^"<<i<<" + ";
        }
        else
        {
            cout<<val[i];
        }
    }
    cout<<endl; 
    cout<<"______________________________________"<<endl;

    //koefisienbaru
    int hasilDerv[orde];
    cout<<"Turunan Polinomial: "<<endl;
    for (int i = orde-1; i >= 0; i--)
    {
        hasilDerv[i] = val[i+1] * (i+1);
        if (i != 0)
        {
            if (hasilDerv[i] == 0)
            {
                cout<<"";
            }
            else if (hasilDerv[i] > 0)
            {
                cout<<"+ "<<hasilDerv[i]<<"x^"<<i<<" ";
            }
            else if (hasilDerv[i] < 0)
            {
                hasilDerv[i] = (-1) * hasilDerv[i];
                cout<<"- "<<hasilDerv[i]<<"x^"<<i<<" ";
            }
        }
        else
        {
            if (hasilDerv[0] == 0)
            {
                cout<<"";
            }
            else if (hasilDerv[0] > 0)
            {
                cout<<"+ "<<hasilDerv[i];
            }
            else if (hasilDerv[i] < 0)
            {
                hasilDerv[i] = (-1) * hasilDerv[i];
                cout<<"- "<<hasilDerv[i];
            }
        }
    }
    cout<<endl;
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
