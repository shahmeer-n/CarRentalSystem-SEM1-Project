#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>
#include <climits>
using namespace std;
string def[5] = { "Name: ", "Model: ", "Number Plate: ", "Rate Per Day: ", "Color: " };

//---------------------------------Honda cars information----------------------------------------
string Honda_civic[5] = { "Honda civic", "2012", "LEQ1238", "25000", "White" };
string Honda_city[5] = { "Honda city", "2018", "LER5234", "15000", "Gray" };
string Honda_brv[5] = { "Honda BR-V", "2019", "AB368", "20000", "black" };
string Honda_accord[5] = { "Honda Accord", "2021", "LED169", "25000", "black" };
//--------------------------------Suzuki cars information----------------------------------------
string Suzuki_mehran[5] = { "Suzuki Mehran", "2013", "LSQ1532", "10000", "White" };
string Suzuki_cultus[5] = { "Suzuki Cultus", "2015", "AC914", "13000", "Gray" };
string Suzuki_alto[5] = { "Suzuki Alto", "2019", "LEQ310", "14000", "Blue" };
string Suzuki_swift[5] = { "Suzuki Swift", "2022", "LST542", "18000", "Red" };
//--------------------------------toyota cars information-----------------------------------------
string toyota_corolla[5] = { "Toyota Corolla ", "2016", "ABC419", "22000", "Gray" };
string toyota_prius[5] = { "Toyota Prius ", "2017", "ABC327", "19000", "Blue" };
string toyota_fortuner[5] = { "Toyota Fortuner ", "2020", "LEQ419", "40000", "Gray" };
string toyota_prado[5] = { "Toyota Prado ", "2017", "ABC5139", "39000", "WHITE" };
string toyota_hiace[5] = { "Toyota Hiace ", "2018", "LEQ931", "35000", "Black" };
//------------------------------final invoice------------------------------------------------------
string def2[7] = { "Renter Name:","ID card number " ,"Car name:", "Num of Days:", "Rate/day      ","Totol Amount:" };

//----------------------------------High class-------------------------------------------------------------
string high_class[5] = { "1) BMW X1", "2) Toyota Parado", "3) Toyota fortuner", "4) BMW i8", "5) BMW X6" };
//-----------------------------------middle class-------------------------------------------------------------
string mid_class[7] = { "1) Honda civic", "2) Toyota Corolla ", "3) Toyota Prius", "4) Suzuki Swift", "5) Honda city", "6) Honda brv", "7) Honda accord" };
//----------------------------------Low class-------------------------------------------------------------
string low_class[5] = { "1) Suzuki Mehran", "2) Suzuki Cultus", "3) Toyota Prius", "4)Suzuki Alto", "5) Toyota Hiace" };
struct Car_data {

    string name;
    int model;
    string num_plate;
    int rate;
    string color;
};

int back1(int& thour, string& tname);
int back2(int& thour, string& tname);
int welcum()
{
    ifstream in("welcome.txt"); // displaying welcome ASCII image text on output screen fn1353
    system("color 0B");
    if (!in)
    {
        cout << "Cannot open input file.\n";
    }
    char str[1000];
    while (in)
    {
        in.getline(str, 1000); // delim defaults to '\n' cp
        if (in)
            cout << str << endl;
    }
    in.close();
    Sleep(1000);
    cout << "\nStarting the program please wait....." << endl;
    Sleep(1000);
    cout << "\nloading up files....." << endl;
    Sleep(1000);   // function which waits for (n) seconds
    system("CLS"); // cleares screen
    return 0;
}

