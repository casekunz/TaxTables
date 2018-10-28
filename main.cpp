#include <iostream>
#include <string>

using namespace std;


int main() {

    //variables
    double totalIncome = 0;
    string maritalStatus;
    double taxedIncome = 0;
    string calculateAgain;


    cout << "Hello, World!  Welcome to Tax Calculator!" << endl;

    cout << "What is your taxable income?";
    cin >> totalIncome;
    if (totalIncome > 0)
    {
        do{
            do{

                if(!cin)
                {
                    cin.clear();
                    cin.ignore(numeric_limits<int>::max(), '\n');
                }
                cout << "Are you filing as single or married? (s/m)";

                cin >> maritalStatus;

                if (maritalStatus == "m" || maritalStatus == "s") {

                    if (maritalStatus == "m") {

                        if (totalIncome <= 1726) {
                            taxedIncome = ((totalIncome - 0) * 0.023) + 0;
                            cout << taxedIncome;

                        } else if (totalIncome <= 5176 && totalIncome > 1726) {
                            taxedIncome = ((totalIncome - 1726) * 0.033) + 40;
                            cout << taxedIncome;

                        } else if (totalIncome <= 8626 && totalIncome > 5176) {
                            taxedIncome = ((totalIncome - 5176) * 0.052) + 175;
                            cout << taxedIncome;

                        } else if (totalIncome > 8626) {
                            taxedIncome = ((totalIncome - 8626) * .075) + 390;
                            cout << taxedIncome;
                        }

                    } else if (maritalStatus == "s") {
                        if (totalIncome <= 863) {
                            taxedIncome = ((totalIncome - 0) * 0.023) + 0;
                            cout << taxedIncome;

                        } else if (totalIncome <= 2588 && totalIncome > 863) {
                            taxedIncome = ((totalIncome - 863) * .033) + 25;
                            cout << taxedIncome;

                        } else if (totalIncome <= 4313 && totalIncome > 2588) {
                            taxedIncome = ((totalIncome - 2588) * .052) + 85;
                            cout << taxedIncome;

                        } else if (totalIncome > 4313) {
                            taxedIncome = ((totalIncome - 4313) * .075) + 181;
                            cout << taxedIncome;
                        }
                    }
                }

            }while(maritalStatus != "s" || maritalStatus != "m");


        } while (totalIncome < 0);
    } else
        {
        cout << "The program has encountered a critical error, and must shut down.";
            return 0;
        }








    return 0;
}
