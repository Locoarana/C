#include<iostream>
#include<functional>
#include<math.h>
using namespace std;

class HashCerrado {
   int **elems;

   int n;
public:   
   HashCerrado(int n=100) : elems(new int*[n]), n(n){}

   ~HashCerrado(){
      delete []elems;
   }

   void add(int key) {
      
      function<int(int)> hp=[](int k){return k%19; };
      auto h=[&](int k, int i) { return (hp(k)+int(pow(i,2))) %31; };
      for (int i=0; i<n;i++){
          int idx=h(key, i);
          cout<<idx <<" ";
          if (elems[idx] ==nullptr){
              elems[idx] = new int;
              *(elems[idx]) = key;
              break;
          }
      }
      cout<<endl;
   }
};


int main(){

    HashCerrado *hc= new HashCerrado();

    hc->add(6);         
    hc->add(27);         
    hc->add(9);         
    hc->add(65);         
    hc->add(31);         
    hc->add(35);         
    hc->add(12);         
    hc->add(21);         
    hc->add(3);         
    hc->add(2);         

    delete hc;
    return 0;

}