int choice_BMW(int& thour, string& tname)
{
    struct Car_data bmw_i8, bmw_x1, bmw_x6;
    int choice;
    cin >> choice;
    while (choice < 1 || choice > 3 || cin.fail())
    { // validation
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout << "\t\t\t\t !!Incorrect Entry!! " << endl;
        system("color 0C");
        cin >> choice;
        cout << endl;
    }
    system("color 0B");
    system("cls");
    cout << "\t\t\t\t\t------------ Showing details of the Car ------------" << endl
        << endl;

    if (choice == 1)
    {

        bmw_i8.name = "BMW i8";
        bmw_i8.model = 20019;
        bmw_i8.num_plate = "856AC";
        bmw_i8.rate = 35000;
        bmw_i8.color = "White";
        cout << "\t\t\t\t\t\t\t" << def[0] << bmw_i8.name << endl;
        cout << endl;
        cout << "\t\t\t\t\t\t\t" << def[1] << bmw_i8.model << endl;
        cout << endl;
        cout << "\t\t\t\t\t\t\t" << def[2] << bmw_i8.num_plate << endl;
        cout << endl;
        cout << "\t\t\t\t\t\t\t" << def[3] << bmw_i8.rate << endl;
        cout << endl;
        cout << "\t\t\t\t\t\t\t" << def[4] << bmw_i8.color << endl;
        cout << endl;

        tname = "BMW i8";
        thour = 35000;
        back1(thour, tname);
    }
    else if (choice == 2)
    {

        bmw_x1.name = "BMW X1";
        bmw_x1.model = 2017;
        bmw_x1.num_plate = "564C";
        bmw_x1.rate = 20000;
        bmw_x1.color = "Red";
        cout << "\t\t\t\t\t\t\t" << def[0] << bmw_x1.name << endl;
        cout << endl;
        cout << "\t\t\t\t\t\t\t" << def[1] << bmw_x1.model << endl;
        cout << endl;
        cout << "\t\t\t\t\t\t\t" << def[2] << bmw_x1.num_plate << endl;
        cout << endl;
        cout << "\t\t\t\t\t\t\t" << def[3] << bmw_x1.rate << endl;
        cout << endl;
        cout << "\t\t\t\t\t\t\t" << def[4] << bmw_x1.color << endl;
        tname = "BMW X1";
        thour = 20000;
        back1(thour, tname);
    }
    else if (choice == 3)
    {

        bmw_x6.name = "BMW X6";
        bmw_x6.model = 2020;
        bmw_x6.num_plate = "ABC183";
        bmw_x6.rate = 25000;
        bmw_x6.color = "Black";
        cout << "\t\t\t\t\t\t\t" << def[0] << bmw_x6.name << endl;
        cout << endl;
        cout << "\t\t\t\t\t\t\t" << def[1] << bmw_x6.model << endl;
        cout << endl;
        cout << "\t\t\t\t\t\t\t" << def[2] << bmw_x6.num_plate << endl;
        cout << endl;
        cout << "\t\t\t\t\t\t\t" << def[3] << bmw_x6.rate << endl;
        cout << endl;
        cout << "\t\t\t\t\t\t\t" << def[4] << bmw_x6.color << endl;
        cout << endl;



        tname = "BMW_X6";
        thour = 25000;
        back1(thour, tname);
    }
    else
    {
        cout << "error1" << endl;
    }
    return 0;
}
void BMW(int& thour, string& tname)
{
    cout << "\t\t\t\t----------In BMW we Have following cars avallable----------" << endl;
    cout << endl;
    cout << "\t\t\t\t\t 1.BMW i8";
    cout << "\t 2.BMW X1";
    cout << "\t 3.BMW X6" << endl;
    cout << endl;
    cout << "\t\t\t\t\t\tSelect: ";
    choice_BMW(thour, tname);
}

