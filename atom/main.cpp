#include <iostream>
#include <list>
#include <iterator>
#include <vector>
#include <algorithm>
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
  std::vector<int> arr;
    std::vector<int> arr2;

  int n;

cin>>n;
int k;

for(int i = 0; i < n;i++) {


    cin>>k;
     arr.push_back(k);


}

int re = 0;
for(int j = 0; j < n;j++) {

       re = abs(arr[j] - arr[j + 1]);


cout<<re;
}





    return 0;
}
