//RPSLS
#include "iostream"
#include <stdlib.h>

/* program to simulate the rock paper sissors lizard spock game from big bang theroy 

LOGIC:
Scissors cuts Paper.
Paper covers Rock.
Rock crushes Lizard.
Lizard poisons Spock.
Spock smashes Scissors.
Scissors decapitate Lizard.
Lizard eats Paper.
Paper disproves Spock.
Spock vaporizes Rock.
(and as it always has) Rock crushes Scissors.
*/

using namespace std;
int main(){
 system("cls");
 srand(time(NULL));
 int com = rand()%5+1;
 int user = 0;
 string input;
 cout<<"================================\n";
 cout<<"ROCK PAPER SCISSORS LIZARD SPOCK\n";
 cout<<"================================\n";
 cin>>input;
 //cout<<"you chose "<<input<<"\n";
if (input == "rock"){
  user = 1;
}else if(input == "paper"){
 user = 2;
}else if(input == "scissors"){
  user = 3;
}else if(input == "lizard"){
  user = 4;
}else if(input =="spock"){
  user = 5;
}else{
  cout<<"Invalid input, remember to use all lower case.\n";
}

// LOGIC
//tie condidtion
if (user == com){
  cout<<"Tie\n";
}
// computer is rock
if (com == 1){
  if (user == 2){cout<<"You win, paper covers rock"; }
  if (user == 3){cout<<"You loose, rock smashes scissors";}
  if (user == 4){cout<<"You loose, rock crushes lizard";}
  if (user == 5){cout<<"You win, Spock vaporizes rock";}
}
// computer is paper
if (com == 2){
  if (user == 1){cout<<"You loose, paper covers rock"; }
  if (user == 3){cout<<"You win, scissors cut paper";}
  if (user == 4){cout<<"You win, lizard eats paper";}
  if (user == 5){cout<<"You loose, paper disproves Spock";}
}
// computer is scissors
if (com == 3){
  if (user == 1){cout<<"You win, rock smashes scissors"; }
  if (user == 2){cout<<"You loose, scissors cut paper";}
  if (user == 4){cout<<"You loose, scissors decapitate lizard";}
  if (user == 5){cout<<"You win, Spock smashes scissors";}
}
// computer is lizard
if (com == 4){
  if (user == 1){cout<<"You win, rock smashes lizard"; }
  if (user == 2){cout<<"You loose, lizard eats paper";}
  if (user == 3){cout<<"You win, scissors decapitate lizard";}
  if (user == 5){cout<<"You loose, lizard poisons Spock";}
}
// computer is spock
if (com == 5){
  if (user == 1){cout<<"You loose, Spock vaporizes rock"; }
  if (user == 2){cout<<"You win, paper disproves Spock";}
  if (user == 3){cout<<"You loose, Spock smashes scissors";}
  if (user == 4){cout<<"You win, lizard poisons Spock";}
}
cout<<"\n";
return 0;
}