int choice_Honda(int& thour, string& tname)
{
    int choice;
    cin >> choice;
    while (choice < 1 || choice > 4 || cin.fail())
    { // validation
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout << "\t\t\t\t\ please enter the number 1 OR 4 " << endl;
        system("color 0C");
        cin >> choice;
        cout << endl;
    }
    system("color 0B");

    system("cls");
    cout << "\t\t\t\t\t------------Showing details of the car------------" << endl
        << endl;

    if (choice == 1)
    {

        for (int i = 0; i <= 4; i++)
        {
            cout << "\t\t\t\t\t\t\t " << def[i] << Honda_civic[i] << endl
                << endl;
            ;
        }
        tname = Honda_civic[0];
        thour = 2500;
        back1(thour, tname);
    }
    else if (choice == 2)
    {

        for (int i = 0; i <= 4; i++)
        {
            cout << "\t\t\t\t\t\t\t " << def[i] << Honda_city[i] << endl
                << endl;
            ;
        }
        tname = Honda_city[0];
        thour = 1500;
        back1(thour, tname);
    }
    else if (choice == 3)
    {
        for (int i = 0; i <= 4; i++)
        {
            cout << "\t\t\t\t\t\t\t " << def[i] << Honda_brv[i] << endl
                << endl;
        }
        tname = Honda_brv[0];
        thour = 2000;
        back1(thour, tname);
    }
    else if (choice == 4)
    {
        for (int i = 0; i <= 4; i++)
        {

            cout << "\t\t\t\t\t\t\t " << def[i] << Honda_accord[i] << endl
                << endl;
        }
        tname = Honda_accord[0];
        thour = 2500;
        back1(thour, tname);
    }
    else
    {
        cout << "error2" << endl;
    }
    return 0;
}
void Honda(int& thour, string& tname)
{
    cout << "\t\t\t\t\----------In Honda we Have following cars avallable----------" << endl;
    cout << endl;
    cout << "\t\t\t\t 1.Honda Civic";
    cout << "\t 2.Honda City";
    cout << "\t 3.Honda BR-V";
    cout << "\t 4.Honda Accord" << endl;
    cout << endl;
    cout << "\t\t\t\t\tSelect: ";
    choice_Honda(thour, tname);
}
int choice_Suzuki(int& thour, string& tname)
{
    int choice;
    cin >> choice;
    while (choice < 1 || choice > 4 || cin.fail())
    { // validation
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout << "\t\t\t\t\ !!Incorrect Entry!! " << endl;
        system("color 0C");
        cin >> choice;
        cout << endl;
    }
    system("color 0B");
    system("cls");
    cout << "\t\t\t\t\t------------Showing details of the car------------" << endl
        << endl;

    if (choice == 1)
    {

        for (int i = 0; i <= 4; i++)
        {
            cout << "\t\t\t\t\t\t\t " << def[i] << Suzuki_mehran[i] << endl
                << endl;
        }
        tname = Suzuki_mehran[0];
        thour = 1000;
        back1(thour, tname);
    }
    else if (choice == 2)
    {

        for (int i = 0; i <= 4; i++)
        {
            cout << "\t\t\t\t\t\t\t " << def[i] << Suzuki_cultus[i] << endl
                << endl;
        }
        tname = Suzuki_cultus[0];
        thour = 1300;
        back1(thour, tname);
    }
    else if (choice == 3)
    {

        for (int i = 0; i <= 4; i++)
        {
            cout << "\t\t\t\t\t\t\t " << def[i] << Suzuki_alto[i] << endl
                << endl;
        }
        tname = Suzuki_alto[0];
        thour = 1400;
        back1(thour, tname);
    }
    else if (choice == 4)
    {

        for (int i = 0; i <= 4; i++)
        {
            cout << "\t\t\t\t\t\t\t " << def[i] << Suzuki_swift[i] << endl
                << endl;
        }
        tname = Suzuki_swift[0];
        thour = 1800;
        back1(thour, tname);
    }
    else
    {
        cout << "error3" << endl;
    }
    return 0;
}
void Suzuki(int& thour, string& tname)
{
    cout << "\t\t\t\t----------In Suzuki we Have following Cars Avallable----------" << endl;
    cout << endl;
    cout << "\t\t 1.Suzuki Mehran";
    cout << "\t 2.Suzuki cultus ";
    cout << "\t 3.Suzuki Alto  ";
    cout << "\t 4.Suzuki Swift" << endl;
    cout << endl;
    cout << "\t\t\tSelect: ";
    choice_Suzuki(thour, tname);
}

