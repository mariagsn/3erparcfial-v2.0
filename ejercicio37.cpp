#include<iostream>
using namespace std;
int main(){
 int t,num;
 int acum=0;
 int acum2=0;
   cout<<"digite el tamaño del vector 1 ";
   cin>>t;
 int vector1[t];
 for(int i=1; i<=t; i++) {
   cout<<"Digite un número "<<i<<endl;
   cin>>num;
 vector1[i]=num;
  acum=acum+vector1[i];
 } 
  cout<<"digite el tamaño del vector 2 ";
  cin>>t;
 int vector2[t];
  for(int i=1; i<=t; i++) {
   cout<<"Digite un número "<<i;
   cin>>num;
 vector2[i]=num;
   acum2=acum2+vector2[i];
}
  int vector3[2];
  vector3[1]=acum+acum2;
  cout<<"resultado total es igual a "<<vector3[1]; 
return 0;
}