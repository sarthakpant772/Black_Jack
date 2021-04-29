#include<iostream>
using namespace std;
class Game{


    public:

    void WelcomeScreen(){
  int choice;
cout<<"\n\n\t\t\t\t\t\t\tWelcome to BLACKJACK game!\n\n      "<<endl;
cout<<"\t\t\t------------------------------------------------------------------------------------------"<<endl;
cout<<"\t\t\t------------------------------------------------------------------------------------------"<<endl;
cout<<"\t\t\t******************************************************************************************"<<endl;
cout<<"\t\t\t**\t\t\t\t\t1-Play Game\t\t\t\t\t**"<<endl<<"\t\t\t**\t\t\t\t\t2-Rules and Instructions\t\t\t**"<<endl<<"\t\t\t**\t\t\t\t\t3-Login\t\t\t\t\t\t**"<<endl<<"\t\t\t**\t\t\t\t\t4-Signup\t\t\t\t\t**"<<endl;
cout<<"\t\t\t******************************************************************************************"<<endl;
cout<<"\t\t\t------------------------------------------------------------------------------------------"<<endl;
cout<<"\t\t\t------------------------------------------------------------------------------------------"<<endl;
cout<<"Enter your choice"<<endl;
cin>>choice;
if(choice==1)
{

}
if(choice==2)
{
    Rules();
}
if(choice==3)
{

}
if(choice==4)
{

}
    }

    void MainGame(){

    }

    void Rules(){
cout << "__________________________________________*" << endl;
			cout << "# How to play the game of Blackjack. " << endl;
			cout << "\n\t There are two players: a dealer, ";
			cout << "played by a computer, ";
			cout << "and a player, played by you. ";
			cout << "The game will be played as many ";
			cout << "rounds as the player can or wants, ";
			cout << "and the winner is determined ";
			cout << "each round.";
 			cout << "You, the player, start with 1400 points and ";
			cout << "can bet at least     each round. ";
			cout << "The maximum number of   a player can bet ";
			cout << "at each round is set at "  ;
			cout << "   here. The dealer is assumed to have ";
			cout <<   "   in the beginning. ";
			cout << "If either the player or the dealer loses all ";
			cout << " , the game ends.\n\n";
			cout << "\tAt each round, the objective of the player ";
			cout << "is to win the bet by creating a card total ";
			cout << "that is higher than the value of ";
			cout << "the dealer's hand, but not exceeding 21 ";
			cout << "(called, \"busting\"). ";
			cout << "The value of a hand is determined by summing ";
			cout << "over values of all ";
			cout << "cards in a hand: 2~10 have the same values ";
			cout << "as the face values, ";
			cout << "while J, Q, and K (face cards) are counted ";
			cout << "as 10 and an ace, A, ";
			cout << "can be counted as 1 or 11. The suits of the ";
			cout << "cards don't have any meaning.\n\n";
			cout << "\tOnce the amount of the bet is chosen for ";
			cout << "each round, ";
			cout << "two cards are dealt at the beginning of the ";
			cout << "round: both cards of the player are revealed,";
			cout << " while only one card is revealed for the ";
			cout << "dealer. ";
			cout << "The player has two options: Hit or Stand.\n";
			cout << "\n(1) Hit: Take another card from the dealer.";
			cout << " If the player's hand ";
			cout << "is not busted by exceeding 21, ";
			cout << "the player has another chance ";
			cout << "to choose to hit or stand,\n\n";
			cout << "(2) Stand: Take no more card. ";
			cout << "Then, the player's value is ";
			cout << "determined by summing over all cards in ";
			cout << "the hand (An ace, A, can be either 1 or 11, ";
			cout << "whichever is better).\n\n";
			cout << "\tIf the player gets busted by exceeding 21, ";
			cout << "the dealer wins. If the player choose to ";
			cout << "stand at a value 21 or lower, ";
			cout << "the dealer should hit until the value is ";
			cout << "17 or greater (the ace, A, is counted as 11 ";
			cout << "as long as the sum is less than 21, ";
			cout << "even when the sum becomes 17, which is ";
			cout << "called \"S17\" rule). ";
			cout << "If the dealer gets busted, the player wins. ";
			cout << "If both are not busted, ";
			cout << "the winner is determined by comparing values;";
			cout << " the player wins ";
			cout << "if the player's value is greater, and the ";
			cout << "dealer wins if the dealer's value is greater.";
			cout << " If tied, the bet is returned to the player.";
			cout << "\n\n\tIf the first two cards has the value ";
			cout << "21 by having an ace and ";
			cout << "a 10-valued card (10 or J or Q or K), ";
			cout << "it's called the \"Blackjack\" and ";
			cout << "wins every hand except another blackjack (if ";
			cout << "both get blackjacks, it's a tie).\n\n\n";
			cout << "# Card representation.\n\n";
			cout << "The ranks: A (ace), 2, 3, 4, 5, 6, 7, 8, 9, ";
			cout << "10, J, Q, K.\n";
		 	cout << "Then, for example, A(s) stands for the spade ";
			cout << "ace, 10(d) stands for the diamond 10, ";
			cout << "and Q(h) stands for the heart queen.\n\n\n";
			cout << "# Player inputs.\n\n";
			cout << "\tThe player can give inputs using keyboards ";
			cout << "at the prompt, and only the first character ";
			cout << "(excluding white spaces) of a line, followed ";
			cout << "by Enter, will be regarded as a valid input. ";
			cout << "Possible input characters are: n (new round),";
			cout << " r (rules), h (hit), s (stand), q (quit), ";
			cout << "and 1~5 (size of the bet, number of decks).\n";
			cout << "__________________________________________*" << endl;
			cout << endl;
    }

    void Login(){

    }

    void signup(){

    }

};
int main(){
Game obj;
obj.WelcomeScreen();
}