int choice_toyota(int& thour, string& tname)
{
    int choice;

    cin >> choice;
    while (choice < 1 || choice > 4 || cin.fail())
    { // validation
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout << "\t\t\t\t\ !!Incorrect Entry!!" << endl;
        system("color 0C");
        cin >> choice;
        cout << endl;
        system("color 0C");
    }
    system("color 0B");
    system("cls");
    cout << "\t\t\t\t\t------------Showing details of the car------------" << endl
        << endl;

    if (choice == 1)
    {

        for (int i = 0; i <= 4; i++)
        {
            cout << "\t\t\t\t\t\t\t " << def[i] << toyota_corolla[i] << endl
                << endl;
        }
        tname = toyota_corolla[0];
        thour = 2200;
        back1(thour, tname);
    }
    else if (choice == 2)
    {

        for (int i = 0; i <= 4; i++)
        {
            cout << "\t\t\t\t\t\t\t " << def[i] << toyota_prius[i] << endl
                << endl;
        }
        tname = toyota_prius[0];
        thour = 1900;
        back1(thour, tname);
    }
    else if (choice == 3)
    {

        for (int i = 0; i <= 4; i++)
        {
            cout << "\t\t\t\t\t\t\t " << def[i] << toyota_fortuner[i] << endl
                << endl;
        }
        tname = toyota_fortuner[0];
        thour = 4000;
        back1(thour, tname);
    }
    else if (choice == 4)
    {

        for (int i = 0; i <= 4; i++)
        {
            cout << "\t\t\t\t\t\t\t " << def[i] << toyota_prado[i] << endl
                << endl;
        }
        tname = toyota_prado[0];
        thour = 3900;
        back1(thour, tname);
    }
    else if (choice == 5)
    {

        for (int i = 0; i <= 4; i++)
        {
            cout << "\t\t\t\t\t\t\t " << def[i] << toyota_hiace[i] << endl
                << endl;
        }
        tname = toyota_hiace[0];
        thour = 3500;
        back1(thour, tname);
    }
    else
    {
        cout << "error4" << endl;
    }
    return 0;
}
void toyota(int& thour, string& tname)
{

    cout << "\t\t\t\t----------In Toyota we Have following cars avallable----------" << endl;
    cout << endl;
    cout << "\t\t 1-Toyota Corolla";
    cout << "\t 2-Toyota Prius";
    cout << "\t 3-Toyota Fortuner";
    cout << "\t 4-Toyota Prado";
    cout << "\t 5-Toyota Hiace" << endl;
    cout << endl;
    cout << "\t\t\t\tSelect: ";
    choice_toyota(thour, tname);
}
int choice2(int& thour, string& tname)
{
    int choice;

    cin >> choice;


    while (choice < 1 || choice > 4 || cin.fail())
    { // validation
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout << "\t\t\t\t\!!Incorrect Entry!! " << endl;
        system("color 0C");
        cin >> choice;
        cout << endl;
        system("color 0C");
    }
    system("color 0B");
    if (choice == 1)
    {
        system("cls");
        BMW(thour, tname);
    }
    else if (choice == 2)
    {
        system("cls");
        Honda(thour, tname);
    }
    else if (choice == 3)
    {
        system("cls");
        Suzuki(thour, tname);
    }
    else if (choice == 4)
    {
        system("cls");
        toyota(thour, tname);
    }
    else
    {
        cout << "Error" << endl;
    }
    return 0;
}
void Bybrand(int& thour, string& tname)
{

    cout << "\t\t\t----------We have following brand avalable for you at the moment----------" << endl;
    cout << endl;
    cout << "\t\t\t\t1. BMW";
    cout << "\t  2. Honda";
    cout << "\t 3. Suzuki";
    cout << "\t 4. Toyota" << endl;
    cout << endl;
    cout << "\t\t\t\t\tSelect: ";

    choice2(thour, tname);
}

int choice_high(int& thour, string& tname)
{
    struct Car_data bmw_i8, bmw_x1, bmw_x6;
    int choice;
    cin >> choice;
    while (choice < 1 || choice > 5 || cin.fail())
    { // validation
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout << "\t\t\t\t\ !!Incorrect Entry!! " << endl;
        system("color 0C");
        cin >> choice;
        cout << endl;
        system("color 0C");

    }
    system("color 0B");

    system("cls");

    if (choice == 1)
    {
        cout << "\t\t\t\t\t------------Showing details of the car------------" << endl;
        cout << endl;  cout << endl;

        bmw_x1.name = "BMW X1";
        bmw_x1.model = 2017;
        bmw_x1.num_plate = "564C";
        bmw_x1.rate = 20000;
        bmw_x1.color = "Red";
        cout << "\t\t\t\t\t\t\t" << def[0] << bmw_x1.name << endl;
        cout << endl;
        cout << "\t\t\t\t\t\t\t" << def[1] << bmw_x1.model << endl;
        cout << endl;
        cout << "\t\t\t\t\t\t\t" << def[2] << bmw_x1.num_plate << endl;
        cout << endl;
        cout << "\t\t\t\t\t\t\t" << def[3] << bmw_x1.rate << endl;
        cout << endl;
        cout << "\t\t\t\t\t\t\t" << def[4] << bmw_x1.color << endl;
        tname = "BMW X1";
        thour = 20000;
        back2(thour, tname);
    }
    else if (choice == 2)
    {
        cout << "\t\t\t\t\t------------Showing details of the car------------" << endl;
        cout << endl;  cout << endl;

        for (int i = 0; i <= 4; i++)
        {
            cout << "\t\t\t\t\t\t\t" << def[i] << toyota_prado[i] << endl;
            cout << endl;
        }
        tname = toyota_prado[0];
        thour = 39000;
        back2(thour, tname);
    }

    else if (choice == 3)
    {
        cout << "\t\t\t\t\t------------Showing details of the car------------" << endl;
        cout << endl;  cout << endl;

        for (int i = 0; i <= 4; i++)
        {
            cout << "\t\t\t\t\t\t\t" << def[i] << toyota_fortuner[i] << endl;
            cout << endl;
        }
        tname = toyota_fortuner[0];
        thour = 40000;
        back2(thour, tname);
    }

    else if (choice == 4)
    {

        cout << "\t\t\t\t\t------------Showing details of the car------------" << endl;
        cout << endl;  cout << endl;
        bmw_i8.name = "BMW i8";
        bmw_i8.model = 20019;
        bmw_i8.num_plate = "856AC";
        bmw_i8.rate = 35000;
        bmw_i8.color = "White";
        cout << "\t\t\t\t\t\t\t" << def[0] << bmw_i8.name << endl;
        cout << endl;
        cout << "\t\t\t\t\t\t\t" << def[1] << bmw_i8.model << endl;
        cout << endl;
        cout << "\t\t\t\t\t\t\t" << def[2] << bmw_i8.num_plate << endl;
        cout << endl;
        cout << "\t\t\t\t\t\t\t" << def[3] << bmw_i8.rate << endl;
        cout << endl;
        cout << "\t\t\t\t\t\t\t" << def[4] << bmw_i8.color << endl;
        cout << endl;

        tname = "BMW i8";
        thour = 35000;
        back2(thour, tname);
    }

    else if (choice == 5)
    {
        cout << "\t\t\t\t\t------------Showing details of the car------------" << endl;
        cout << endl;  cout << endl;

        bmw_x6.name = "BMW X6";
        bmw_x6.model = 2020;
        bmw_x6.num_plate = "ABC183";
        bmw_x6.rate = 25000;
        bmw_x6.color = "Black";
        cout << "\t\t\t\t\t\t\t" << def[0] << bmw_x6.name << endl;
        cout << endl;
        cout << "\t\t\t\t\t\t\t" << def[1] << bmw_x6.model << endl;
        cout << endl;
        cout << "\t\t\t\t\t\t\t" << def[2] << bmw_x6.num_plate << endl;
        cout << endl;
        cout << "\t\t\t\t\t\t\t" << def[3] << bmw_x6.rate << endl;
        cout << endl;
        cout << "\t\t\t\t\t\t\t" << def[4] << bmw_x6.color << endl;
        cout << endl;

        tname = "BMW_X6";
        thour = 25000;
        back2(thour, tname);
    }

    return 0;
}

