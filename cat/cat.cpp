#include <iostream>
#include <ctime>
#include <cstdlib>
#include <windows.h>

#include "cat.h"

using namespace std;

void appear() {
    cout << "A smol cat approched...." << endl << endl;
    Sleep(2000);
}

void gameOptions(Hooman& gabbi, Cat& zookie, Inventory& drawer) {
    cout << "=============================" << endl;
    cout << "Welcome " << gabbi.name << "!" << endl;
    cout << "Health: " << gabbi.health << endl;
    cout << "Cat Foods: " << drawer.catFoodSupply << endl;
    cout << "Cat Affection: "<< zookie.affectionLevel << endl;
    cout << "=============================" << endl << endl;

    cout << "What do you want to do?" << endl;
    cout << "1.) Buy Cat Food" << endl;
    cout << "2.) Feed the Cat" << endl;
    cout << "3.) Pet the Cat" << endl;
    cout << "4.) Exit" << endl;

}

void Hooman::subtractHealth(Cat& zookie) {
    if (health > 0) {
        health -= zookie.damage ;
        if (health < 0) {
            health = 0;
        }
    }
}

void Hooman::damagePlayer(Cat& zookie) {

    subtractHealth(zookie);
    cout << "Zookie: mrrrr... RAWR ! RAWR !" << endl;
    Sleep(2000);
    cout << name << " took " << zookie.damage << " damage!" << endl << endl;

}

void petCat() {
    cout << "Zookie: mrrow... :3" << endl;
    Sleep(2000);
    cout << endl << "You successfully petted the cat ! You win !" << endl;
}

void Inventory::checkStore() {
    srand(time(0));
    int chance = rand() % 2;

    if (chance == 0) {
        catFoodSupply++;
        cout << "You bought a Cat Food." <<endl << endl;
        Sleep(1000);

    } else {
        cout << "The store was closed. You didn`t bought any Cat Foods." << endl << endl;
        Sleep(1000);
    }
}

void Cat::feedCat(Inventory& drawer) {

    if (drawer.catFoodSupply > 0) {
        drawer.catFoodSupply--;
        affectionLevel += 20;


        cout << "Zookie: *nom nom nom nom* " << endl;
        Sleep(1000);
        cout << endl << "Meow! :3" << endl;

        if (affectionLevel > 100) {
            affectionLevel = 100;
            cout << endl << "You now have enough affection to pet zookie." << endl << endl;
        }


    } else {
        cout << "You dont have enough cat foods to feed zookie." << endl << endl;
        Sleep(2000);
    }
}













