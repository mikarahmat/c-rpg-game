#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	int no;
	int choice;
	int atk;
	int def[] = {8, 10, 15};
	int hp[] = {100, 125, 150};
	int mana[] = {100, 110, 120};
	int matk;
	int mdef[] = {10, 15, 25};
	int mhp[] = {100, 150, 200};
	int turn;
	char lvl;
	char stage;
	char back;
	char ko;
	
	mainmenu :
	system("cls");
	cout << "=======================================================================" << endl;
	cout << "|                                                                     |" << endl;
	cout << "|  ¦¦   ¦¦ ¦¦¦¦¦¦¦ ¦¦¦¦¦¦   ¦¦¦¦¦¦ ¦¦    ¦¦ ¦¦      ¦¦¦¦¦¦¦ ¦¦¦¦¦¦¦   |" << endl;
	cout << "|  ¦¦   ¦¦ ¦¦      ¦¦   ¦¦ ¦¦      ¦¦    ¦¦ ¦¦      ¦¦      ¦¦        |" << endl;
	cout << "|  ¦¦¦¦¦¦¦ ¦¦¦¦¦   ¦¦¦¦¦¦  ¦¦      ¦¦    ¦¦ ¦¦      ¦¦¦¦¦   ¦¦¦¦¦¦¦   |" << endl;
	cout << "|  ¦¦   ¦¦ ¦¦      ¦¦   ¦¦ ¦¦      ¦¦    ¦¦ ¦¦      ¦¦           ¦¦   |" << endl;
	cout << "|  ¦¦   ¦¦ ¦¦¦¦¦¦¦ ¦¦   ¦¦  ¦¦¦¦¦¦  ¦¦¦¦¦¦  ¦¦¦¦¦¦¦ ¦¦¦¦¦¦¦ ¦¦¦¦¦¦¦   |" << endl;
	cout << "|                         TALES OF HERCULES                           | " << endl;
	cout << "|                         -----------------                           |" << endl;
	cout << "=======================================================================\n" << endl;
	cout << "                             1. P L A Y\n" << endl;
	cout << "                             2. I N F O\n" << endl;
	cout << "                             3. E X I T\n" << endl;
	cout << "                       Y O U R  R E S P O N S E : "; 
	do {
		cin >> no;
	} while(no < 1 || no > 3);
	
	switch(no) {
		//Play
		case 1 :
			//Level 1
			level1 :
				srand(time(0));
				turn = rand()%2+1;
				//Prolog Level 1
				system("cls");
				cout << "===============================================================" << endl;
				cout << "|                                                             |" << endl;
				cout << "|                          STAGE 1                            | " << endl;
				cout << "|                                                             |" << endl;
				cout << "|                          Minotaur                           |" << endl;
				cout << "|                        ------------                         |" << endl;
				cout << "|     A half-man and half-bull monster, that is famous for    |" << endl;
				cout << "|   dwelling inside a labyrinth, where he devoured 14 human   |" << endl;
				cout << "|                     sacrifices every year.                  |" << endl;
				cout << "|                                                             |" << endl;
				cout << "===============================================================\n" << endl;
				cout << "Type Y to continue ==> ";
				do {
					cin >> lvl;
				} while(lvl != 'Y' && lvl != 'y');
				//Level 1
				if(lvl == 'Y' || lvl == 'y') {
					system("cls");
					cout << "=========================================================================" << endl;
					cout << "|                                                                       |" << endl;
					cout << "|  You were wandering in a secluded cave, with a very complicated maze  |" << endl;
					cout << "|  inside, with thousands of possible path to go through. When suddenly |" << endl;
					cout << "|  you encountered the great Minotaur with its fiery eyes filled with   |" << endl;
					cout << "|  fiery rage, staring dead into your eyes with the intention to kill.  |" << endl;
					cout << "|                                                                       |" << endl;
					cout << "=========================================================================\n" << endl;
					if(turn == 1) {
						cout << "[You took the chance to strike first!]" << endl;
						while(hp[0] > 0 || mhp[0] > 0) {
							cout << "=========================================================================" << endl;
							cout << "| Hercules                         | Minotaur                           |" << endl;
							cout << "| --------                         | --------                           |" << endl;
							cout << "| HP  :" << hp[0] << "  HP                      | HP:" << mhp[0] << " HP                          |" << endl;
							cout << "| MANA:" << mana[0] << " MP                      |                                    |" << endl;
							cout << "| DEF :" << def[0] << " DP                        |                                    |" << endl;
							cout << "=========================================================================" << endl;
							cout << "=====================     =====================     =====================" << endl;
							cout << "| 1. Basic Attack   |     | 2. Special Attack |     |     3. Defend     |" << endl;
							cout << "=====================     =====================     =====================" << endl;
							cout << "                            Y O U R  M O V E:                            " << endl;
							do {
								cin >> choice;
							} while(choice < 1 || choice > 3);
							//Attack choice
							switch(choice) {
								case 1 :
								system("cls");
								atk = rand()%11+13;
								atk -= mdef[0];
								mhp[0] -= atk;
								cout << "\n* You swung your fists against the opponent! dealing " << atk << " damage." << endl;
							break;
							case 2 :
								system("cls");
								mana[0] -= 30;
								if(mana[0] >= 0) {
									atk = rand()%11+20;
									mhp[0] -= atk;
									cout << "\n* You launched a powerful attack! consuming 30 mana, and dealing " << atk << " damage." << endl;
								}
								else {
									cout << "\nYou ran out of mana." << endl;
								}
							break;
							case 3 :
								system("cls");
								mana[0] -= 10;
								if(mana[0] >= 0) {
									atk = rand()%6+11;
									atk -= mdef[0];
									mhp[0] -= atk;
									def[0]++;
									cout << "\n* You've increased your defences, while dealing a small amount of " << atk << " damage." << endl;
								}
								else {
									cout << "\nYou ran out of mana." << endl;
								}
							break;
							}
							if(mhp[0] < 1) {
								system("cls");
								cout << "                            ~" << endl;
								cout << "         ~                '" << endl;
								cout << "           `        (O)       ~" << endl;
								cout << "                     H      '" << endl;
								cout << "     ~               H" << endl;
								cout << "       `        ____hHh____" << endl;
								cout << "         ~      `---------'    ~" << endl;
								cout << "           `       | | |     '" << endl;
								cout << "                   | | |" << endl;
								cout << "                   | | |" << endl;
								cout << "                   | | |" << endl;
								cout << "                   | | |" << endl;
								cout << "                   | | |" << endl;
								cout << "                   | | |" << endl;
								cout << "                   | | |" << endl;
								cout << "             _____;~~~~~:____" << endl;
								cout << "          __'                |" << endl;
								cout << "         /         |          |" << endl;
								cout << "        |    _||_   |         ||" << endl;
								cout << "        |     ||    |         | |      ___" << endl;
								cout << " __    /     __     |         | |    _/   |" << endl;
								cout << "/__|  |_____/__|____|_________|__|  /__|___|" << endl;
								cout << "" << endl;
								cout<< "\n* Your consecutive attacks dealt immense damage to the Minotaur, breaking one of its horns.\n  You took the chance to grab the broken horn and stabbed it to the Minotaur heart. You've\n  successfully killed the Minotaur and survived with' "<< hp[0] <<" hp left." << endl;
								cout<< "\n* After you successfully killed the Minotaur, you found the great sword and shield from the maze.\n  Enhancing your attacks and defence.\n" << endl;
								cout << "Type N to continue ==> ";
								do {
									cin >> stage;
								} while(stage != 'N' && stage != 'n');
								goto level2;
							}
							cout << "* The Minotaur took the damage, leaving with " << mhp[0] << " hp left." << endl;
							
							choice = rand()%1+1;
							switch(choice) {
								case 1 :
									matk = rand()%11+15;
									matk -= def[0];
									hp[0] -= matk;
									cout << "* The Minotaur attacked you with his legendary hammer! dealing " << matk << " damage." << endl;
								break;
							}
							if(hp[0] < 1) {
								system("cls");
								cout << "         .                                                      ." << endl;
								cout << "       .n                   .                 .                  n." << endl;
								cout << "  .   .dP                  dP                   9b                 9b.    ." << endl;
								cout << " 4    qXb         .       dX                     Xb       .        dXp     t" << endl;
								cout << "dX.    9Xb      .dXb    __                         __    dXb.     dXP     .Xb" << endl;
								cout << "9XXb._       _.dXXXXb dXXXXbo.                 .odXXXXb dXXXXb._       _.dXXP" << endl;
								cout << " 9XXXXXXXXXXXXXXXXXXXVXXXXXXXXOo.           .oOXXXXXXXXVXXXXXXXXXXXXXXXXXXXP" << endl;
								cout << "  `9XXXXXXXXXXXXXXXXXXXXX'~   ~`OOO8b   d8OOO'~   ~`XXXXXXXXXXXXXXXXXXXXXP'" << endl;
								cout << "    `9XXXXXXXXXXXP' `9XX'   DIE    `98v8P'  HUMAN   `XXP' `9XXXXXXXXXXXP'" << endl;
								cout << "        ~~~~~~~       9X.          .db|db.          .XP       ~~~~~~~" << endl;
								cout << "                        )b.  .dbo.dP'`v'`9b.odb.  .dX(" << endl;
								cout << "                      ,dXXXXXXXXXXXb     dXXXXXXXXXXXb." << endl;
								cout << "                     dXXXXXXXXXXXP'   .   `9XXXXXXXXXXXb" << endl;
								cout << "                    dXXXXXXXXXXXXb   d|b   dXXXXXXXXXXXXb" << endl;
								cout << "                    9XXb'   `XXXXXb.dX|Xb.dXXXXX'   `dXXP" << endl;
								cout << "                     `'      9XXXXXX(   )XXXXXXP      `'" << endl;
								cout << "                              XXXX X.`v'.X XXXX" << endl;
								cout << "                              XP^X'`b   d'`X^XX" << endl;
								cout << "                              X. 9  `   '  P )X" << endl;
								cout << "                              `b  `       '  d'" << endl;
								cout << "                               `             '" << endl;
								cout << "" << endl;
								cout << "* The Minatour launches various attacks to you. Your strength isn't sufficient enough\n  to beat the Minotaur. You screamed helplessly as the Minotaur crushes you to your death...\n \n* The Minotaur still has "<< mhp[0] <<" hp left.\n" << endl;
								cout << "\n G A M E  O V E R\nType Y to continue ==> ";
								do {
									cin >> ko;
								} while(ko != 'Y' && ko != 'y');
								if(ko == 'Y' || ko == 'y') {
									goto losescreen;
								}
							}
							
							cout<< "* You took hits from the Minotaur! leaving you with "<< hp[0] <<" hp left.\n" << endl;
						}
					}
					//Monster start
					else {
						cout << "[The Minotaur attacked you!]" << endl;
						while(hp[0] > 0 || mhp[0] > 0) {
							choice = rand()%1+1;
							switch(choice) {
								case 1 :
									matk = rand()%11+15;
									matk -= def[0];
									hp[0] -= matk;
									cout << "* The Minotaur attacked you with his legendary hammer! dealing " << matk << " damage." << endl;
								break;
							}
							if(hp[0] < 1) {
								system("cls");
								cout << "         .                                                      ." << endl;
								cout << "       .n                   .                 .                  n." << endl;
								cout << "  .   .dP                  dP                   9b                 9b.    ." << endl;
								cout << " 4    qXb         .       dX                     Xb       .        dXp     t" << endl;
								cout << "dX.    9Xb      .dXb    __                         __    dXb.     dXP     .Xb" << endl;
								cout << "9XXb._       _.dXXXXb dXXXXbo.                 .odXXXXb dXXXXb._       _.dXXP" << endl;
								cout << " 9XXXXXXXXXXXXXXXXXXXVXXXXXXXXOo.           .oOXXXXXXXXVXXXXXXXXXXXXXXXXXXXP" << endl;
								cout << "  `9XXXXXXXXXXXXXXXXXXXXX'~   ~`OOO8b   d8OOO'~   ~`XXXXXXXXXXXXXXXXXXXXXP'" << endl;
								cout << "    `9XXXXXXXXXXXP' `9XX'   DIE    `98v8P'  HUMAN   `XXP' `9XXXXXXXXXXXP'" << endl;
								cout << "        ~~~~~~~       9X.          .db|db.          .XP       ~~~~~~~" << endl;
								cout << "                        )b.  .dbo.dP'`v'`9b.odb.  .dX(" << endl;
								cout << "                      ,dXXXXXXXXXXXb     dXXXXXXXXXXXb." << endl;
								cout << "                     dXXXXXXXXXXXP'   .   `9XXXXXXXXXXXb" << endl;
								cout << "                    dXXXXXXXXXXXXb   d|b   dXXXXXXXXXXXXb" << endl;
								cout << "                    9XXb'   `XXXXXb.dX|Xb.dXXXXX'   `dXXP" << endl;
								cout << "                     `'      9XXXXXX(   )XXXXXXP      `'" << endl;
								cout << "                              XXXX X.`v'.X XXXX" << endl;
								cout << "                              XP^X'`b   d'`X^XX" << endl;
								cout << "                              X. 9  `   '  P )X" << endl;
								cout << "                              `b  `       '  d'" << endl;
								cout << "                               `             '" << endl;
								cout << "" << endl;
								cout << "* The Minatour launches various attacks to you. Your strength isn't sufficient enough\n  to beat the Minotaur. You screamed helplessly as the Minotaur crushes you to your death...\n \n* The Minotaur still has "<< mhp[0] <<" hp left.\n" << endl;
								cout << "\n G A M E  O V E R\nType Y to continue ==> ";
								do {
									cin >> ko;
								} while(ko != 'Y' && ko != 'y');
								if(ko == 'Y' || ko == 'y') {
									goto losescreen;
								}
							}
							cout << "* You took hits from the Minotaur! leaving you with "<< hp[0] <<" hp left.\n" << endl;
							cout << "=========================================================================" << endl;
							cout << "| Hercules                         | Minotaur                           |" << endl;
							cout << "| --------                         | --------                           |" << endl;
							cout << "| HP  :" << hp[0] << "  HP                      | HP:" << mhp[0] << " HP                          |" << endl;
							cout << "| MANA:" << mana[0] << " MP                      |                                    |" << endl;
							cout << "| DEF :" << def[0] << " DP                        |                                    |" << endl;
							cout << "=========================================================================" << endl;
							cout << "=====================     =====================     =====================" << endl;
							cout << "| 1. Basic Attack   |     | 2. Special Attack |     |     3. Defend     |" << endl;
							cout << "=====================     =====================     =====================" << endl;
							cout << "                            Y O U R  M O V E:                            " << endl;
							do {
								cin >> choice;
							} while(choice < 1 || choice > 3);
							switch(choice) {
								case 1 :
								system("cls");
								atk = rand()%11+13;
								atk -= mdef[0];
								mhp[0] -= atk;
								cout << "\n* You swung your fists against the opponent! dealing " << atk << " damage." << endl;
							break;
							case 2 :
								system("cls");
								mana[0] -= 30;
								if(mana[0] >= 0) {
									atk = rand()%11+20;
									mhp[0] -= atk;
									cout << "\n* You launched a powerful attack! consuming 30 mana, and dealing " << atk << " damage." << endl;
								}
								else {
									cout << "\n* You ran out of mana." << endl;
								}
							break;
							case 3 :
								system("cls");
								mana[0] -= 10;
								if(mana[0] >= 0) {
									atk = rand()%6+11;
									atk -= mdef[0];
									mhp[0] -= atk;
									def[0]++;
									cout << "\n* You've increased your defences, while dealing a small amount of " << atk << " damage." << endl;
								}
								else {
									cout << "\nYou ran out of mana." << endl;
								}
							break;
							}
							if(mhp[0] < 1) {
								system("cls");
								cout << "                            ~" << endl;
								cout << "         ~                '" << endl;
								cout << "           `        (O)       ~" << endl;
								cout << "                     H      '" << endl;
								cout << "     ~               H" << endl;
								cout << "       `        ____hHh____" << endl;
								cout << "         ~      `---------'    ~" << endl;
								cout << "           `       | | |     '" << endl;
								cout << "                   | | |" << endl;
								cout << "                   | | |" << endl;
								cout << "                   | | |" << endl;
								cout << "                   | | |" << endl;
								cout << "                   | | |" << endl;
								cout << "                   | | |" << endl;
								cout << "                   | | |" << endl;
								cout << "             _____;~~~~~:____" << endl;
								cout << "          __'                |" << endl;
								cout << "         /         |          |" << endl;
								cout << "        |    _||_   |         ||" << endl;
								cout << "        |     ||    |         | |      ___" << endl;
								cout << " __    /     __     |         | |    _/   |" << endl;
								cout << "/__|  |_____/__|____|_________|__|  /__|___|" << endl;
								cout << "" << endl;
								cout<< "\n* Your consecutive attacks dealt immense damage to the Minotaur, breaking one of its horns.\n  You took the chance to grab the broken horn and stabbed it to the Minotaur heart. You've\n  successfully killed the Minotaur and survived with' "<< hp[0] <<" hp left." << endl;
								cout<< "\n* After you successfully killed the Minotaur, you found the great sword and shield from the maze.\n  Enhancing your attacks and defence.\n" << endl;
								cout << "Type N to continue ==> ";
								do {
									cin >> stage;
								} while(stage != 'N' && stage != 'n');
								goto level2;
							}
							cout << "* The Minotaur took the damage, leaving with " << mhp[0] << " hp left." << endl;
						}
					} 
				}
			//Level2
			level2 :
				srand(time(0));
				turn = rand()%2+1;
				//Prolog Level 2
				if(stage == 'N' || stage == 'n') {
					system("cls");
					cout << "===============================================================" << endl;
					cout << "|                                                             |" << endl;
					cout << "|                           STAGE 2                           | " << endl;
					cout << "|                                                             |" << endl;
					cout << "|                            Hydra                            |" << endl;
					cout << "|                          ---------                          |" << endl;
					cout << "|     the Hydra was the offspring of Typhon and Echidna.      |" << endl;
					cout << "|   It had poisonous breath and blood so virulent that even   |" << endl;
					cout << "|    its scent was deadly. The Hydra possessed many heads,    |" << endl;
					cout << "|  the exact number of which varies according to the source.  |" << endl;
					cout << "|                                                             |" << endl;
					cout << "===============================================================\n" << endl;
					cout << "Type Y to continue ==> ";
					do {
						cin >> lvl;
					} while(lvl != 'Y' && lvl != 'y');
				}
				//Level 2
				if(lvl == 'Y' || lvl == 'y') {
					system("cls");
					cout << "=========================================================================" << endl;
					cout << "|                                                                       |" << endl;
					cout << "|  After successfully defeating the Minotaour. You continue to wonder   |" << endl;
					cout << "|  across the world for the quest on being the strongest in this world. |" << endl;
					cout << "|   You came across a large stormy sea, with a dark aura coming from    |" << endl;
					cout << "| the middle of the sea. When suddenly, a three headed dragon submerged |" << endl;
					cout << "|           from the sea and is coming towards you fast.                |" << endl;
					cout << "|                                                                       |" << endl;
					cout << "=========================================================================\n" << endl;
					if(turn == 1) {
						cout << "[You took the chance to strike first!]" << endl;
						while(hp[1] > 0 || mhp[1] > 0) {
							cout << "=========================================================================" << endl;
							cout << "| Hercules                         | Hydra                              |" << endl;
							cout << "| --------                         | --------                           |" << endl;
							cout << "| HP  :" << hp[1] << "  HP                      | HP:" << mhp[1] << " HP                          |" << endl;
							cout << "| MANA:" << mana[1] << " MP                      |                                    |" << endl;
							cout << "| DEF :" << def[1] << " DP                        |                                    |" << endl;
							cout << "=========================================================================" << endl;
							cout << "=====================     =====================     =====================" << endl;
							cout << "| 1. Basic Attack   |     | 2. Special Attack |     |     3. Defend     |" << endl;
							cout << "=====================     =====================     =====================" << endl;
							cout << "                            Y O U R  M O V E:                            " << endl;
							do {
								cin >> choice;
							} while(choice < 1 || choice > 3);
							
							switch(choice) {
								case 1 :
								system("cls");
								atk = rand()%11+23;
								atk -= mdef[1];
								mhp[1] -= atk;
								cout << "\n* You wielded your sword and striked the Hydra! dealing " << atk << " damage." << endl;
							break;
							case 2 :
								system("cls");
								mana[1] -= 30;
								if(mana[1] >= 0) {
									atk = rand()%11+25;
									mhp[1] -= atk;
									cout << "\n* You charged your sword with your superhuman strength! dealing " << atk << " damage." << endl;
								}
								else {
									cout << "\n* You ran out of mana." << endl;
								}
							break;
							case 3 :
								system("cls");
								mana[1] -= 10;
								if(mana[1] >= 0) {
									atk = rand()%6+21;
									atk -= mdef[1];
									mhp[1] -= atk;
									def[1]++;
									cout << "\n* You put up your shield, while dealing a small amount of " << atk << " damage." << endl;
								}
								else {
									cout << "\nYou ran out of mana.\n" << endl;
								}
							break;
							}
							if(mhp[1] < 1) {
								system("cls");
								cout << "                                ,-." << endl;
								cout << "                               (''O_)" << endl;
								cout << "                              / `-/" << endl;
								cout << "                             /-. /" << endl;
								cout << "                            /   /" << endl;
								cout << "                           /   /  " << endl;
								cout << "              _           /-. /" << endl;
								cout << "             (_)''-._    /   /" << endl;
								cout << "               '-._ ''-''( )/    " << endl;
								cout << "                   ''-/'-._'' `. " << endl;
								cout << "                    /     ''-.'._" << endl;
								cout << "                   //       /-._''-._" << endl;
								cout << "    _,---...__    /  ) _,-'/    ''-(_)" << endl;
								cout << "___<__(|) _   ''-/  / /   /" << endl;
								cout << " '  `----' ''-.   // /   /" << endl;
								cout << "               )  ] /   /" << endl;
								cout << "       ____..-'   //   /                       )" << endl;
								cout << "   ,-''      __.,'/   /   ___                 /," << endl;
								cout << "  /    ,-'''/  / /   /,-'   ''-.          ,'/" << endl;
								cout << " [    (    /  / /   /  ,.---,_   `._   _,-','" << endl;
								cout << "  |    `-./  / /   /  /       `-._  '''' ,-'" << endl;
								cout << "   `-._  /  / /   /_,'            ''--'" << endl;
								cout << "       '/  / /   /''         " << endl;
								cout << "       /  / /   /" << endl;
								cout << "      /  / /   /" << endl;
								cout << "     /  |,'   / " << endl;
								cout << "    :   /    /" << endl;
								cout << "    [  /   ,' " << endl;
								cout << "    | /  ,'" << endl;
								cout << "    |/,-'" << endl;
								cout << "    P'" << endl;
								cout << "" << endl;
								cout<< "\n* You successfully cut two of the Hydra's head, leaving one intact. You then put all of your\n  superhuman strength to your sword and swung your sword to the last Hydra's head.\n  Killing it instantly and survived with "<< hp[1] <<" hp left.\n" << endl;
								cout<< "* After you successfully killed the Hydra, you absorbed the Hydra power.\n  Enhancing your attacks and defence.\n" << endl;
								cout << "Type N to continue ==> ";
								do {
									cin >> stage;
								} while(stage != 'N' && stage != 'n');
								goto level3;
							}
							cout << "* The Hydra took a massive damage from your attacks, leaving with " << mhp[1] << " hp left." << endl;
							
							choice = rand()%1+1;
							switch(choice) {
								case 1 :
									matk = rand()%11+20;
									matk -= def[1];
									hp[1] -= matk;
									cout << "* The Hydra bursted a large flame from it's mouth, dealing " << matk << " damage." << endl;
								break;
							}
							if(hp[1] < 1) {
								system("cls");
								cout << "                                        ,   ," << endl;
								cout << "                                        $,  $,     ," << endl;
								cout << "                                        ''ss.$ss. .s'" << endl;
								cout << "                                ,     .ss$$$$$$$$$$s," << endl;
								cout << "                                $. s$$$$$$$$$$$$$$`$$Ss" << endl;
								cout << "                                 $$$$$$$$$$$$$$$$$$o$$$       ," << endl;
								cout << "                               s$$$$$$$$$$$$$$$$$$$$$$$$s,  ,s" << endl;
								cout << "                              s$$$$$$$$$'$$$$$$'''$$$$$$'$$$$$," << endl;
								cout << "                              s$$$$$$$$$$s''$$$$ssssss'$$$$$$$$" << endl;
								cout << "                             s$$$$$$$$$$'         `'''''ss''$'$s" << endl;
								cout << "                             s$$$$$$$$$$,              `'''''''$  .s$$s" << endl;
								cout << "                             s$$$$$$$$$$$$s,...               `s$$'  `" << endl;
								cout << "                         `ssss$$$$$$$$$$$$$$$$$$$$####s.     .$$''$.   , s-" << endl;
								cout << "                           `''''$$$$$$$$$$$$$$$$$$$$#####$$$$$$''     $.$'" << endl;
								cout << "                                 ''$$$$$$$$$$$$$$$$$$$$$####s''''     .$$$|" << endl;
								cout << "                                  '$$$$$$$$$$$$$$$$$$$$$$$$##s    .$$'' $" << endl;
								cout << "                                   $$''$$$$$$$$$$$$$$$$$$$$$$$$$$$$$''   `" << endl;
								cout << "" << endl;
								cout << "\n* Your body couldn't take all the damage from the Hydra, leaving you with burn marks all over your body.\n  Causing agonizing pain all over your body as you slowly devoured\n  by the Hydra. It was a painful death.\n \n* The Hydra survived with "<< mhp[1] <<" hp left.\n" << endl;
								cout << "\n G A M E  O V E R\nType Y to continue ==> ";
								do {
									cin >> ko;
								} while(ko != 'Y' && ko != 'y');
								if(ko == 'Y' || ko == 'y') {
									goto losescreen;
								}
							}
							cout<< "* You took all attacks from the Hydra, leaving you with "<< hp[1] <<" hp left.\n" << endl;
						}
					}
					else {
						cout << "[The Hydra attacked you!]" << endl;
						while(hp[1] > 0 || mhp[1] > 0) {
							choice = rand()%1+1;
							switch(choice) {
								case 1 :
									matk = rand()%11+20;
									matk -= def[1];
									hp[1] -= matk;
									cout << "* The Hydra bursted a large flame from it's mouth, dealing " << matk << " damage." << endl;
								break;
							}
							if(hp[1] < 1) {
								system("cls");
								cout << "                                        ,   ," << endl;
								cout << "                                        $,  $,     ," << endl;
								cout << "                                        ''ss.$ss. .s'" << endl;
								cout << "                                ,     .ss$$$$$$$$$$s," << endl;
								cout << "                                $. s$$$$$$$$$$$$$$`$$Ss" << endl;
								cout << "                                 $$$$$$$$$$$$$$$$$$o$$$       ," << endl;
								cout << "                               s$$$$$$$$$$$$$$$$$$$$$$$$s,  ,s" << endl;
								cout << "                              s$$$$$$$$$'$$$$$$'''$$$$$$'$$$$$," << endl;
								cout << "                              s$$$$$$$$$$s''$$$$ssssss'$$$$$$$$" << endl;
								cout << "                             s$$$$$$$$$$'         `'''''ss''$'$s" << endl;
								cout << "                             s$$$$$$$$$$,              `'''''''$  .s$$s" << endl;
								cout << "                             s$$$$$$$$$$$$s,...               `s$$'  `" << endl;
								cout << "                         `ssss$$$$$$$$$$$$$$$$$$$$####s.     .$$''$.   , s-" << endl;
								cout << "                           `''''$$$$$$$$$$$$$$$$$$$$#####$$$$$$''     $.$'" << endl;
								cout << "                                 ''$$$$$$$$$$$$$$$$$$$$$####s''''     .$$$|" << endl;
								cout << "                                  '$$$$$$$$$$$$$$$$$$$$$$$$##s    .$$'' $" << endl;
								cout << "                                   $$''$$$$$$$$$$$$$$$$$$$$$$$$$$$$$''   `" << endl;
								cout << "" << endl;
								cout << "\n* Your body couldn't take all the damage from the Hydra, leaving you with burn marks all over your body.\n  Causing agonizing pain all over your body as you slowly devoured\n  by the Hydra. It was a painful death.\n \n* The Hydra survived with "<< mhp[1] <<" hp left.\n" << endl;
								cout << "\n G A M E  O V E R\nType Y to continue ==> ";
								do {
									cin >> ko;
								} while(ko != 'Y' && ko != 'y');
								if(ko == 'Y' || ko == 'y') {
									goto losescreen;
								}
							}
							cout<< "* You took all attacks from the Hydra, leaving you with "<< hp[1] <<" hp left.\n" << endl;	
							cout << "=========================================================================" << endl;
							cout << "| Hercules                         | Hydra                              |" << endl;
							cout << "| --------                         | --------                           |" << endl;
							cout << "| HP  :" << hp[1] << "  HP                      | HP:" << mhp[1] << " HP                          |" << endl;
							cout << "| MANA:" << mana[1] << " MP                      |                                    |" << endl;
							cout << "| DEF :" << def[1] << " DP                        |                                    |" << endl;
							cout << "=========================================================================" << endl;
							cout << "=====================     =====================     =====================" << endl;
							cout << "| 1. Basic Attack   |     | 2. Special Attack |     |     3. Defend     |" << endl;
							cout << "=====================     =====================     =====================" << endl;
							cout << "                            Y O U R  M O V E:                            " << endl;
							do {
								cin >> choice;
							} while(choice < 1 || choice > 3);
								
							switch(choice) {
								case 1 :
								system("cls");
								atk = rand()%11+23;
								atk -= mdef[1];
								mhp[1] -= atk;
								cout << "\n* You wielded your sword and striked the Hydra! dealing " << atk << " damage." << endl;
							break;
							case 2 :
								system("cls");
								mana[1] -= 30;
								if(mana[1] >= 0) {
									atk = rand()%11+25;
									mhp[1] -= atk;
									cout << "\n* You charged your sword with your superhuman strength! dealing " << atk << " damage." << endl;
								}
								else {
									cout << "\nYou ran out of mana.\n" << endl;
								}
							break;
							case 3 :
								system("cls");
								mana[1] -= 10;
								if(mana[1] >= 0) {
									atk = rand()%6+21;
									atk -= mdef[1];
									mhp[1] -= atk;
									def[1]++;
									cout << "\n* You put up your shield, while dealing a small amount of " << atk << " damage." << endl;
								}
								else {
									cout << "\nYou ran out of mana.\n" << endl;
								}
							break;
							}
							if(mhp[1] < 1) {
								system("cls");
								cout << "                                ,-." << endl;
								cout << "                               (''O_)" << endl;
								cout << "                              / `-/" << endl;
								cout << "                             /-. /" << endl;
								cout << "                            /   /" << endl;
								cout << "                           /   /  " << endl;
								cout << "              _           /-. /" << endl;
								cout << "             (_)''-._    /   /" << endl;
								cout << "               '-._ ''-''( )/    " << endl;
								cout << "                   ''-/'-._'' `. " << endl;
								cout << "                    /     ''-.'._" << endl;
								cout << "                   //       /-._''-._" << endl;
								cout << "    _,---...__    /  ) _,-'/    ''-(_)" << endl;
								cout << "___<__(|) _   ''-/  / /   /" << endl;
								cout << " '  `----' ''-.   // /   /" << endl;
								cout << "               )  ] /   /" << endl;
								cout << "       ____..-'   //   /                       )" << endl;
								cout << "   ,-''      __.,'/   /   ___                 /," << endl;
								cout << "  /    ,-'''/  / /   /,-'   ''-.          ,'/" << endl;
								cout << " [    (    /  / /   /  ,.---,_   `._   _,-','" << endl;
								cout << "  |    `-./  / /   /  /       `-._  '''' ,-'" << endl;
								cout << "   `-._  /  / /   /_,'            ''--'" << endl;
								cout << "       '/  / /   /''         " << endl;
								cout << "       /  / /   /" << endl;
								cout << "      /  / /   /" << endl;
								cout << "     /  |,'   / " << endl;
								cout << "    :   /    /" << endl;
								cout << "    [  /   ,' " << endl;
								cout << "    | /  ,'" << endl;
								cout << "    |/,-'" << endl;
								cout << "    P'" << endl;
								cout << "" << endl;
								cout<< "\n* You successfully cut two of the Hydra's head, leaving one intact. You then put all of your\n  superhuman strength to your sword and swung your sword to the last Hydra's head.\n  Killing it instantly and survived with "<< hp[1] <<" hp left." << endl;
								cout<< "* After you successfully killed the Hydra, you absorbed the Hydra power.\n  Enhancing your attacks and defence.\n" << endl;
								cout << "Type N to continue ==> ";
								do {
									cin >> stage;
								} while(stage != 'N' && stage != 'n');
								goto level3;
							}
							cout << "* The Hydra took a massive damage from your attacks, leaving with " << mhp[1] << " hp left." << endl;
						}
					}
				}
				//Level 2
			//Level 2
			//Level 3
			level3 :
				srand(time(0));
				turn = rand()%2+1;
				//Prolog Level 3
				if(stage == 'N' || stage == 'n') {
					system("cls");
					cout << "===============================================================" << endl;
					cout << "|                                                             |" << endl;
					cout << "|                           STAGE 3                           | " << endl;
					cout << "|                                                             |" << endl;
					cout << "|                           Cerberus                          |" << endl;
					cout << "|                         ------------                        |" << endl;
					cout << "| The hound of Hades. A multi-headed dog that guards the gate |" << endl;
					cout << "|  of the Underworld to prevent the dead from living. He was  |" << endl;
					cout << "|      the offspring of the monsters Echidna and Typhon.      |" << endl;
					cout << "|                                                             |" << endl;
					cout << "===============================================================\n" << endl;
					cout << "Type Y to continue ==> ";
					do {
						cin >> lvl;
					} while(lvl != 'Y' && lvl != 'y');
				}
				//Prolog Level 3
				//Level 3
				if(lvl == 'Y' || lvl == 'y') {
					system("cls");
					cout << "=========================================================================" << endl;
					cout << "|                                                                       |" << endl;
					cout << "|  After you slained the Hydra, gaining immense power, you continue to  |" << endl;
					cout << "|   wander in order to find the strongest monsters there ever is. You   |" << endl;
					cout << "| came across a giant gate, with what seemed to be human remains around |" << endl;
					cout << "| it. When you approached the gate, the great Cerberus appeared behind  |" << endl;
					cout << "|   you. His eyes are locked to yours, his mouth is drooling, and the   |" << endl;
					cout << "|                      intention to kill you.                           |" << endl;
					cout << "|                                                                       |" << endl;
					cout << "=========================================================================\n" << endl;
					if(turn == 1) {
						cout << "[You took the chance to strike first!]" << endl;
						while(hp[2] > 0 || mhp[2] > 0) {
							cout << "=========================================================================" << endl;
							cout << "| Hercules                         | Cerberus                           |" << endl;
							cout << "| --------                         | --------                           |" << endl;
							cout << "| HP  :" << hp[2] << "  HP                      | HP:" << mhp[2] << " HP                          |" << endl;
							cout << "| MANA:" << mana[2] << " MP                      |                                    |" << endl;
							cout << "| DEF :" << def[2] << " DP                        |                                    |" << endl;
							cout << "=========================================================================" << endl;
							cout << "=====================     =====================     =====================" << endl;
							cout << "| 1. Basic Attack   |     | 2. Special Attack |     |     3. Defend     |" << endl;
							cout << "=====================     =====================     =====================" << endl;
							cout << "                            Y O U R  M O V E:                            " << endl;
							do {
								cin >> choice;
							} while(choice < 1 || choice > 3);
							
							switch(choice) {
							case 1 :
								system("cls");
								atk = rand()%11+30;
								atk -= mdef[2];
								mhp[2] -= atk;
								cout << "\n* You swung your sword against Cerberus, dealing " << atk << " damage.\n" << endl;
							break;
							case 2 :
								system("cls");
								mana[2] -= 30;
								if(mana[2] >= 0) {
									atk = rand()%11+35;
									mhp[2] -= atk;
									cout << "\n* You enchanced your sword! Making it burn in flames and dealing " << atk << " damage." << endl;
								}
								else {
									cout << "\nYou ran out of mana." << endl;
								}
							break;
							case 3 :
								system("cls");
								mana[2] -= 10;
								if(mana[2] >= 0) {
									atk = rand()%6+26;
									atk -= mdef[2];
									mhp[2] -= atk;
									def[2]++;
									cout << "\n* You enchanced your shield! Increasing your defence and dealing a small  " << atk << " damage." << endl;
								}
								else {
									cout << "\nYou ran out of mana." << endl;
								}
							break;
							}
							if(mhp[2] < 1) {
								system("cls");
								cout << " n                                                                 :." << endl;
								cout << " E%                                                                :''5" << endl;
								cout << "z  %                                                              :'' `" << endl;
								cout << "K   '':                                                           z   R" << endl;
								cout << "?     %.                                                       :^    J" << endl;
								cout << " ''.    ^s                                                     f     :~" << endl;
								cout << "  '+.    #L                                                 z''    .*" << endl;
								cout << "    '+     %L                                             z''    .~" << endl;
								cout << "      '':    '%.                                         .#     +" << endl;
								cout << "        '':    ^%.                                     .#`    +"<< endl;
								cout << "          #:    ''n                                  .+`   .z'" << endl;
								cout << "            #:    '':                               z`    +'" << endl;
								cout << "              %:   `*L                           z'    z''" << endl;
								cout << "                *:   ^*L                       z*   .+''" << endl;
								cout << "                  ''s   ^*L                   z#   .*'" << endl;
								cout << "                    #s   ^%L               z#   .*''" << endl;
								cout << "                      #s   ^%L           z#   .r''" << endl;
								cout << "                        #s   ^%.       u#   .r''" << endl;
								cout << "                          #i   '%.   u#   .@''" << endl;
								cout << "                            #s   ^%u#   .@''" << endl;
								cout << "                              #s x#   .*''" << endl;
								cout << "                               x#`  .@%." << endl;
								cout << "                             x#`  .d''  '%." << endl;
								cout << "                           xf~  .r'' #s   '%." << endl;
								cout << "                     u   x*`  .r'     #s   ''%.  x." << endl;
								cout << "                     %Mu*`  x*''         #m.  ''%zX'" << endl;
								cout << "                     :R(h x*              ''h..*dN." << endl;
								cout << "                   u@NM5e#>                 7?dMRMh." << endl;
								cout << "                 z$@M@$#''#'                 *''*@MM$hL" << endl;
								cout << "               u@@MM8*                          ''*$M@Mh." << endl;
								cout << "             z$RRM8F''                             'N8@M$bL" << endl;
								cout << "            5`RM$#                                  'R88f)R" << endl;
								cout << "            'h.$''                                     #$x*" << endl;
								cout << "" << endl;
								cout<< "* You paralyzed Cerberus, making him unable to move. You leaped and\n  aimed your sword towards Cerberus's heart, killing the mythical beast.\n \n* You survived with "<< hp[2] <<" hp left.\n" << endl;
								cout << "Type N to continue ==> ";
								do {
									cin >> stage;
								} while(stage != 'N' && stage != 'n');
								goto endprolog;
							}
							cout << "* Cerberus took slashes from your sword! Leaving with " << mhp[2] << " hp left.\n" << endl;
							
							choice = rand()%1+1;
							switch(choice) {
								case 1 :
									matk = rand()%11+30;
									matk -= def[2];
									hp[2] -= matk;
									cout << "* Cerberus attacked you with his razor sharp teeth! Dealing " << matk << " damage.\n" << endl;
								break;
							}
							if(hp[2] < 1) {
								system("cls");
								cout << "             ..ooo@@@XXX%%%xx.." << endl;
								cout << "          .oo@@XXX%x%xxx..     ` ." << endl;
								cout << "        .o@XX%%xx..               ` ." << endl;
								cout << "      o@X%..                  ..ooooooo" << endl;
								cout << "    .@X%x.                 ..o@@^^   ^^@@o" << endl;
								cout << "  .ooo@@@@@@ooo..      ..o@@^          @X%" << endl;
								cout << "  o@@^^^     ^^^@@@ooo.oo@@^             %" << endl;
								cout << " xzI    -*--      ^^^o^^        --*-     %" << endl;
								cout << " @@@o     ooooooo^@@^o^@X^@oooooo     .X%x" << endl;
								cout << "I@@@@@@@@@XX%%xx  ( o@o )X%x@ROMBASED@@@X%x" << endl;
								cout << "I@@@@XX%%xx  oo@@@@X% @@X%x   ^^^@@@@@@@X%x" << endl;
								cout << " @X%xx     o@@@@@@@X% @@XX%%x  )    ^^@X%x" << endl;
								cout << "  ^   xx o@@@@@@@@Xx  ^ @XX%%x    xxx" << endl;
								cout << "        o@@^^^ooo I^^ I^o ooo   .  x" << endl;
								cout << "        oo @^ IX      I   ^X  @^ oo" << endl;
								cout << "        IX     U  .        V     IX" << endl;
								cout << "         V     .           .     V" << endl;
								cout << "" << endl;
								cout << "* Cerberus managed to bite your arm, ripping it apart, making you vunerable.\n  Leaving you bleeding on the floor, powerless, as Cerberus hauled you to death.\n  It was a painful and agonizing death.\n \n* Cerberus survived with "<< mhp[2] <<" hp left.\n" << endl;
								cout << "\n G A M E  O V E R\nType Y to continue ==> ";
								do {
									cin >> ko;
								} while(ko != 'Y' && ko != 'y');
								if(ko == 'Y' || ko == 'y') {
									goto losescreen;
								}
							}
							cout<< "* You took some damage from Cerberus! Leaving you with "<< hp[2] <<" hp left.\n" << endl;
						}
					}
					else {
						cout << "[Cerberus leaped towards you!]" << endl;
						cout << "--------------------------\n" << endl;
						while(hp[2] > 0 || mhp[2] > 0) {
							choice = rand()%1+1;
							switch(choice) {
								case 1 :
									matk = rand()%11+30;
									matk -= def[2];
									hp[2] -= matk;
									cout << "* Cerberus attacked you with his razor sharp teeth! Dealing " << matk << " damage.\n" << endl;
								break;
							}
							if(hp[2] < 1) {
								system("cls");
								cout << "             ..ooo@@@XXX%%%xx.." << endl;
								cout << "          .oo@@XXX%x%xxx..     ` ." << endl;
								cout << "        .o@XX%%xx..               ` ." << endl;
								cout << "      o@X%..                  ..ooooooo" << endl;
								cout << "    .@X%x.                 ..o@@^^   ^^@@o" << endl;
								cout << "  .ooo@@@@@@ooo..      ..o@@^          @X%" << endl;
								cout << "  o@@^^^     ^^^@@@ooo.oo@@^             %" << endl;
								cout << " xzI    -*--      ^^^o^^        --*-     %" << endl;
								cout << " @@@o     ooooooo^@@^o^@X^@oooooo     .X%x" << endl;
								cout << "I@@@@@@@@@XX%%xx  ( o@o )X%x@ROMBASED@@@X%x" << endl;
								cout << "I@@@@XX%%xx  oo@@@@X% @@X%x   ^^^@@@@@@@X%x" << endl;
								cout << " @X%xx     o@@@@@@@X% @@XX%%x  )    ^^@X%x" << endl;
								cout << "  ^   xx o@@@@@@@@Xx  ^ @XX%%x    xxx" << endl;
								cout << "        o@@^^^ooo I^^ I^o ooo   .  x" << endl;
								cout << "        oo @^ IX      I   ^X  @^ oo" << endl;
								cout << "        IX     U  .        V     IX" << endl;
								cout << "         V     .           .     V" << endl;
								cout << "" << endl;
								cout << "* Cerberus managed to bite your arm, ripping it apart, making you vunerable.\n  Leaving you bleeding on the floor, powerless, as Cerberus hauled you to death.\n  It was a painful and agonizing death.\n \n* Cerberus survived with "<< mhp[2] <<" hp left.\n" << endl;
								cout << "\n G A M E  O V E R\nType Y to continue ==> ";
								do {
									cin >> ko;
								} while(ko != 'Y' && ko != 'y');
								if(ko == 'Y' || ko == 'y') {
									goto losescreen;
								}
							}
							cout<< "* You took some damage from Cerberus! Leaving you with "<< hp[2] <<" hp left.\n" << endl;
							cout << "=========================================================================" << endl;
							cout << "| Hercules                         | Cerberus                           |" << endl;
							cout << "| --------                         | --------                           |" << endl;
							cout << "| HP  :" << hp[2] << "  HP                      | HP:" << mhp[2] << " HP                          |" << endl;
							cout << "| MANA:" << mana[2] << " MP                      |                                    |" << endl;
							cout << "| DEF :" << def[2] << " DP                        |                                    |" << endl;
							cout << "=========================================================================" << endl;
							cout << "=====================     =====================     =====================" << endl;
							cout << "| 1. Basic Attack   |     | 2. Special Attack |     |     3. Defend     |" << endl;
							cout << "=====================     =====================     =====================" << endl;
							cout << "                            Y O U R  M O V E:                            " << endl;                
							do {
								cin >> choice;
							} while(choice < 1 || choice > 3);
								
							switch(choice) {
								case 1 :
								system("cls");
								atk = rand()%11+30;
								atk -= mdef[2];
								mhp[2] -= atk;
								cout << "\n* You swung your sword against Cerberus, dealing " << atk << " damage.\n" << endl;
							break;
							case 2 :
								system("cls");
								mana[2] -= 30;
								if(mana[2] >= 0) {
									atk = rand()%11+35;
									mhp[2] -= atk;
									cout << "\n* You enchanced your sword! Making it burn in flames and dealing " << atk << " damage." << endl;
								}
								else {
									cout << "\nYou ran out of mana." << endl;
								}
							break;
							case 3 :
								system("cls");
								mana[2] -= 10;
								if(mana[2] >= 0) {
									atk = rand()%6+26;
									atk -= mdef[2];
									mhp[2] -= atk;
									def[2]++;
									cout << "\n* You enchanced your shield! Increasing your defence and dealing a small  " << atk << " damage." << endl;
								}
								else {
									cout << "\nYou ran out of mana." << endl;
								}
							break;
							}
							if(mhp[2] < 1) {
								system("cls");
								cout << " n                                                                 :." << endl;
								cout << " E%                                                                :''5" << endl;
								cout << "z  %                                                              :'' `" << endl;
								cout << "K   '':                                                           z   R" << endl;
								cout << "?     %.                                                       :^    J" << endl;
								cout << " ''.    ^s                                                     f     :~" << endl;
								cout << "  '+.    #L                                                 z''    .*" << endl;
								cout << "    '+     %L                                             z''    .~" << endl;
								cout << "      '':    '%.                                         .#     +" << endl;
								cout << "        '':    ^%.                                     .#`    +"<< endl;
								cout << "          #:    ''n                                  .+`   .z'" << endl;
								cout << "            #:    '':                               z`    +'" << endl;
								cout << "              %:   `*L                           z'    z''" << endl;
								cout << "                *:   ^*L                       z*   .+''" << endl;
								cout << "                  ''s   ^*L                   z#   .*'" << endl;
								cout << "                    #s   ^%L               z#   .*''" << endl;
								cout << "                      #s   ^%L           z#   .r''" << endl;
								cout << "                        #s   ^%.       u#   .r''" << endl;
								cout << "                          #i   '%.   u#   .@''" << endl;
								cout << "                            #s   ^%u#   .@''" << endl;
								cout << "                              #s x#   .*''" << endl;
								cout << "                               x#`  .@%." << endl;
								cout << "                             x#`  .d''  '%." << endl;
								cout << "                           xf~  .r'' #s   '%." << endl;
								cout << "                     u   x*`  .r'     #s   ''%.  x." << endl;
								cout << "                     %Mu*`  x*''         #m.  ''%zX'" << endl;
								cout << "                     :R(h x*              ''h..*dN." << endl;
								cout << "                   u@NM5e#>                 7?dMRMh." << endl;
								cout << "                 z$@M@$#''#'                 *''*@MM$hL" << endl;
								cout << "               u@@MM8*                          ''*$M@Mh." << endl;
								cout << "             z$RRM8F''                             'N8@M$bL" << endl;
								cout << "            5`RM$#                                  'R88f)R" << endl;
								cout << "            'h.$''                                     #$x*" << endl;
								cout << "" << endl;
								cout<< "* You paralyzed Cerberus, making him unable to move. You leaped and\n  aimed your sword towards Cerberus's heart, killing the mythical beast.\n \n* You survived with "<< hp[2] <<" hp left.\n" << endl;
								cout << "Type N to continue ==> ";
								do {
									cin >> stage;
								} while(stage != 'N' && stage != 'n');
								goto endprolog;
							}
							cout << "* Cerberus took slashes from your sword! Leaving with " << mhp[2] << " hp left." << endl;
						}
					}
				}
				//break;
				//Level 3
			//Level 3
			//Ending
			endprolog :
				system("cls");
				cout << "=========================================================================" << endl;
				cout << "|                                                                       |" << endl;
				cout << "|   After Hercules beat all his enemies. He was elevated to the God of  |" << endl;
				cout << "|     Olympus. He was married to a woman name Hebe who was believed     |" << endl;
				cout << "|  to be the goddess of youth in Greek mythology and also the daughter  |" << endl;
				cout << "|           of Zeus and Hera. They live happily ever after.             |" << endl;
				cout << "|                                                                       |" << endl;
				cout << "=========================================================================\n" << endl;
				cout << "Type Y to continue ==> ";
				do {
					cin >> ko;
				} while(ko != 'Y' && ko != 'y');
				if(ko == 'Y' || ko == 'y') {
					goto winscreen;
				}
			//Ending
			//Win and lose screen
			winscreen :
				system("cls");
				cout << "===================================================================" << endl;
				cout << "|          _________ _______ _________ _______  _______           |" << endl;
				cout << "| |\\     /|\\__   __/(  ____ \\\\__   __/(  ___  )(  ____ )|\\     /| |" << endl;
				cout << "| | )   ( |   ) (   | (    \\/   ) (   | (   ) || (    )|( \\   / ) |" << endl;
				cout << "| | |   | |   | |   | |         | |   | |   | || (____)| \\ (_) /  |" << endl;
				cout << "| ( (   ) )   | |   | |         | |   | |   | ||     __)  \\   /   |" << endl;
				cout << "|  \\ \\_/ /    | |   | |         | |   | |   | || (\\ (      ) (    |" << endl;
				cout << "|   \\   /  ___) (___| (____/\\   | |   | (___) || ) \\ \\__   | |    |" << endl;
				cout << "|    \\_/   \\_______/(_______/   )_(   (_______)|/   \\__/   \\_/    |" << endl;
				cout << "|                                                                 |" << endl;
				cout << "===================================================================\n" << endl;
				cout << "Type E to continue ==> ";
				do {
					cin >> ko;
				} while(ko != 'E' && ko != 'e');
				if(ko == 'E' || ko == 'e') {
					goto exit;
				}
				
			losescreen :
				system("cls");
				cout << "================================================================" << endl;
				cout << "|  _______   _______  _______  _______     ___   .___________. |" << endl;
				cout << "| |       \\ |   ____||   ____||   ____|   /   \\  |           | |" << endl;
				cout << "| |  .--.  ||  |__   |  |__   |  |__     /  ^  \\ `---|  |----` |" << endl;
				cout << "| |  |  |  ||   __|  |   __|  |   __|   /  /_\\  \\    |  |      |" << endl;
				cout << "| |  '--'  ||  |____ |  |     |  |____ /  _____  \\   |  |      |" << endl;
				cout << "| |_______/ |_______||__|     |_______/__/     \\__\\  |__|      |" << endl;
				cout << "|                                                              |" << endl;
				cout << "================================================================\n" << endl;
				cout << "Type E to continue ==> ";
				do {
					cin >> ko;
				} while(ko != 'E' && ko != 'e');
				if(ko == 'E' || ko == 'e') {
					goto exit;
				}
			//win and lose screen
			break;
		//Play
		//Info menu
		case 2 :
			info :
				system("cls");
				cout << "================================================================" << endl;
				cout << "|                 ¦¦ ¦¦¦    ¦¦ ¦¦¦¦¦¦¦  ¦¦¦¦¦¦                 |" << endl;
				cout << "|                 ¦¦ ¦¦¦¦   ¦¦ ¦¦      ¦¦    ¦¦                |" << endl;
				cout << "|                 ¦¦ ¦¦ ¦¦  ¦¦ ¦¦¦¦¦   ¦¦    ¦¦                |" << endl;
				cout << "|                 ¦¦ ¦¦  ¦¦ ¦¦ ¦¦      ¦¦    ¦¦                |" << endl;
				cout << "|                 ¦¦ ¦¦   ¦¦¦¦ ¦¦       ¦¦¦¦¦¦                 |" << endl;
				cout << "| ------------------------------------------------------------ |" << endl;
				cout << "| Hercules                                                     |" << endl;
				cout << "| A God of strength and heroes. The champion of the weak and   |" << endl;
				cout << "| and the great protector of his people. Fighting his way      |" << endl;
				cout << "| against fearsome monsters to be the greatest.                |" << endl;
				cout << "|                                                              |" << endl;
				cout << "| HP:100                                                       |" << endl;
				cout << "| ATK:20                                                       | " << endl;
				cout << "| DEF:8                                                        |" << endl;
				cout << "================================================================" << endl;
				cout << "| Minotaur                                                     |" << endl;
				cout << "| A hammer wielding mystical beast. A half-man, half-bull,     |" << endl;
				cout << "| filled with rage. Willing to destroy anything in its way.    |" << endl;
				cout << "|                                                              |" << endl;
				cout << "| HP:100                                                       |" << endl;
				cout << "| ATK:15                                                       |" << endl;
				cout << "| DEF:10                                                       |" << endl;
				cout << "================================================================" << endl;
				cout << "| Hydra                                                        |" << endl;
				cout << "| Not one, not two, but a three headed dragon. With its fiery  |" << endl;
				cout << "| breath, steel like skin, razor sharp claws, and humongous    |" << endl;
				cout << "| wings. This fearsome creature stands at 13 meters, prepared  |" << endl;
				cout << "| to eliminate anything and become the ruler of earth          |" << endl;
				cout << "|                                                              |" << endl;
				cout << "| HP:150                                                       |" << endl;
				cout << "| ATK:20                                                       |" << endl;
				cout << "| DEF:15                                                       |" << endl;
				cout << "================================================================" << endl;
				cout << "| Cerberus                                                     |" << endl;
				cout << "| The hound of Hades. A three headed dog, ready to devour any  |" << endl;
				cout << "| thing in sight. Razor sharp teeth, lightning speed, razor    |" << endl;
				cout << "| sharp claws, and extraordinary strength. The hound will bring|" << endl;
				cout << "| nothing other than terror and d e a t h.                     |" << endl;
				cout << "|                                                              |" << endl;
				cout << "| HP:200                                                       |" << endl;
				cout << "| ATK:30                                                       |" << endl;
				cout << "| DEF:25                                                       |" << endl;
				cout << "================================================================\n" << endl;
				cout << "Type R to return ==> ";
				do {
					cin >> back;
				}
				while(back != 'R' && back != 'r');
				
				if(back == 'R' || back == 'r') {
					goto mainmenu;
				}
				break;
		//Info menu
		// Exit Menu
		case 3:
			exit :
				system("cls");
				cout << "==================================================" << endl;
				cout << "|                                                |" << endl;
				cout << "|     T H A N K Y O U  F O R  P L A Y I N G      |" << endl;
				cout << "|                                                |" << endl;
				cout << "==================================================" << endl;
		// Exit menu
	}
return 0;
}
