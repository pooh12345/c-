#include <iostream>

using namespace std;

int main()
{

    long long int st = 0;

    int n;
    cin>>n;
    char a[n][3];

    for(int i = 0; i< n;i++) {


        for(int j = 0; j < 3;j++) {


            cin>>a[i][j];

        }







    }


for(int i = 0; i< n;i++) {


        for(int j = i + 1; j < n;j++) {

for(int k = 0; k < 3; k++) {
        if(a[i][k] == a[j][k]) {

            st++;
            break;

        }

}




        }

}




cout<<st;















    return 0;
}
