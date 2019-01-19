
#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>

using namespace std;

int draw_card (string &card, int current_total);

int draw_card (string &card, int current_total)
{
    //declare variables
    string ranks, suits;
    int rank = rand()%(13) + 1;
    int suit = rand()%(4) + 1;
}

int main() {
    
    return 0;
}
