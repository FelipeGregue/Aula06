#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[]){

    cout << argc << endl;

    cout << "Bom dia " << argv[1] << " sua idade é: " << (2023 - atoi(argv[2])) << " anos" << endl;
    return 0;
}