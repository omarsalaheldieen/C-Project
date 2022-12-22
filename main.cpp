#include <iostream>
#include <string.h>
#include <conio.h>
#include <fstream>
#include <windows.h>
#include <ctime>
using namespace std;
int service, z, x, b;
char ch;
char gender[50];
char name[50];
char ID1[50];
char phone[50];
char password[50];
char balance[50];
char money1[50];
char a[50];
char c[50] = {time(0) + 1000000000000000};
string pass = "";
string s, password1, password2, phone1, accountnumber, ID;
int money, amount = 0;
int Customer_services()
{
    fstream out;
    fstream fake;

    switch (service)
    {
    case 1:
        cout << "your balance is " << balance << "EGP" << endl;
        break;
    case 2:
        out.open("Data.txt", ios::in);
        fake.open("fake1.txt", ios::out);
        cin.ignore();
        a == name;
        while (!out.eof())
        {
            out.getline(c, 50, '|');
            out.getline(name, 50, '|');
            out.getline(ID1, 50, '|');
            out.getline(phone, 50, '|');
            out.getline(password, 50, '|');
            out.getline(gender, 50, '|');
            out.getline(balance, 50);
            if (strcmp(name, a) == 0)
            {
                cout << "The maximum withdrawal amount at one time is 4000 EGP\n";
                cout << "Enter the amount you want to withdraw\n";
                cin.getline(money1, 50);
                while (money >= 4000)
                {
                    cout << "Error\nThe maximum withdrawal amount is 4000 EGP\n";
                    cin.getline(money1, 50);
                }
                cout << "you withdrew " << money1 << "EGP" << endl;
                cout << "Your blance is " << atoi(balance) - atoi(money1) << "EGP" << endl;
                b = atoi(balance) - atoi(money1);
                fake << c << '|' << name << '|' << ID1 << '|' << phone << '|' << password << '|' << gender << '|' << b << '\n';
            }
            else
            {
                fake << c << '|' << name << '|' << ID1 << '|' << phone << '|' << password << '|' << gender << '|' << atoi(balance) << '\n';
            }
        }
        fake.close();
        out.close();
        out.open("Data.txt", ios::out);
        fake.open("fake1.txt", ios::in);
        while (!fake.eof())
        {
            fake.getline(c, 50, '|');
            fake.getline(name, 50, '|');
            fake.getline(ID1, 50, '|');
            fake.getline(phone, 50, '|');
            fake.getline(password, 50, '|');
            fake.getline(gender, 50, '|');
            fake.getline(balance, 50);
            out << c << '|' << name << '|' << ID1 << '|' << phone << '|' << password << '|' << gender << '|' << atoi(balance) << '\n';
        }
        fake.close();
        out.close();
        remove("fake1.txt");
        cout << "\n done !!! \n";

        break;
    case 3:
        out.open("Data.txt", ios::in);
        fake.open("fake1.txt", ios::out);
        cin.ignore();
        a == name;
        while (!out.eof())
        {
            out.getline(c, 50, '|');
            out.getline(name, 50, '|');
            out.getline(ID1, 50, '|');
            out.getline(phone, 50, '|');
            out.getline(password, 50, '|');
            out.getline(gender, 50, '|');
            out.getline(balance, 50);
            if (strcmp(name, a) == 0)
            {
                cout << "Enter the amount you want to deposit\n";
                cin.getline(money1, 50);
                cout << "You depoisted : " << money1 << endl;
                cout << "Your blance is : " << atoi(balance) + atoi(money1) << "EGP" << endl;
                b = atoi(balance) + atoi(money1);
                fake << c << '|' << name << '|' << ID1 << '|' << phone << '|' << password << '|' << gender << '|' << b << '\n';
            }
            else
            {
                fake << c << '|' << name << '|' << ID1 << '|' << phone << '|' << password << '|' << gender << '|' << atoi(balance) << '\n';
            }
        }
        fake.close();
        out.close();

        out.open("Data.txt", ios::out);
        fake.open("fake1.txt", ios::in);
        while (!fake.eof())
        {
            fake.getline(c, 50, '|');
            fake.getline(name, 50, '|');
            fake.getline(ID1, 50, '|');
            fake.getline(phone, 50, '|');
            fake.getline(password, 50, '|');
            fake.getline(gender, 50, '|');
            fake.getline(balance, 50);
            out << c << '|' << name << '|' << ID1 << '|' << phone << '|' << password << '|' << gender << '|' << atoi(balance) << '\n';
        }
        fake.close();
        out.close();
        remove("fake1.txt");
        cout << "\n done !!! \n";

        break;
    case 4:
        out.open("Data.txt", ios::in);
        fake.open("fake1.txt", ios::out);
        cin.ignore();
        a == name;
        while (!out.eof())
        {
            out.getline(c, 50, '|');
            out.getline(name, 50, '|');
            out.getline(ID1, 50, '|');
            out.getline(phone, 50, '|');
            out.getline(password, 50, '|');
            out.getline(gender, 50, '|');
            out.getline(balance, 50);
            if (strcmp(name, a) == 0)
            {
                cout << "Enter the the accountnumber you want to donate to\n";
                ch = _getch();
                while (ch != 13)
                {
                    accountnumber.push_back(ch);
                    cout << '*';
                    ch = _getch();
                }
                cout << endl;
                while (accountnumber.length() != 16)
                {
                    cout << "invalid account number\nEnter it again\n";
                    cin >> accountnumber;
                }
                cout << "enter the amount you want to donate\n";
                cin >> amount;
                while (amount >= 100000)
                {
                    cout << "sorry you cannot donate more than 100000pounds\n";
                    cin >> amount;
                }
                cout << "you withdrew " << amount << "EGP" << endl;
                cout << "Your blance is " << atoi(balance) - amount << "EGP" << endl;
                b = atoi(balance) - amount;
                fake << c << '|' << name << '|' << ID1 << '|' << phone << '|' << password << '|' << gender << '|' << b << '\n';
            }
            else
            {
                fake << c << '|' << name << '|' << ID1 << '|' << phone << '|' << password << '|' << gender << '|' << atoi(balance) << '\n';
            }
        }
        fake.close();
        out.close();

        out.open("Data.txt", ios::out);
        fake.open("fake1.txt", ios::in);
        while (!fake.eof())
        {
            fake.getline(c, 50, '|');
            fake.getline(name, 50, '|');
            fake.getline(ID1, 50, '|');
            fake.getline(phone, 50, '|');
            fake.getline(password, 50, '|');
            fake.getline(gender, 50, '|');
            fake.getline(balance, 50);
            out << c << '|' << name << '|' << ID1 << '|' << phone << '|' << password << '|' << gender << '|' << atoi(balance) << '\n';
        }
        fake.close();
        out.close();
        remove("fake1.txt");
        cout << "\n done !!! \n";

        break;
    case 5:
        out.open("Data.txt", ios::in);
        fake.open("fake1.txt", ios::out);
        char passwordd[50];
        cin.ignore();
        cout << "Enter the old password password\n";
        cin.getline(passwordd, 50);
        while (!out.eof())
        {
            out.getline(c, 50, '|');
            out.getline(name, 50, '|');
            out.getline(ID1, 50, '|');
            out.getline(phone, 50, '|');
            out.getline(password, 50, '|');
            out.getline(gender, 50, '|');
            out.getline(balance, 50);
            if (strcmp(password, passwordd) == 0)
            {
                cout << "Enter the new pssword\n";
                ch = _getch();
                while (ch != 13)
                {
                    password1.push_back(ch);
                    cout << '*';
                    ch = _getch();
                }
                cout << "\n";
                cout << "Verify the new password\n";
                ch = _getch();
                while (ch != 13)
                {
                    password2.push_back(ch);
                    cout << '*';
                    ch = _getch();
                }
                cout << "\n";
                while (password1 != password2)
                {
                    password1 = "";
                    password2 = "";
                    cout << "Error password not match\n";
                    cout << "Enter the new pssword\n";
                    ch = _getch();
                    while (ch != 13)
                    {
                        password1.push_back(ch);
                        cout << '*';
                        ch = _getch();
                    }
                    cout << "\n";
                    cout << "Verify the new password\n";
                    ch = _getch();
                    while (ch != 13)
                    {
                        password2.push_back(ch);
                        cout << '*';
                        ch = _getch();
                    }
                    cout << "\n";
                }
                fake << c << '|' << name << '|' << ID1 << '|' << phone << '|' << password2 << '|' << gender << '|' << balance << '\n';
            }
            else
            {
                fake << c << '|' << name << '|' << ID1 << '|' << phone << '|' << password << '|' << gender << '|' << balance << '\n';
            }
        }
        fake.close();
        out.close();

        out.open("Data.txt", ios::out);
        fake.open("fake1.txt", ios::in);
        while (!fake.eof())
        {
            fake.getline(c, 50, '|');
            fake.getline(name, 50, '|');
            fake.getline(ID1, 50, '|');
            fake.getline(phone, 50, '|');
            fake.getline(password, 50, '|');
            fake.getline(gender, 50, '|');
            fake.getline(balance, 50);
            out << c << '|' << name << '|' << ID1 << '|' << phone << '|' << password << '|' << gender << '|' << balance << '\n';
        }
        fake.close();
        out.close();
        remove("fake1.txt");
        cout << "\n done !!! \n";

        break;
    }
}
int loop()
{ // this loop for menu for Coustmer services
    do
    {
        cout << "**********************Menu**********************\n";
        cout << "Please select a service\n";
        cout << "[1] Check balance               [2] Withdraw\n";
        cout << "[3] Deposit                     [4] Donation \n";
        cout << "[5] Change pass                 [6] Exit\n";
        cout << "[7] Main menu\n";
        cout << "**********************Menu**********************\n";
        cout << "Your selection is :";
        cin >> service;
        Customer_services();

        while (service != 1 && service != 2 && service != 3 && service != 4 && service != 5 && service != 6 && service != 7)
        {
            cout << "Error\nInput it Again\n";
            cin >> service;
            Customer_services();
        }
        if (service == 6)
        {

            system("cls");
            s = "n";
        }
        else if (service == 7)
        {
            continue;
        }
        else
        {
            cout << "Do you want any service? y/n\n";
            cin >> s;
            system("cls");
        }
    } while (s == "y");
    if (service != 7)
    {

        if (s == "n")
        {

            std::string phrase = "thank you for using our servers";
            std::string command = "espeak -v +f8  \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            cout << "Thank you for using our servers\n";
        }
        if (s != "n" && s != "y")
        {

            do
            {

                cout << "Error\nyou choose y/n\n";
                cin >> s;
                if (s == "y")
                {
                    system("cls");
                    loop();
                }
                if (s == "n")
                {
                    system("cls");
                    std::string phrase = "thank you for using our servers";
                    std::string command = "espeak -v +f3  \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    cout << "Thank you for using our servers\n";
                }
            } while (s != "n" && s != "y");
        }
    }
}
int Add_coustmer()
{
    system("cls");
    ofstream out("Data.txt", ios::app);
    cout << "Enter your username\n";
    cin >> name;
    out << time(0) + 1000000000000000 << "|";
    out << name << "|";
    cout << "Enter the national number\n";
    cin >> ID;
    while (ID.length() != 14)
    {
        cout << "Error\nEnter it again\n";
        cin >> ID;
    }
    out << ID << "|";
    cout << "Enter the phone number\n";
    cin >> phone1;
    while (phone1.length() != 11)
    {
        cout << "Error\nEnter it again\n";
        cin >> phone1;
    }
    out << phone1 << "|";
    cout << "Enter the pssword\n";
    ch = _getch();
    while (ch != 13)
    {
        password1.push_back(ch);
        cout << '*';
        ch = _getch();
    }
    cout << "\n";
    cout << "Verify the password\n";
    ch = _getch();
    while (ch != 13)
    {
        password2.push_back(ch);
        cout << '*';
        ch = _getch();
    }
    cout << "\n";
    while (password1 != password2)
    {
        password1 = "";
        password2 = "";
        cout << "Error password not match\n";
        cout << "Enter the pssword\n";
        ch = _getch();
        while (ch != 13)
        {
            password1.push_back(ch);
            cout << '*';
            ch = _getch();
        }
        cout << "\n";
        cout << "Verify the password\n";
        ch = _getch();
        while (ch != 13)
        {
            password2.push_back(ch);
            cout << '*';
            ch = _getch();
        }
        cout << "\n";
    }
    out << password1 << "|";
    cout << "Choose your gender\n";
    cout << "[1] Male      [2] Female\n";
    cin >> gender;
    while (atoi(gender) != 1 && atoi(gender) != 2)
    {
        cout << "Error \nTry again\n";
        cin >> gender;
    }
    if (atoi(gender) == 1)
    {
        out << "Male"
            << "|";
    }
    else if (atoi(gender) == 2)
    {
        out << "Female"
            << "|";
    }
    cout << "Enter the amount you want to put into your account\n";
    cin >> balance;
    out << balance << "\n";
    system("cls");
    cout << "Welcom " << name << endl;
    cout << "the account has been created sucessfully\n";
    out.close();
}
int Search_Coustmer()
{
    fstream out;
    out.open("Data.txt", ios::in);
    char name[50];
    cout << " \n enter the account number to search about it : ";
    cin.ignore();
    cin.getline(a, 50);
    int x = 0;
    while (!out.eof())
    {
        out.getline(c, 50, '|');
        out.getline(name, 50, '|');
        out.getline(ID1, 50, '|');
        out.getline(phone, 50, '|');
        out.getline(password, 50, '|');
        out.getline(gender, 50, '|');
        out.getline(balance, 50);
        if (strcmp(c, a) == 0)
        {
            char loader = 254;
            cout << "\t  Loading..." << endl;
            for (int i = 0; i < 20; i++)
            {
                system("color 3");
                cout << loader;
            }
            system("cls");
            cout << "The account number that do you want to search : " << c << endl;
            cout << " \n\t name : " << name << "\n"
                 << "\t ID : " << ID1 << "\n"
                 << "\t phone : " << phone << "\n"
                 << "\t password : " << password << "\n"
                 << "\t Gender : " << gender << "\n"
                 << "\t balance : " << balance << endl;

            x = 1;
            break;
        }
    }
    if (x == 0)
    {
        cout << " \n Not found !!!!\n";
    }
    out.close();
}
int Update_Coustmer()
{
    fstream out;
    fstream fake;

    out.open("Data.txt", ios::in);
    fake.open("fake1.txt", ios::out);
    cin.ignore();
    cout << " \n\t enter the account number to update record : ";
    cin.getline(a, 25);
    while (!out.eof())
    {

        out.getline(c, 50, '|');
        out.getline(name, 50, '|');
        out.getline(ID1, 50, '|');
        out.getline(phone, 50, '|');
        out.getline(password, 50, '|');
        out.getline(gender, 50, '|');
        out.getline(balance, 50);
        if (strcmp(c, a) == 0)
        {
            int f;
            cout << "********************************************\n";
            cout << "Enter the one you want to modify\n";
            cout << "[1] Name                 [2] National number\n";
            cout << "[3] Phone                [4] Password\n";
            cout << "[5] Gender               [6] Balance\n";
            cout << "********************************************\n";
            cout << "Your choose : ";
            cin >> f;
            while (f != 1 && f != 2 && f != 3 && f != 4 && f != 5 && f != 6)
            {
                cout << "Error\nTry again\n";
                cin >> f;
            }
            if (f == 1)
            {
                cout << "Enter the new name : ";
                cin >> name;
            }
            else if (f == 2)
            {
                cout << "Enter the new national number : ";
                cin >> ID1;
            }
            else if (f == 3)
            {
                cout << "Enter the new phone : ";
                cin >> phone;
            }
            else if (f == 4)
            {
                cout << "Enter the new password : ";
                cin >> password;
            }
            else if (f == 5)
            {
                cout << "Enter the new Balance : ";
                cin >> balance;
            }
            else if (f == 6)
            {
                cout << "Eter the new gender : ";
                cin >> gender;
            }
            fake << c << '|' << name << '|' << ID1 << '|' << phone << '|' << password << '|' << gender << '|' << balance << '\n';
        }
        else
        {
            fake << c << '|' << name << '|' << ID1 << '|' << phone << '|' << password << '|' << gender << '|' << balance << '\n';
        }
    }
    fake.close();
    out.close();

    out.open("Data.txt", ios::out);
    fake.open("fake1.txt", ios::in);
    while (!fake.eof())
    {
        fake.getline(c, 50, '|');
        fake.getline(name, 50, '|');
        fake.getline(ID1, 50, '|');
        fake.getline(phone, 50, '|');
        fake.getline(password, 50, '|');
        fake.getline(gender, 50, '|');
        fake.getline(balance, 50);
        out << c << '|' << name << '|' << ID1 << '|' << phone << '|' << password << '|' << gender << '|' << balance << '\n';
    }
    fake.close();
    out.close();
    remove("fake1.txt");
    cout << "\n done !!! \n";
}
int Delete_Coustmer()
{
    fstream out;
    fstream fake;
    out.open("Data.txt", ios::in);
    fake.open("fake.txt", ios::out);
    cin.ignore();
    cout << " \n\t enter the account number to delete record : ";
    cin.getline(a, 50);
    while (!out.eof())
    {
        out.getline(c, 50, '|');
        out.getline(name, 50, '|');
        out.getline(ID1, 50, '|');
        out.getline(phone, 50, '|');
        out.getline(password, 50, '|');
        out.getline(gender, 50, '|');
        out.getline(balance, 50);
        if (strcmp(c, a) == 0)
        {
            continue;
        }
        else
        {
            fake << c << '|' << name << '|' << ID1 << '|' << phone << '|' << password << '|' << balance << '|' << gender << '\n';
        }
    }
    fake.close();
    out.close();
    out.open("Data.txt", ios::out);
    fake.open("fake.txt", ios::in);
    while (!fake.eof())
    {
        fake.getline(c, 50, '|');
        fake.getline(name, 50, '|');
        fake.getline(ID1, 50, '|');
        fake.getline(phone, 50, '|');
        fake.getline(password, 50, '|');
        fake.getline(gender, 50, '|');
        fake.getline(balance, 50);
        out << c << '|' << name << '|' << ID1 << '|' << phone << '|' << password << '|' << balance << '|' << gender << '\n';
    }
    fake.close();
    out.close();
    remove("fake.txt");
    cout << "\n done !!! \n";
}
int loop2()
{ // this loop for menu for staff services
    do
    {
        cout << "**********************Menu**********************\n";
        cout << "Please select a service\n";
        cout << "[1] ADD coustmer            [2] Search coustmer\n";
        cout << "[3] Update Data             [4] Delete coustmer\n";
        cout << "[5] Exit                    [6] Main menu\n";
        cout << "**********************Menu**********************\n";
        cout << "Your selection is :";
        cin >> service;
        while (service != 1 && service != 2 && service != 3 && service != 4 && service != 5 && service != 6)
        {
            cout << "Error\nTry again\n";
            cin >> service;
        }
        system("cls");
        switch (service)
        {
        case 1:
            Add_coustmer();
            break;
        case 2:
            Search_Coustmer();
            break;
        case 3:
            Update_Coustmer();
            break;
        case 4:
            Delete_Coustmer();
            break;
        }
        if (service == 5)
        {
            s = "n";
            system("cls");
        }
        else if (service == 6)
        {
            continue;
        }
        else
        {
            cout << "Do you want any services?  y/n\n";
            cin >> s;
            system("cls");
        }
    } while (s == "y");
    if (service != 6)
    {
        if (s == "n")
        {
            std::string phrase = "thank you for using our servers";
            std::string command = "espeak -v +f3  \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            cout << "Thank you for using our servers\n";
        }
        if (s != "n" && s != "y")
        {
            do
            {
                cout << "Error\nyou choose y/n\n";
                cin >> s;
                if (s == "y")
                {
                    system("cls");
                    loop2();
                }
                if (s == "n")
                {
                    system("cls");
                    std::string phrase = "thank you for using our servers";
                    std::string command = "espeak -v +f3  \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    cout << "Thank you for using our servers\n";
                }
            } while (s != "n" && s != "y");
        }
    }
}
int Main_Menu()
{ // it for return to main menu more than once
    system("cls");
    system("color B0");
    string s = "y";
    char name[50];
    cout << "\n\t\t    =========================================  \t\t With:" << endl;
    cout << "\t\t    =========================================  \t\t-omar salah[leader]" << endl;
    cout << "\t\t          ||   WELCOME TO MY PROJECT   ||      \t\t-Muhammad Badr" << endl;
    cout << "\t\t    =========================================  \t\t-Mohamed Hashish" << endl;
    cout << "\t\t    =========================================  \t\t-Mohamed Shwara\n \t\t\t\t\t\t\t\t\t -Momen mohamed\n\n"
         << endl;
    cout << "[1] Log in           [2] Sign up           [3] Exit\n";
    cout << "your choice : ";
    cin >> x;
    while (x != 1 && x != 2 && x != 3)
    {
        cout << "Error\nTry again\n";
        cin >> x;
    }
    if (x == 1)
    {
        system("cls");
        cout << "************Menu************\n";
        cout << "Log in \n[1] As Admin    [2]As coustmer\n[3] EXit        [4] Main menu\n";
        cout << "************Menu************\n";
        cin >> z;
        while (z != 1 && z != 2 && z != 3 && z != 4)
        {
            cout << "Error\nTry again\n";
            cin >> z;
        }
        if (z == 1)
        {
            system("cls");
            ifstream Data("Data1.txt");
            cout << "Enter the name\n";
            cin.ignore();
            cin.getline(a, 50);
            while (!Data.eof())
            {

                Data.getline(name, 50);
                if (strcmp(a, name) == 0)
                {

                    cout << "Enter pass\n";
                    ch = _getch();
                    while (ch != 13)
                    {
                        pass.push_back(ch);
                        cout << '*';
                        ch = _getch();
                    }
                    system("cls");
                    while (pass != "0000")
                    {
                        pass = "";
                        cout << "The password is incorrect\nTry again\n";
                        ch = _getch();
                        while (ch != 13)
                        {
                            pass.push_back(ch);
                            cout << '*';
                            ch = _getch();
                        }
                        system("cls");
                    }

                    system("cls");
                    loop2();
                    if (service == 6)
                    {
                        system("cls");
                        Main_Menu();
                    }
                }
            }
        }
        else if (z == 2)
        {

            system("cls");
            ifstream out("Data.txt");
            cout << "Enter the name\n";
            cin.ignore();
            cin.getline(a, 50);
            int x = 0;
            while (!out.eof())
            {
                out.getline(c, 50, '|');
                out.getline(name, 50, '|');
                out.getline(ID1, 50, '|');
                out.getline(phone, 50, '|');
                out.getline(password, 50, '|');
                out.getline(gender, 50, '|');
                out.getline(balance, 50);
                if (strcmp(name, a) == 0)
                {

                    int q = 0;
                    while (q < 3)
                    {
                        cout << "Enter pass\n";
                        ch = _getch();
                        while (ch != 13)
                        {
                            pass.push_back(ch);
                            cout << '*';
                            ch = _getch();
                        }
                        char arr[pass.length() + 1];
                        strcpy(arr, pass.c_str());

                        if (strcmp(password, arr) != 0)
                        {
                            system("cls");
                            cout << "The password is incorrect\nTry again\n";
                            pass = "";
                            q++;
                        }
                        else
                        {
                            break;
                        }
                    }

                    if (q < 3)
                    {
                        system("cls");
                        loop();
                        if (service == 7)
                        {
                            system("cls");
                            Main_Menu();
                        }
                        x = 1;
                        break;
                    }

                    else if (q > 3)
                    {
                        system("cls");
                        cout << "You entered the password incorrectly three times";
                    }
                    x = 1;
                }
            }

            if (x == 0)
            {
                cout << "Not found\n";
            }
        }
        else if (z == 3)
        {
            system("cls");
            cout << "Thank you for using our servers\n";
        }
        else if (z == 4)
        {
            system("cls");
            Main_Menu();
        }
    }

    else if (x == 2)
    {
        Add_coustmer();
        cout << "Do you want to back to main menu or exit   y/n\n";
        cin >> s;
        while (s != "y" && s != "n")
        {
            cout << "Error\nyou choose y/n\n";
            cin >> s;
        }

        if (s == "y")
        {
            system("cls");
            Main_Menu();
        }
        else if (s == "n")
        {
            system("cls");
            std::string phrase = "thank you for using our servers";
            std::string command = "espeak -v +f3  \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            cout << "Thank you for using our servers\n";
        }
    }
    else if (x == 3)
    {

        system("cls");
        std::string phrase = "thank you for using our servers";
        std::string command = "espeak -v +f3  \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
        cout << "Thank you for using our servers\n";
    }
}
int main()
{
    char loader = 254;
    cout << "\t\t  Loading..." << endl;
    for (int i = 0; i < 35; i++)
    {
        system("color 3");
        cout << loader;
        Sleep(3);
    }
    std::string phrase = "Welcome to our bank";
    std::string command = "espeak -v +f7  \"" + phrase + "\"";
    const char *charCommand = command.c_str();
    system(charCommand);
    Main_Menu();
    system("pause");
}