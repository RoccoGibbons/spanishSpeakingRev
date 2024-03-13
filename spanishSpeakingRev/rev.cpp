#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int randomGenerator(int min, int max){
    srand((int)time(0));
    int random = rand()%(max-min + 1) + min;
    return random;
}

/*
{"Question in Spanish", "Question in English", "Answer"}
*/

string answers[47][3] = {{"", "", ""},
                        {"", "", ""},
                        {"", "", ""},
                        {"", "", ""},
                        {"", "", ""},
                        {"", "", ""},
                        {"", "", ""},
                        {"", "", ""},
                        {"", "", ""},
                        {"", "", ""},
                        {"", "", ""},
                        {"", "", ""},
                        {"", "", ""},
                        {"", "", ""},
                        {"", "", ""},
                        {"", "", ""},
                        {"", "", ""},
                        {"", "", ""},
                        {"", "", ""},
                        {"", "", ""},
                        {"", "", ""},
                        {"", "", ""},
                        {"", "", ""},
                        {"", "", ""},
                        {"", "", ""},
                        {"", "", ""},
                        {"", "", ""},
                        {"", "", ""},
                        {"", "", ""},
                        {"", "", ""},
                        {"", "", ""},
                        {"", "", ""},
                        {"", "", ""},
                        {"", "", ""},
                        {"", "", ""},
                        {"", "", ""},
                        {"", "", ""},
                        {"", "", ""},
                        {"", "", ""},
                        {"", "", ""},
                        {"", "", ""},
                        {"", "", ""},
                        {"", "", ""},
                        {"", "", ""},
                        {"", "", ""},
                        {"", "", ""},
                        {"", "", ""}};

int main(){
    cout << "-----Spanish Speaking Revision Time !-----\n";
    while(true){
        cout << "\nWhat would you like to revise?\n";
        cout << "Enter the number of the option you wish to choose\n";
        cout << "1.Free Time\n2.School and Future Plans\n3.Home and local area\n4.Family, freinds and technology\n5.All\n";
        int module;
        cin >> module;
        while(true){
            int number = 0;
            switch(module){
                case 1:
                    number = randomGenerator(0,9);
                    break;
                case 2:
                    number = randomGenerator(10,24);
                    break;
                case 3:
                    number = randomGenerator(25,36);
                    break;
                case 4:
                    number = randomGenerator(37,46);
                    break;
                case 5:
                    number = randomGenerator(0,46);
                    break;
            }

            cout << '\n' << answers[number][0] << '\n';
            cout << '\n' << "Would you like to: \n1.Continue to next question\n2.Have the question in English\n3.See prompt\n4.See both\n5.Change module\n";
            int input;
            cin >> input;

            if(input == 1){
                continue;
            }
            else if(input == 2){
                cout << answers[number][1] << '\n';
            }
            else if(input == 3){
                cout << answers[number][2] << '\n';
            }  
            else if(input == 4){
                cout << answers[number][1] << '\n';
                cout << answers[number][2] << '\n';
            }          
            else if(input == 5){
                break;
            }

        }
    }
    
    return 0;
}