
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
    
    //assign values to variables
    if (rank == 1)
        ranks = "Ace";
    else if (rank == 2)
        ranks = "Two";
    else if (rank == 3)
        ranks = "Three";
    else if (rank == 4)
        ranks = "Four";
    else if (rank == 5)
        ranks = "Five";
    else if (rank == 6)
        ranks = "Six";
    else if (rank == 7)
        ranks = "Seven";
    else if (rank == 8)
        ranks = "Eight";
    else if (rank == 9)
        ranks = "Nine";
    else if (rank == 10)
        ranks = "Ten";
    else if (rank == 11)
        ranks = "Jack";
    else if (rank == 12)
        ranks = "Queen";
    else
        ranks = "King";
    
    if (suit == 1)
        suits = "Spades";
    else if (suit == 2)
        suits = "Hearts";
    else if (suit == 3)
        suits = "Diamonds";
    else
        suits = "Clubs";
    card = ranks + " of " + suits;
    
    if (rank == 1)
    {
        if (current_total + 11 > 21)
            return 1;
        else
            return 11;
    }
}

int main() {
    
    return 0;
}