int choice_mid(int& thour, string& tname)
{
    int choice;
    cin >> choice;
    while (choice < 1 || choice > 7 || cin.fail())
    { // validation
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout << "\t\t\t\t\ please enter the number 1 OR 7 " << endl;
        system("color 0C");
        cin >> choice;
        cout << endl;
        system("color 0C");

    }

    system("color 0B");
    system("cls");
    if (choice == 1)
    {
        cout << "\t\t\t\t\t------------Showing details of the car------------" << endl;
        cout << endl;  cout << endl;
        for (int i = 0; i <= 4; i++)
        {
            cout << "\t\t\t\t\t\t\t" << def[i] << Honda_civic[i] << endl;
            cout << endl;
        }
        tname = Honda_civic[0];
        thour = 25000;
        back2(thour, tname);
    }
    else if (choice == 2)
    {
        cout << "\t\t\t\t\t------------Showing details of the car------------" << endl;
        cout << endl;  cout << endl;
        for (int i = 0; i <= 4; i++)
        {
            cout << "\t\t\t\t\t\t\t" << def[i] << toyota_corolla[i] << endl;
            cout << endl;
        }
        tname = toyota_corolla[0];
        thour = 22000;
        back2(thour, tname);
    }

    else if (choice == 3)
    {
        cout << "\t\t\t\t\t------------Showing details of the car------------" << endl;
        cout << endl;  cout << endl;
        for (int i = 0; i <= 4; i++)
        {
            cout << "\t\t\t\t\t\t\t" << def[i] << toyota_prius[i] << endl;
            cout << endl;
        }
        tname = toyota_prius[0];
        thour = 19000;
        back2(thour, tname);
    }

    else if (choice == 4)
    {
        cout << "\t\t\t\t\t------------Showing details of the car------------" << endl;
        cout << endl;  cout << endl;
        for (int i = 0; i <= 4; i++)
        {
            cout << "\t\t\t\t\t\t\t" << def[i] << Suzuki_swift[i] << endl;
            cout << endl;
        }
        tname = Suzuki_swift[0];
        thour = 18000;
        back2(thour, tname);
    }

    else if (choice == 5)
    {
        cout << "\t\t\t\t\t------------Showing details of the car------------" << endl;
        cout << endl;  cout << endl;
        for (int i = 0; i <= 4; i++)
        {
            cout << "\t\t\t\t\t\t\t" << def[i] << Honda_city[i] << endl;

            cout << endl;
        }
        tname = Honda_city[0];
        thour = 15000;
        back2(thour, tname);
    }

    else if (choice == 6)
    {
        cout << "\t\t\t\t\t------------Showing details of the car------------" << endl;
        cout << endl;  cout << endl;
        for (int i = 0; i <= 4; i++)
        {
            cout << "\t\t\t\t\t\t\t" << def[i] << Honda_brv[i] << endl;
            cout << endl;
        }
        tname = Honda_brv[0];
        thour = 20000;
        back2(thour, tname);
    }

    else if (choice == 7)
    {

        cout << "\t\t\t\t\t------------Showing details of the car------------" << endl;
        cout << endl;  cout << endl;
        for (int i = 0; i <= 4; i++)
        {

            cout << "\t\t\t\t\t\t\t" << def[i] << Honda_accord[i] << endl;
            cout << endl;
        }
        tname = Honda_accord[0];
        thour = 25000;
        back2(thour, tname);
    }

    return 0;
}

