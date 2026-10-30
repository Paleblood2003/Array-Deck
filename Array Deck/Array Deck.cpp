// Array Deck.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
string getSuitName(int suitNum);
void suitTester();
void rankTester();
string getRankName(int rankNum);
void initializeDeck();
void deckTester();

string deck[52];

int main()
{
    deckTester();
}

string getSuitName(int suitNum)
{
    string suits[] = { "Spades", "Clubs", "Diamonds", "Hearts" };
    if (suitNum >= 0 && suitNum <= 3)
    {
        return suits[suitNum];
    }

    return "Error: Unknown Suit";
}

void suitTester()
{
    for (int i = 0; i <= 3; i++)
    {
        cout << "Suit number " << i << " is " << getSuitName(i) << endl;
    }
}

string getRankName(int rankNum)
{
    string ranks[] = { "Ace", "2", "3", "4", "5", "6", "7" , "8" , "9", "10", "Jack", "Queen", "King"}; // an ace is usually after the king, not replacing the 1, but that is how the instructions describe placing the ace
    if (rankNum >= 0 && rankNum <= 12)
    {
        return ranks[rankNum];
    }

    return "Error: Unknown Rank";
}

void rankTester()
{
    for (int i = 0; i <= 12; i++)
    {
        cout << "rank number " << i << " is " << getRankName(i) << endl;
    }
}

void initializeDeck()
{
    int cardNum = 0;
    for (int suit = 0; suit < 4; ++suit)
    {
        for (int rank = 0; rank < 13; ++rank)
        {
            deck[cardNum] = getRankName(rank) + " of " + getSuitName(suit);
            cardNum++;
        }
    }
}

void deckTester()
{
    initializeDeck();

    for (int i = 0; i < 52; ++i)
    {
        cout << deck[i] << endl;
    }
}