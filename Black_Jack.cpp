#include<iostream>
#include<vector>
#include<fstream>
#include<random>
#include<time.h>
#include<stdlib.h>
using namespace std;
int Karmas=1400;
string username;
int dealernumber=0,usernumber=0,tdealer,tuser;
vector<int> card={2,3,4,5,6,7,8,9,10,11};
class hand;
class Game;
class Screen;
class logindetails{
    public:
        int Login(){
		 // user name check weather exist or not;
        // if not add if yes go for passowrd or say already exist
        fstream  fil;
        
        fil.open("logindetains.txt",ios::out|ios::in);
        
        cout<<"\n\t\t\t____________________________________________________________________________________________\n";
        cout<<"\n\t\t\t|\t\t\t\t\tLOGIN___PAGE\t\t\t\t\t   |";
        cout<<"\n\t\t\t____________________________________________________________________________________________\n";
         

        string password;

        string checkusername,checkpassword;
        cout<<"\n\t\t\t\t\t\t\t\tENTER USERNAME\n\n";
        cout<<"\t\t\t\t\t\t\t\t";
        cin>>username;
        cout<<"\t\t\t____________________________________________________________________________________________\n";

        cout<<"\n\t\t\t\t\t\t\t\tENTER PASSWORD\n\n";
        cout<<"\t\t\t\t\t\t\t\t";
        cin>>password;
        cout<<"\t\t\t____________________________________________________________________________________________\n";

        int t=1;
        int flag=1;//1 for not getiing user name
        while(getline(fil,checkusername)){
            if(t==1){
                if(checkusername==username){
                    // flag=0;
                    getline(fil,checkpassword);
                    if(password==checkpassword){
                        // cout<<"\tPassowrd matched\n";
                        flag=0;
                        break;
                    }
                    break;
                    t=2;
                }
                else{
                    t=1;
                }
            }
            else{
                continue;
            }
        }
        fil.close();
        if(flag==0){
            cout<<"\n\t\t\t\t\t\t\tLOGIN CREDENTIAL MATCHED\n";
            cout<<"\n\t\t\t____________________________________________________________________________________________\n";

            fstream kar;
            kar.open(username+".txt",ios::out|ios::in);
            kar>>Karmas;
            kar.close();
            // WelcomeScreen();
        }
        else{
        //  cout<<"\n\t\t____________________________________________________________________________________________________\n";

            cout<<"\n\n\t\t\t\t\t\t\tLOGIN CREDENTIAL INVALID\n\n\t\t\t\t\t\tTRY SIGNING UP (PRESS 0 TO SIGN UP ELSE 1) \n";
            int a;
            cout<<"\n\t\t\t\t\t\t\t\t";
            cin>>a;
            if(a==0)
            signup();
            // clrscr();
            else
              return 0;
            //  Welcomepage;
            // system("CLS");
        cout<<"\t\t____________________________________________________________________________________________\n";
        
         
        }
        return 0;

    }

