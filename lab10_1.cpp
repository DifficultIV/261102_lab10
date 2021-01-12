// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";
#include<iostream>
#include<ctime>
#include<cstdlib>
#include<string>
using namespace std;
int main(){
    srand(time(0));
    string grade[] = {"A","B+","B","C+","C","D+","D","F","W"};
    int i=0;
    int x = rand()%9;
    cout << "Press Enter 3 times to reveal your future.";
    while (i < 3){
    cin.get();
    i++;
    }
    cout << "You will get "<< grade[x] << " in this 261102.";

}