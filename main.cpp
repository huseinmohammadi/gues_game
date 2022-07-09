/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <unistd.h>
#include <stdlib.h>


using namespace std;
int arr[16];
int star[16] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

void fillnumber(int number){
    while(true){
        int randomNumber = (rand() % 16);
        if (arr[randomNumber]==0){
            arr[randomNumber]=number;
            break;
        }
    }
}

void printa() {
    for (int i =0;i<4;i++){
        cout<<"|-----|-----|-----|-----|"<<endl;
        cout<<"|";
        for (int j =0;j<4;j++){
            cout<<"  " << arr[(i*4)+j] <<"  |";
        }
        cout << '\n';
    }
    cout<<"|-----|-----|-----|-----|"<<endl;
}

void printb() {
    for (int i =0;i<4;i++){
        cout<<"|-----|-----|-----|-----|"<<endl;
        cout<<"|";
        for (int j =0;j<4;j++){
            cout<<"  " << star[(i*4)+j] <<"  |";
        }
        cout << '\n';
    }
    cout<<"|-----|-----|-----|-----|"<<endl;
}
int main()
{
    unsigned int microsecond = 1000000;
    for(int i=1;i<=8;i++){
        fillnumber(i);
        fillnumber(i);
    }
    
    printa();
    usleep(5 * microsecond);
    system("clear");
     
    
    while (true) {
        printb();
        int index1, index2;
        cin >> index1 >> index2;
        index1 -= 1;
        index2 -= 1;
        star[index1] = arr[index1];
        star[index2] = arr[index2];
        system("clear");
        printb();
        if(star[index1]!=star[index2]){
            star[index1] = 0;
            star[index2] = 0;
        }
        usleep(5 * microsecond);
        system("clear");
    }
}

