#include <iostream>

using namespace std;

int main()
{
int c = 0;
   int a[100];
   int n = 0;

   int s = 0;

   int pa = 1;
   int w = 1;
   int all = 0;
   while(true) {


    cin>>n;
    if(n == -1) {
        break;

    }
    a[c] = n;


    c++;

   }

   for(int i = 0; i <c; i++) {
s = 0;

    pa = 1;
    w = 1;
    all = 0;
for(int j = 0; j <a[i]; j++) {

  int store = w;
  w = pa + w + s;
  s = store;


all=w+s;

}

cout<<w<<"\t"<<all + 1;
cout<<"\n";
   }








    return 0;
}
