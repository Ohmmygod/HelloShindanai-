#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>

using namespace std;

int main() {
    
    string start_key;
    string error {"Sorry, you may have entered an invalid key. Please try again.\n"};
    string indicate {"Please enter: "};
    string endline {"==================================\n\n"};
    
    string guide1 {"Feel free to type in another selection if you'd like to learn anything more!\n"};

  
    cout << "Hello, I'm Shindanai!\n\nPlease to meet you! If you'd like to learn anything, feel free to type 'Hey'\n\n**Type 'key' to shows some secret keywords!\n**If you wish to exit the program, please type 'Exit'.\n" << endl;
  
        do {
            cout << endline;
            cout << indicate;
            cin >> start_key;

            char select_num;
            string USERname;
            if (start_key == "Hey" || start_key == "hey") {
            cout << "What do you want to know?\n" << endl;
            cout << "(Please enter the following number)\n" << endl;
            cout << "1.) Name\n2.) Date of Birth\n3.) Education Records\n4.) Current GPAX\n" << endl;
            
            do {
            cout << indicate;
            cin >> select_num;            
                switch (select_num) {
                    case '1':
                        cout << endline;
                        cout << "Hello, my name is Shindanai Rugniyom\nMy nickname is Ohm." << endl;
                        cout << "May I ask what is your name too? (Please only type your name without any space)\n\n" << indicate << "It's ";
                        cin >> USERname;
                        cout << "It's my pleasure to meet you " << USERname << "! \n" << guide1 << endl;
                        break;
                    case '2':
                        cout << endline;
                        cout << "I was born in 2005 May 22nd, on Sunday!\n" << endl;
                        break;
                    case '3':
                        cout << endline;
                        cout << "Here is my Education records!\n\nI graduated from Beaconhouse Yamsaard Rangsit school during my kindergarten and primary with GPAX of 3.99\n\nI graduated from Saipanyarangsit school during M.1-3 with the GPAX of 3.96\n\nI am currently the M.6 student of Saipanyarangsit school." << endl;
                        break;
                    case '4':
                        cout << endline;
                        cout << "My current GPAX consists of 5 terms, equals to 3.99\n" << endl;
                        break;
                    case 'e':
                    case 'E':
                           cout << "Thank you for playing through! Have a nice day!" << endl;
                           cin.get();
                           cin.get();
                           break;
                    default:
                        cout << endline << endl << endl;
                        cout << error << endl;
                        break;
                }
                } while (select_num != 'e' || select_num != 'E');
                
            } else if (start_key == "key" || start_key == "KEY" || start_key == "KEy" || start_key == "Key" || start_key == "KeY") {
                cout << "These are the keywords you may enter!\n" << endl;
                cout << "Hey\nKey\nExit\n" << endl;                
            }
             else if (start_key == "Exit" || start_key == "exit")
             {
                cout << "Thank you for playing through! Have a nice day!" << endl;
                cin.get();
                cin.get();
                break;
             }
             else {
                 cout << error << endl << endl;
             }

        } while (start_key != "E" || start_key != "e");

    return 0;


}
