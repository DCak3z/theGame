#include <iostream>
#include <cstring>
using namespace std;

int startgame()
{
int choice;
string name;
cout<<"Would you like to play a game? Press the 1 button to start, otherwise hit anything else to end."<<endl;
cin>>choice;
if(choice==1)
{
	cout<<"Welcome!"<<endl;
	cout<<"Enter your name: "<<endl;
	cin>>name;
	cout<<"Hello there,"<<name<<"!"<<endl;
	cout<<"Welcome to the land of dungeons and dragons! Your goal is to defeat the dragon that attacked our village!"<<endl;
	cout<<"You will be given a sword and some potions. Best of luck!"<<endl;
}
else
{
	cout<<"Ending program"<<endl;
}
	return 0;
}


int combat()
{
int enemy[4];
int potion=3;
int damage=2;
int enemyhp=10;
	cout<<"An"<<enemy<<"appears!"<<endl;
	cout<<"What will you do?"<<endl;
int battle=2;
while(battle==2){
	cout<<"Press 1 to attack, or 2 to use a potion."<<endl;
	cin>>battle;
if(battle==1)
	cout<<"You used your sword!"<<endl;
	cout<<damage<<"points of damage to"<<enemy<<endl;
	enemyhp=enemyhp-10;
if(battle==2)
	cout<<"You used a potion!"<<endl;
	cout<<"You healed ten HP!"<<endl;
	potion=potion-1;
	cout<<"You have:"<<potion<<"potions left."<<endl;
if(enemyhp<=0)
	cout<<"You have defeated the enemy!"<<endl;
	battle=1;
	break;
}
}

int ending()
{
cout<<"You have completed the game! Congratulations!"<<endl;
}

int gameover()
{
cout<<"You have fallen. Game over!"<<endl;
}

int main()
{
startgame();
combat();
ending();
gameover();
}
