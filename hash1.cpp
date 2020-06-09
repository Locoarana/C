//No se usa la funcion, simplemente recibe un string. Ejem: cosa
//sum almacena sus valores ascii, sin embargo veremos un mismo resultado para saco, cosa,saco, soca.
//no es la manera correcta de obtener diferentes valores.
#include<iostream>

using namespace std;

typedef long long ll;

ll hash1(string key) {
   ll sum = 0;

   for (char c:key){

      sum+=c;

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

 