int choice_low(int& thour, string& tname)
{
    int choice;
    cin >> choice;

    while (choice < 1 || choice > 5 || cin.fail())
    { // validation
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout << "\t\t\t\t\ !!Incorrect Entry!! " << endl;
        system("color 0C");
        cin >> choice;
        cout << endl;
    }
    system("color 0B");
    system("Cls");
    if (choice == 1)
    {
        cout << "\t\t\t\t\t------------Showing details of the car------------" << endl;
        cout << endl;  cout << endl;
        for (int i = 0; i <= 4; i++)
        {
            cout << "\t\t\t\t\t\t\t" << def[i] << Suzuki_mehran[i] << endl;
            cout << endl;
        }
        tname = Suzuki_mehran[0];
        thour = 10000;
        back2(thour, tname);
    }

    else if (choice == 2)
    {
        cout << "\t\t\t\t\t------------Showing details of the car------------" << endl;
        cout << endl;  cout << endl;
        for (int i = 0; i <= 4; i++)
        {
            cout << "\t\t\t\t\t\t\t" << def[i] << Suzuki_cultus[i] << endl;
            cout << endl;
        }
        tname = Suzuki_cultus[0];
        thour = 13000;
        back2(thour, tname);
    }

    else if (choice == 3)
    {
        cout << "\t\t\t\t\t------------Showing details of the car------------" << endl;
        cout << endl;  cout << endl;
        for (int i = 0; i <= 4; i++)
        {
            cout << "\t\t\t\t\t\t\t" << def[i] << toyota_prius[i] << endl;
            cout << endl;
        }
        tname = toyota_prius[0];
        thour = 19000;
        back2(thour, tname);
    }

    else if (choice == 4)
    {
        cout << "\t\t\t\t\t------------Showing details of the car------------" << endl;
        cout << endl;  cout << endl;
        for (int i = 0; i <= 4; i++)
        {

            cout << "\t\t\t\t\t\t\t" << def[i] << Suzuki_alto[i] << endl;
            cout << endl;
        }
        tname = Suzuki_alto[0];
        thour = 14000;
        back2(thour, tname);
    }

    else if (choice == 5)
    {
        cout << "\t\t\t\t\t------------Showing details of the car------------" << endl;
        cout << endl;  cout << endl;
        for (int i = 0; i <= 4; i++)
        {
            cout << "\t\t\t\t\t\t\t" << def[i] << toyota_hiace[i] << endl;
            cout << endl;
        }
        tname = toyota_hiace[0];
        thour = 35000;
        back2(thour, tname);
    }


    return 0;
}

int ch_class(int& thour, string& tname, char b)
{
    system("cls");
    system("color 0B");
    if (b == '1')
    {
        system("cls");
        cout << "\t\t\t      ______In High class we have the following options_____" << endl;        cout << endl;
        for (int i = 0; i <= 4; i++)
        {
            cout << "\t\t\t\t\t\t\t" << high_class[i] << endl;
            cout << endl;
        }
        cout << "\t\t\tSelect: ";
        choice_high(thour, tname);
    }
    else if (b == '2')
    {
        cout << "\t\t\t      ______In Middle class we have the following options_____" << endl;
        cout << endl;

        for (int i = 0; i <= 6; i++)
        {

            cout << "\t\t\t\t\t\t\t" << mid_class[i] << endl;
            cout << endl;
        }
        cout << "\t\t\tSelect: ";
        choice_mid(thour, tname);
    }
    else if (b == '3')
    {

        cout << "\t\t\t      ______In Low class we have the following options_____" << endl;        cout << endl;
        for (int i = 0; i <= 4; i++)
        {

            cout << "\t\t\t\t\t\t\t" << low_class[i] << endl;
            cout << endl;
        }
        cout << "\t\t\tSelect: ";
        choice_low(thour, tname);

    }
    else
    {
        cout << "Error in ch_class" << endl;
    }

    return 0;
}

