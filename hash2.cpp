//aqui se aplica la funcion has1() de manera correcta
//se crear un exp=(cantidad de letras)-1. Y sum almacena a =1(ya que le resta 96) y ya no como su valor ascii.
//esa es la formula para obtener valores distintos.

#include<iostream>
#include<math.h>
using namespace std;

typedef long long ll;

ll hash1(string key) {
   ll sum = 0;
   
   int exp=key.size()-1;

   for (char c:key){

      sum+=(c-96)* pow(27, exp--);

   }   

   return sum; 


}

int main(){

     string key;

     for (;;){
     cout<<"Clave: ";
     cin>>key;
     if (key== ".") break;
     cout<<key<<"->"<<hash1(key)<<endl;

     }

     return 0;
 }   

 
