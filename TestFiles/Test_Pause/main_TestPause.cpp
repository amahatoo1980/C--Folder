#include<iostream>
#include<cstdlib>
using namespace std;


int main(){
    for (size_t i = 0; i <= 7; i++)
    {
        cout << "i = " << i << endl;
        if (i == 3){
            cout << "Call the pause program\n";
            system("PAUSE");
            cout << "the pause program is terminated. Resuming ....\n";

        }
    
    }
    return 0;
    
}