int Byclass(int& thour, string& tname)
{
    char choice;
    cout << "            __In terms of class we have the following three classes. Please select your desired class_" << endl;
    cout << endl;
    cout << "\t\t\t\t" << "1. High class" << endl;
    cout << endl;
    cout << "\t\t\t\t" << "2. Middle class" << endl;
    cout << endl;
    cout << "\t\t\t\t" << "3. low class" << endl;
    cout << endl;
    cout << "Select: ";
    cin >> choice;
    while (choice < '1' || choice > '3' || cin.fail())
    { // validation
        system("color 0C");
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout << "\t\t\t\t\ !!Incorrect Entry!! " << endl;
        cin >> choice;
        cout << endl;
        ;
    }

    ch_class(thour, tname, choice);
    return 0;
}

int choice1(int& thour, string& tname)
{
    int choice;
    cin >> choice;

    cout << endl;
    while (choice < 1 || choice > 2 || cin.fail())
    { // validation
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout << "\t\t\t\t\ !!Incorrect Entry!! " << endl;
        system("color 0C");
        cin >> choice;
        cout << endl;
    }
    system("color 0B");
    if (choice == 1)
    {
        system("cls");
        Bybrand(thour, tname);
    }
    else if (choice == 2)
    {
        system("cls");
        Byclass(thour, tname);
    }
    else
    {
        cout << "error" << endl;
    }

    return 0;
}
void message1(int& thour, string tname)
{

    cout << "\t\t\tPlease Select the catagory by which you want to rent your Car:" << endl;
    cout << endl;
    cout << "\t\t\t\t 1. Brand";
    cout << "\t\t 2. Class" << endl;
    cout << endl;
    cout << "\t\t\t\tSelect: ";
    choice1(thour, tname);
}
struct Invoice
{
    string name;
    string ID_Card;
    string car_name;
    int num_hour;
    int rate;
    int total;
    int card_num;
};

int final(string name, string id, int time, int& thour, string& tname, int p, int l)
{
    system("cls");
    system("color 0B");
    cout << endl;     cout << endl;    cout << endl; cout << endl; cout << endl;
    cout << "\t\tDespacthing data" << endl;
    Sleep(1000);
    cout << "\t\tThis will take a moment";
    Sleep(1000);
    cout << ".";
    Sleep(1000);
    cout << ".";
    Sleep(1000);
    cout << ".";
    Sleep(800);

    system("cls");
    int total = thour * time;
    struct Invoice a;
    a.name = name;
    a.car_name = tname;
    a.num_hour = time;
    a.rate = thour;
    a.total = thour * time;
    a.ID_Card = id;
    a.card_num = p;

    cout << "\t\t\t\t\t\t Final Invoice" << endl;
    cout << "\t\t\t\t\t" << "---------------------------------" << endl;
    cout << endl;
    cout << "\t\t\t\t\t" << def2[0] << "\t " << a.name << endl;
    cout << endl;
    cout << "\t\t\t\t\t" << def2[1] << "\t " << a.ID_Card << endl;
    cout << endl;
    if (l == 0)
    {
        cout << "\t\t\t\t\tCard number: " << "\t " << a.card_num << endl;
        cout << endl;
    }
    cout << "\t\t\t\t\t" << def2[2] << "\t " << a.car_name << endl;
    cout << endl;
    cout << "\t\t\t\t\t" << def2[3] << "\t " << a.num_hour << endl;
    cout << endl;
    cout << "\t\t\t\t\t" << def2[4] << "\t " << a.rate << " Rs" << endl;
    cout << endl;
    cout << "\t\t\t\t\t" << def2[5] << "\t " << a.total << " Rs" << endl;
    cout << endl;
    cout << "\t\t\t\t\t" << "---------------------------------" << endl;
    cout << endl;     cout << endl;    cout << endl;
    cout << "\t\t\NOTE!!: A Fee of " << a.total * 0.10 << " per day will be charged if you fail to Return the car in " << a.num_hour + 1 << " Days";
    cout << endl;     cout << endl;    cout << endl;

    return 0;
}





