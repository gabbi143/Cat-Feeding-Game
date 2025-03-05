#include <iostream>
#include <ctime>
#include <cstdlib>
#include <windows.h>

#include "cat.h"

using namespace std;

int main()
{
    Hooman gabbi(100, "Gabbi");
    Cat zookie(20, 0);
    Inventory drawer (0);

    string playerAns;

        appear();

    while (true) {

        gameOptions(gabbi, zookie, drawer);

        cout << endl << "Enter Input : ";
        getline(cin,playerAns);

        if(playerAns == "1") {

            system("cls");
            drawer.checkStore();

        } else if (playerAns == "2") {

            system("cls");
            zookie.feedCat(drawer);

        } else if (playerAns == "3") {

            system("cls");
                if (zookie.affectionLevel < 100) {
                    gabbi.damagePlayer(zookie);
                    if (gabbi.health == 0) {
                        cout << "You Lost. You died due to Zookie`s Scratches." << endl;
                        return 0;
                    }
                } else {
                    petCat();
                    return 0;
                }

        } else if (playerAns == "4") {

            system("cls");
            cout << "Thanks for playing." << endl;
            return 0;

        } else {

            system("cls");
            cout << "Invalid Input. Try again." << endl;

        }
    }








    return 0;
}
