#include <iostream> 
#include <string>
#include <cstdlib>
#include <ctime>


using namespace std ;

int main(){
    cout << "Press Enter 3 times to reveal your future.\n" ;
    cin.get();
    cin.get();
    cin.get();
    srand(time(0));
    int x = rand()%9 ;
    cout << "You will get "; 
    
    if (x==0) cout << "A+";
    else if (x==1) cout << "A";
    else if (x==2) cout << "B+" ;
    else if (x==3) cout << "B" ;
    else if (x==4) cout << "C+";
    else if (x==5) cout << "C";
    else if (x==6) cout << "D+";
    else if (x==7) cout << "D" ;
    else if (x==8) cout << "F";
    else if (x==9) cout << "W";

    cout << " in this 261102" ;
    return 0; 



}
// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";
