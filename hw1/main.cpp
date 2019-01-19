
#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>

using namespace std;

/*********************************************
 **draw_card: draw card randomly and calculate total points
 **Parameters:
 **description of card
 **current total of either player or dealer
 *********************************************/

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
    else if (rank == 2)
        return 2;
    else if (rank == 3)
        return 3;
    else if (rank == 4)
        return 4;
    else if (rank == 5)
        return 5;
    else if (rank == 6)
        return 6;
    else if (rank == 7)
        return 7;
    else if (rank == 8)
        return 8;
    else if (rank == 9)
        return 9;
    else
        return 10;
}


int main() {
    
    //declare variables
    srand( (int) time(0) );
    int money = 100, bet, player_total, dealer_total;
    bool player;
    bool dealer;
    string card, response;
    
    while (money > 0 && money <= 1000)
    {
        player_total = 0;
        dealer_total = 0;
        dealer = true;
        player = true;
        
        cout << "You have $" << money <<". Enter bet: ";
        cin >> bet;
        
        //remind player that bet need to be less or equal than their money
        while (bet > money)
        {
            cout << "You only have $100 to bet. Enter bet: ";
            cin >> bet;
        }
        
        //first draw two cards randomly
        player_total += draw_card (card, player_total);
        cout << endl << "Your cards are: " << endl << "\t" << card << endl;
        
        player_total += draw_card (card, player_total);
        cout << "\t" << card << endl;
        
        cout << "Your total is " << player_total << ". Do you want another card (y/n)? ";
        cin >> response;
        if (response == "y" || response == "Y")
            player = true;
        else
            player = false;
        
        while (player)
        {
            player_total = draw_card (card, player_total);
        }
        
        while (dealer)
        {
        }
        
        //determine who wins
    }
        //end the game if either money equals zero or money is bigger than 1000
    return 0;
}
