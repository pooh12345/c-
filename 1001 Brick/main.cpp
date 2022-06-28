#include <iostream>
#include <string.h>
using namespace std;

int main()
{

    int low,col;


    cin>>low>>col;

    char a[low][col];


    for(int i = 0; i < low;i++ ) {


        for(int j = 0; j <col;j++ ) {

                cin>>a[i][j];



        }




    }

int temp[col];

for(int i = 0; i < col; i++) {

    cin>>temp[i];
}


int d = 0;
 for(int i = 0; i < col;i++ ) {

for(int k = 0; k < temp[i]; k++){
        for(int j = 0; j <low;j++ ) {

          if(a[j][i] != 'O' && a[j][i] != '#'){ // if there is nothing in the current box

					if(a[j+1][i] == 'O' || a[j+1][i] == '#'){ // if next box has stuff

						a[j][i] = '#'; // set current box to #

						break;

					}else if(j+1 == low-1){ // if next box is the last box

						a[j+1][i] = '#'; // set the next box to #

						break;

					}

				}else{

					break; // break if there is stuff already inside the box

				}







        }

}
 }




















    for(int i = 0; i < low;i++ ) {


        for(int j = 0; j < col;j++ ) {

                cout<<a[i][j];



        }

cout<<"\n";


    }






    return 0;
}
