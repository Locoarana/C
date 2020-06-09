#include<iostream>
#include<functional>
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
      auto h=[&](int k, int i){return (hp(k)+i)%29;};
      for (int i=0; i<n;i++){
          auto idx=h(key, i);
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
    hc->add(34);         
    hc->add(67);         
    hc->add(92);         
    hc->add(96);         
    hc->add(8);         
    hc->add(5);         
    hc->add(3);         
    hc->add(2);         
    hc->add(20);         

    delete hc;
    return 0;

}