    int signup(){
        cout<<"\n\t\t\t____________________________________________________________________________________________\n";
        cout<<"\n\t\t\t|\t\t\t\t\tSIGNUP___PAGE\t\t\t\t\t   |";
        cout<<"\n\t\t\t____________________________________________________________________________________________\n";
         
		fstream fi;
        fi.open("logindetains.txt",ios::out | ios::in | ios::app);
        string password,cu,cp; //cu confirm username,confirm passowd
        cout<<"\n\t\t\t\t\t\t\t\tENTER USERNAME\n\n";
        cout<<"\t\t\t\t\t\t\t\t";
        cin>>username;
        cout<<"\t\t\t____________________________________________________________________________________________\n";

        cout<<"\n\t\t\t\t\t\t\t\tENTER PASSWORD\n\n";
        cout<<"\t\t\t\t\t\t\t\t";
        cin>>password;
        cout<<"\t\t\t____________________________________________________________________________________________\n";
        cout<<"\n\t\t\t\t\t\t\t\tCONFIRM PASSWORD\n\n";
        cout<<"\t\t\t\t\t\t\t\t";
        cin>>cp;
        cout<<"\t\t\t____________________________________________________________________________________________\n";


        int t=1;
        int flag=1;
        if(password!=cp){
            flag=0;
        } 
        else
        while(getline(fi,cu)){
            if(t==1){
                if(username==cu){
                    flag=0;//username same at flag =0
                    break;
                }
                t=2;
            }
            else{
                t=1;
            }
        }

        fi.close();

        fi.open("logindetains.txt",ios::out | ios::app);



        if(flag==1){
            fi<<"\n"<<username<<"\n";
            fi<<password;
            fi.close();
            cout<<"\n\t\t\t\t\t\t\t\tUSER CREATED\n\n";
            cout<<"\t\t\t____________________________________________________________________________________________\n";

            ofstream makefileuser;
            makefileuser.open(username+".txt");
            makefileuser<<1400;
            makefileuser.close();
        }
        else{
           fi.close();
           cout<<"\n\t\t\t\t\t\t\t\tUSERNAME OR PASSWORD INCORRECT\n\n";
        cout<<"\t\t\t____________________________________________________________________________________________\n";

           
        }
        // WelcomeScreen()
        return 0;
    }
};
class hand:public logindetails{
    public:
    // const int b=0;
    int Dealers_Hand(int a){
        // int t;
        if(a==1){
        cout<<"\n______________________________________________________________________________________________________________\n";
        dealernumber=0;
        usernumber=0;
        // cout<<"\n*************************************************************************************************************\n";
        cout<<"\n\n\t\t\t\t\t\t\t\tThis is dealers Hand\t";
        // srand(time(0));
        tdealer=rand()%10;
        dealernumber+=card[tdealer];
        if(tdealer+dealernumber<=17){
            cout<<"\t"<<card[tdealer];
            
        }
        cout<<"!";
        return 0;
        }
        else{
            while(dealernumber<=17){
                 cout<<"\n______________________________________________________________________________________________________________\n";
              
               // cout<<"\n*************************************************************************************************************\n";
                // cout<<"\n*************************************************************************************************************\n";
                
                cout<<"\n\t\t\t\t\t\t\t\tThis is dealers Hand\t";
                // srand(time(0));

                tdealer=rand()%10;
                dealernumber+=card[tdealer];
                cout<<card[tdealer];

            }
            return 0;
        }
    }

    int UserHand(){
        cout<<"\n______________________________________________________________________________________________________________\n";
        // cout<<"\n*************************************************************************************************************\n";
        cout<<"\n\tThis is user hand\t";      
        // srand(time(0));

        tuser=rand()%10;
        usernumber+=card[tuser];
        // if(tuser+usernumber<=)
        cout<<card[tuser];
        int a;
        while(usernumber<=21){
            cout<<"\n\tFor HIT press 1 and for STAND 2\t";
            cin>>a;
            if(a==1){
                // srand(time(0));

                tuser=rand()%10;
                usernumber+=card[tuser];
                cout<<"\n\tYour new card is \t"<<card[tuser]<<"\n";
            }
            else{
                Dealers_Hand(2);
                return 0;

            }
        }
        return 0;
    }
};

class Game:public hand{
    public:
    
    
    int Home_game(){
        
       
         
        // cout<<"\n*************************************************************************************************************\n";
        // cout<<"\nYou have 1400 Karmas\n";
        // cout<<"Enter userna"
        Login();
        cout<<"\n___________________________________________________________________________________________________________________________\n";
        cout<<"\n___________________________________________________________________________________________________________________________\n";
        fstream fil;
        fil.open(username+".txt",ios::out);
        // if(fil.is_open()){
        //     cout<<"\n opened";
        // }
        // else
        // cout<<"\nnot opened";
        int flag=0;
        while(flag==0){
        // cout<<"\nDealers hand\n";
        cout<<"\nyour current karmas are\t"<<Karmas;
        if(Karmas==0){
            cout<<"\nYOUR KARMAS ARE 0 SO YOU ARE REQUESTED TO CONTACT ONE OF OUR DEV AND PAY THEM 1Cr(negotiable) TO MAKE IT AGAIN 1400 BOOMER!!!!\n";
            return 0;
        }
        Dealers_Hand(1);
        UserHand();
        
        if(usernumber>dealernumber && usernumber<=21 )
          { 
              

              cout<<"\n\n\t\t\t\t\t\t\t\tYOU won!!!";
              Karmas+=20;
              fil<<Karmas;
            //   cout<<"\n\n\t\t\t\t\t\t\t\tIF YOU WANT TO UPDATE YOUR KARMAS LOGIN OR SIGHUP";
              cout<<"\n\n\t\t\t\t\t\t\t\tYour karmas are \t"<<Karmas;
              cout<<"\nWANT TO CONTINUE IF YES TYPE 0 ELSE 1\t";
              cin>>flag;
              usernumber=0;
              dealernumber=0;

              
              
          }
        else
          {
              cout<<"\n\n\t\t\t\t\t\t\t\tYOU Lose!!";  
              Karmas-=50;
              fil<<Karmas;
              cout<<"\n\n\t\t\t\t\t\t\t\tYour karmas are \t"<<Karmas;
              cout<<"\nWANT TO CONTINUE IF YES TYPE 0 ELSE 1\t";
              cin>>flag;
          }

        cout<<"\n___________________________________________________________________________________________________________________________\n";
        cout<<"\n______________________________________________________________________________________________________________\n";
        
    }
    return 0;

    }
    

};

