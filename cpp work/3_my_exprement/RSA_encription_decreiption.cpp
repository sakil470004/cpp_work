//date: 2021-04-10
#include <bits/stdc++.h>

using namespace std;
#define ullint unsigned long long int

int main()
{//nicely done

//make a publice rsa key//i chose prime number p=2,q=7;

int p=2,q=7;
int T=(p-1)*(q-1);//6;
int e=5;//choose (e*d) % T=1;
//e must be less than T;
int d=11;
int N=p*q;//14;

//public key (e,N)//e=5,N=14//for encription
//private key(d,N)//d=11,N=14//for decription

//////////now encript B here ,let B=2;

int plain=2;
//equeation 
//(plain^e) %N;
int encriptMassige= pow(plain,e);
encriptMassige%=N;
cout<<encriptMassige<<endl;

/////////now decription 
//(encriptMassage^d) %N;
int decriptionMassage=pow(encriptMassige,d);
decriptionMassage%=N;
cout<<decriptionMassage<<endl;

    return 0;
}