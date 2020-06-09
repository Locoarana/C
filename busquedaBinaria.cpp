//La busqueda binaria nos ayuda para encontrar de manera rapida la posicion de un valor en un arreglo
#include<iostream>
#include<vector>
using namespace std;
//La funcion el profe la llama binsearch = "Busqueda Binaria"
int sort(int *a,int n, int v){//el primer argumento del parametro sería vector<int>& arr

    
    int iz=0;
    int der=n-1;
    
    while(iz <= der){
       int m=(iz+der)/2;
       if (a[m]==v)
           return m;
       else if (v<a[m]){
           der=m-1;       
       }      
       else{      
           iz=m+1; 
       }         
   }
   return -1;
}

int main(){
  int n=0;//una alternativa es usar vector<int> arr= {2,4,7,9,12,56,78};;
  
  cout<<"Ingresa cantidad de elementos: ";cin>>n;
  int *vec=new int[n]; 
  
  cout<<"\nIngresa los valores: "<<endl;
  for (int i=0;i<n;i++){
    cout<<i<<": "; cin>>vec[i];
  }
  cout<<"El valor se encuentra en la posicion: "<<sort(vec,n,17)<<endl; 
  cout<<"El valor se encuentra en la posicion: "<<sort(vec,n,10)<<endl;
  cout<<"El valor se encuentra en la posicion: "<<sort(vec,n,55)<<endl;
  cout<<"El valor se encuentra en la posicion: "<<sort(vec,n,40)<<endl;
  cout<<"El valor se encuentra en la posicion: "<<sort(vec,n,27)<<endl;
  cout<<"El valor se encuentra en la posicion: "<<sort(vec,n,88)<<endl;
  delete[] vec;
  return 0;
}