class Screen:public Game{


    public:

   

    void Rules(){
            // cout << "__________________________________________*" << endl;
            cout<<"\n\t\t\t____________________________________________________________________________________________\n";
            cout<<"\n\t\t\t|\t\t\t\t\tRULES||INSTRUCTION\t\t\t\t\t   |";
            cout<<"\n\t\t\t____________________________________________________________________________________________\n";
         
			cout << "\n\t\t\t|\t\t\t\t# How to play the game of Blackjack. ";
			cout << "\n\t\t\t|\t\t\t\tThere are two players: a dealer, ";
			cout << "\n\t\t\t|\t\t\t\tplayed by a computer, ";
			cout << "\n\t\t\t|\t\t\t\tand a player, played by you. ";
			cout << "\n\t\t\t|\t\t\t\tThe game will be played as many ";
			cout << "\n\t\t\t|\t\t\t\trounds as the player can or wants, ";
			cout << "\n\t\t\t|\t\t\t\tand the winner is determined ";
			cout << "\n\t\t\t|\t\t\t\teach round.";
 			cout << "\n\t\t\t|\t\t\t\tYou, the player, start with 1400 points and ";
			cout << "\n\t\t\t|\t\t\t\tcan bet at least     each round. ";
			cout << "\n\t\t\t|\t\t\t\tThe maximum number of   a player can bet ";
			cout << "\n\t\t\t|\t\t\t\tat each round is set at "  ;
			cout << "\n\t\t\t|\t\t\t\there. The dealer is assumed to have ";
			cout <<   "\n\t\t\t|\t\t\t\tin the beginning. ";
			cout << "\n\t\t\t|\t\t\t\tIf either the player or the dealer loses all ";
			cout << "\n\t\t\t|\t\t\t\t , the game ends.\n\n";
			cout << "\n\t\t\t|\t\t\t\tAt each round, the objective of the player ";
			cout << "\n\t\t\t|\t\t\t\tis to win the bet by creating a card total ";
			cout << "\n\t\t\t|\t\t\t\tthat is higher than the value of ";
			cout << "\n\t\t\t|\t\t\t\tthe dealer's hand, but not exceeding 21 ";
			cout << "\n\t\t\t|\t\t\t\t(called, \"busting\"). ";
			cout << "\n\t\t\t|\t\t\t\tThe value of a hand is determined by summing ";
			cout << "\n\t\t\t|\t\t\t\tover values of all ";
			cout << "\n\t\t\t|\t\t\t\tcards in a hand: 2~10 have the same values ";
			cout << "\n\t\t\t|\t\t\t\tas the face values, ";
			cout << "\n\t\t\t|\t\t\t\twhile J, Q, and K (face cards) are counted ";
			cout << "\n\t\t\t|\t\t\t\tas 10 and an ace, A, ";
			cout << "\n\t\t\t|\t\t\t\tcan be counted as 1 or 11. The suits of the ";
			cout << "\n\t\t\t|\t\t\t\tcards don't have any meaning.";
			cout << "\n\t\t\t|\t\t\t\tOnce the amount of the bet is chosen for ";
			cout << "\n\t\t\t|\t\t\t\teach round, ";
			cout << "\n\t\t\t|\t\t\t\ttwo cards are dealt at the beginning of the ";
			cout << "\n\t\t\t|\t\t\t\tround: both cards of the player are revealed,";
			cout << "\n\t\t\t|\t\t\t\twhile only one card is revealed for the ";
			cout << "\n\t\t\t|\t\t\t\tdealer. ";
			cout << "\n\t\t\t|\t\t\t\tThe player has two options: Hit or Stand.\n";
			cout << "\n\t\t\t|\t\t\t\t(1) Hit: Take another card from the dealer.";
			cout << "\n\t\t\t|\t\t\t\tIf the player's hand ";
			cout << "\n\t\t\t|\t\t\t\tis not busted by exceeding 21, ";
			cout << "\n\t\t\t|\t\t\t\tthe player has another chance ";
			cout << "\n\t\t\t|\t\t\t\tto choose to hit or stand,\n\n";
			cout << "\n\t\t\t|\t\t\t\t(2) Stand: Take no more card. ";
			cout << "\n\t\t\t|\t\t\t\tThen, the player's value is ";
			cout << "\n\t\t\t|\t\t\t\tdetermined by summing over all cards in ";
			cout << "\n\t\t\t|\t\t\t\tthe hand (An ace, A, can be either 1 or 11, ";
			cout << "\n\t\t\t|\t\t\t\twhichever is better).\n\n";
			cout << "\n\t\t\t|\t\t\t\tIf the player gets busted by exceeding 21, ";
			cout << "\n\t\t\t|\t\t\t\tthe dealer wins. If the player choose to ";
			cout << "\n\t\t\t|\t\t\t\tstand at a value 21 or lower, ";
			cout << "\n\t\t\t|\t\t\t\tthe dealer should hit until the value is ";
			cout << "\n\t\t\t|\t\t\t\t17 or greater (the ace, A, is counted as 11 ";
			cout << "\n\t\t\t|\t\t\t\tas long as the sum is less than 21, ";
			cout << "\n\t\t\t|\t\t\t\teven when the sum becomes 17, which is ";
			cout << "\n\t\t\t|\t\t\t\tcalled \"S17\" rule). ";
			cout << "\n\t\t\t|\t\t\t\tIf the dealer gets busted, the player wins. ";
			cout << "\n\t\t\t|\t\t\t\tIf both are not busted, ";
			cout << "\n\t\t\t|\t\t\t\tthe winner is determined by comparing values;";
			cout << "\n\t\t\t|\t\t\t\t the player wins ";
			cout << "\n\t\t\t|\t\t\t\tif the player's value is greater, and the ";
			cout << "\n\t\t\t|\t\t\t\tdealer wins if the dealer's value is greater.";
			cout << "\n\t\t\t|\t\t\t\tIf tied, the bet is returned to the player.";
			cout << "\n\t\t\t|\t\t\t\tIf the first two cards has the value ";
			cout << "\n\t\t\t|\t\t\t\t21 by having an ace and ";
			cout << "\n\t\t\t|\t\t\t\ta 10-valued card (10 or J or Q or K), ";
			cout << "\n\t\t\t|\t\t\t\tit's called the \"Blackjack\" and ";
			cout << "\n\t\t\t|\t\t\t\twins every hand except another blackjack (if ";
			cout << "\n\t\t\t|\t\t\t\tboth get blackjacks, it's a tie).";
			cout << "\n\t\t\t|\t\t\t\t# Card representation.";
			cout << "\n\t\t\t|\t\t\t\tThe ranks: A (ace), 2, 3, 4, 5, 6, 7, 8, 9, ";
			cout << "\n\t\t\t|\t\t\t\t10, J, Q, K.\n";
		 	cout << "\n\t\t\t|\t\t\t\tThen, for example, A(s) stands for the spade ";
			cout << "\n\t\t\t|\t\t\t\tace, 10(d) stands for the diamond 10, ";
			cout << "\n\t\t\t|\t\t\t\tand Q(h) stands for the heart queen.";
			cout << "\n\t\t\t|\t\t\t\t# Player inputs.";
			cout << "\n\t\t\t|\t\t\t\tThe player can give inputs using keyboards ";
			cout << "\n\t\t\t|\t\t\t\tat the prompt, and only the first character ";
			cout << "\n\t\t\t|\t\t\t\t(excluding white spaces) of a line, followed ";
			cout << "\n\t\t\t|\t\t\t\tby Enter, will be regarded as a valid input. ";
			cout << "\n\t\t\t|\t\t\t\tPossible input characters are: n (new round),";
			cout << "\n\t\t\t|\t\t\t\tr (rules), h (hit), s (stand), q (quit), ";
			cout << "\n\t\t\t|\t\t\t\tand 1~5 (size of the bet, number of decks).\n";
            cout<<"\n\t\t\t____________________________________________________________________________________________\n";
			
            cout<<"\n\t\t\t|\t\t\t\tPRESS 1 FOR GOING BACK\n";
            cout<<"\n\t\t\t|\t\t\t\t";
            int a;
            cin>>a;
            if(a==1)
            WelcomeScreen();
    }


    

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
        cout<<"\t\t\t**\t\t\t\t\tEnter your choice"<<endl;
        cout<<"\t\t\t  \t\t\t\t\t";
        cin>>choice;
        if(choice==1)
        {
            Home_game();
            WelcomeScreen();
        }
        else if(choice==2)
        {
            Rules();
        }
        else if(choice==3)
        { 
            Login();
            WelcomeScreen();

        }
        else if(choice==4)
        {
            signup();   
            WelcomeScreen();

        }   
    }
    

};
int main(){
Screen s;
s.WelcomeScreen();
}
