// PROGRAM TURUNAN POLINOMIAL
#include<iostream>

using namespace std;

int main() {
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
    cout<<endl; cout<<endl;

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
