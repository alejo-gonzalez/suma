# include <iostream>
# include <stdlib.h>
 using namespace std;
  int main(){
  int d[10];
  int s,p,i;
  s=0;
   cout<<"DIGITE DIEZ NUMEROS"<<endl;
    for(i=0;i<10;i++){
    cin>>d[i];
    s=s+d[i];
}
    p=s/10;
   cout<<"LA SUMA ES:"<<s<<endl;
   cout<<"EL PROMEDIO ES:"<<p<<endl;
  system("pause");
 return 0;
}
