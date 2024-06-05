#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int dice();
int getResult();
int main()
    {

        cout << "**************************************************************" << endl;
        cout << "******************** FIVE ROLLS DICE GAME ********************" << endl;
        cout << "**************************************************************" << endl;
        cout << "**                                                          **" << endl;
    getResult();
    }
    int getResult()
    {
        srand(time(0));
        int myarray[6];
        for (int i =0; i<5; i++)
    {

    int number = dice();
        myarray[i] = number;

        cout << "**\t\t\tYou rolled: " << number << " \t\t\t    **" << endl;

    }
        cout << "**                                                          **" << endl;
        cout << "**************************************************************" << endl;
        cout << "**************************************************************" << endl;
        int counter = 0;
        for (int j = 0; j<6; j++)
    {
        for (int k = 0; k<6; k++)
    {



        if (myarray[k]==j);

    }
 
        int counter = 0;
    for (int i = 0; i < 5; i++) {
    if (myarray[i] == 2)
        {
    counter = counter + 1;
    }
    // continue for all even numbers
    }

    if (counter >= 2) {

    cout << "you win !!!" << endl;
    } else {
    cout << "you losee !!!" << endl;
    }

    }
    }
    int dice()
    {
    int dice1 = (int)(1+(rand()%6));

    int diceSum = dice1;

    return diceSum;
}