int info(int& thour, string& tname)
{

    system("cls");
    string name, id;
    int choice, flag;
    int pin = 0;
    int pin2 = 0;
    int time;
    cout << "\t\t\t      ------------ Personal Information -----------" << endl;
    cout << endl;     cout << endl;    cout << endl;
    cin.ignore();
    cout << "\t\t\t\t\t" << "Enter your name: ";
    getline(cin, name);
    cout << endl;     cout << endl;    cout << endl;
    cout << "\t\t\t\t" << "Please enter Your ID card Number: ";
    getline(cin, id);
    cout << endl;     cout << endl;    cout << endl;
    cout << "\t\t\t" << "Please enter The number of days you want to rent the car: ";
    cin >> time;
    system("cls");
    cout << "\t\t\t\t\t" << "Select your payment method" << endl;
    cout << endl;     cout << endl;    cout << endl;
    cout << "\t\t\t\t\t" << "  1) Cash         2) Card";
    cout << endl;     cout << endl;    cout << endl;
    cout << "Select: ";
    cin >> choice;
    while (choice < 1 || choice > 2 || cin.fail())
    { // validation
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout << "\t\t\t\t\ !!Incorrect Entry!! " << endl;
        system("color 0C");
        cin >> choice;
        cout << endl;
    }
    system("color 0B");
    if (choice == 1)
    {
        flag = 1;
        final(name, id, time, thour, tname, pin, flag);
    }
    else if (choice == 2)
    {
        cout << endl;
        cout << "Enter your card Number: ";
        cin >> pin;
        cout << "Enter your card PIN: ";
        cin >> pin2;
        cout << endl;
        flag = 0;
        cout << endl;
        final(name, id, time, thour, tname, pin, flag);
    }

    return 0;
}


int main()
{
    int thour = 0;
    string tname;
    welcum();
    Sleep(1000);
    message1(thour, tname);
    // /system("pause");/
    // /choice1(thour, tname);/

    return 0;
}

int back1(int& thour, string& tname)
{
    int a = 1;

    cout << endl;
    cout << "Press 'C' to confirm\n\n";
    cout << "Press 'B' to go back\n\n";
    cout << "Press 'E' to go back to Main Menu\n\n";
    cout << "Choice: ";
    char choice;
    cin >> choice;

    while (choice != 'b' && choice != 'B' && choice != 'C' && choice != 'c' && choice != 'e' && choice != 'E')
    { // validation
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout << "\t\t\t\t\ !!Incorrect input, Try again!! " << endl;
        system("color 0C");
        cin >> choice;
        cout << endl;
    }
    system("color 0B");

    if (choice == 'B' || choice == 'b')
    {
        system("cls");
        Bybrand(thour, tname);
    }
    else if (choice == 'E' || choice == 'e')
    {
        system("cls");
        message1(thour, tname);
    }
    else if (choice == 'c' || choice == 'C')
    {
        system("cls");

        cout << endl;
        cout << endl;
        cout << endl; // for styling purposes
        cout << endl;
        cout << endl;

        cout << "\t\tloading";
        Sleep(800);
        cout << ".";
        Sleep(800);
        cout << ".";
        Sleep(800);
        cout << "." << endl;
        info(thour, tname);
        a = 0;
    }
    else
    {
        cout << "error in back" << endl;
    }
    return 0;
}

int back2(int& thour, string& tname)
{
    int a = 1;

    cout << endl;
    cout << "Press 'C' to confirm\n\n";
    cout << "Press 'B' to go back\n\n";
    cout << "Press 'E' to go back to Main Menu\n\n";
    cout << "Choice: ";

    char choice;
    cin >> choice;

    while (choice != 'b' && choice != 'B' && choice != 'C' && choice != 'c' && choice != 'e' && choice != 'E')
    { // validation
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout << "\t\t\t\t\ !!Incorrect input, Try again!! " << endl;
        system("color 0C");
        cin >> choice;
        cout << endl;
    }
    system("color 0B");
    if (choice == 'B' || choice == 'b')
    {
        system("cls");
        Byclass(thour, tname);
    }
    else if (choice == 'E' || choice == 'e')
    {
        system("cls");
        message1(thour, tname);
    }
    else if (choice == 'c' || choice == 'C')
    {
        system("cls");

        cout << endl;
        cout << endl;
        cout << endl; // for styling purposes
        cout << endl;
        cout << endl;

        cout << "\t\tloading";
        Sleep(800);
        cout << ".";
        Sleep(800);
        cout << ".";
        Sleep(800);
        cout << "." << endl;
        info(thour, tname);

        a = 0;
    }
    else
    {
        cout << "error in back" << endl;
    }


    return 0;
}