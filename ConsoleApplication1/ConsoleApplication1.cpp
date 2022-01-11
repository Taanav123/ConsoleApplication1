#include<iostream>
#include<istream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
#include <Windows.h>
#include <stdio.h>
#include "MMSystem.h"

using namespace std;
void login();//login page containment
void registr();//registration page containment
bool logged = false;//variables for other loops
bool gameloop = false;
string  reguser, pass;//variables for login info
int gamerun()

{
    if (gameloop = true)//so it will skip over if login page has not been completed
    {
       
            
                //most variables are listed here 
                int CPU = 1, Motherboard = 1, PSU = 1, GPU = 1, ram = 1, storage = 1;
                int choice, quantity;
                double MONEY = 500, COMPVALUE = 750;
                double CPUCOST = 100, MOTHERBOARDCOST = 80, PSUCOST = 40, GPUCOST = 180, RAMCOST = 50, STORAGECOST = 50;
                int cpuTotal, motherTotal, psuTotal, gpuTotal, ramTotal, storageTotal;
                bool cpu1 = false, cpu2 = false, cpu3 = false, cpu4 = false, cpu5 = false;
                bool mother1 = false, mother2 = false, mother3 = false, mother4 = false, mother5 = false;
                bool psu1 = false, psu2 = false, psu3 = false, psu4 = false, psu5 = false;
                bool gpu1 = false, gpu2 = false, gpu3 = false, gpu4 = false, gpu5 = false;
                bool ram1 = false, ram2 = false, ram3 = false, ram4 = false, ram5 = false;
                bool stor1 = false, stor2 = false, stor3 = false, stor4 = false, stor5 = false;
                int upgrade1 = 100, upgrade2 = 150, upgrade3 = 200, upgrade4 = 250, upgrade5 = 300;
                int CPULvl = 0, MotherLvl = 0, PSULvl = 0, GPULvl = 0, RAMLvl = 0, StorLvl = 0;
                bool sandbox = false;
                int gwtest = 0, days = 0;
                bool gw = false;
                bool mesage = false, lost = false;
                int diamonds = 20, diamondToMoney = 50;

                


                do
                {
                   
                    
                    system("cls");
                    cout << "==========================" << endl;
                    cout << "Welcome To Computer Tycoon" << "\t Welcome " << reguser << "!\n";
                    cout << "==========================" << endl;
                    if (sandbox == true)
                    {
                        cout << "Currently In Sandbox Mode." << endl;
                        cout << "==========================" << endl;
                    }
                    else if (sandbox == false)
                    {
                        cout << "Currently In Normal Mode." << endl;
                        cout << "==========================" << endl;
                    }
                    cout << "Inventory" << endl;
                    cout << "==========" << endl;
                    cout << "CPU: " << CPU << "\t\t\tCPU LEVEL:" << CPULvl << endl;
                    cout << "Motherboards: " << Motherboard << "\t\tMotherboard LEVEL:" << MotherLvl << endl;
                    cout << "PowerSupply: " << PSU << "\t\tPowerSupply LEVEL:" << PSULvl << endl;
                    cout << "Graphics Card: " << GPU << "\tGraphicsCard LEVEL:" << GPULvl << endl;
                    cout << "RAM: " << ram << "\t\t\tRAM LEVEL:" << RAMLvl << endl;
                    cout << "Storage: " << storage << "\t\tStorage LEVEL:" << StorLvl << endl;
                    cout << "Money: " << MONEY << "\t\tComputer Value:" << COMPVALUE << endl;
                    cout << "Diamonds: " << diamonds << "\t\tDiamond Value: " << diamondToMoney << endl;
                    cout << "==========================" << endl;
                    cout << "What would you like to do?" << endl;
                    cout << "0. Exit The Game" << endl;
                    cout << "1. Go Shopping" << endl;
                    cout << "2. Buy Upgrades" << endl;
                    cout << "3. Host Giveaway" << endl;
                    cout << "4. Make Computers" << endl;
                    cout << "5. Sell Parts" << endl;
                    cout << "6. Convert Currency" << endl;
                    cout << "7. Save data" << endl;
                    cout << "8. Load data" << endl;

                    cout << "Please Enter Choice: \n";


                    do {

                        if (!cin.good())
                        {
                            cin.clear();
                            string garbage;
                            cin >> garbage;
                        }
                        cin >> choice;
                    } while (!cin.good() || choice < 0);

                    system("cls");
                    
                    if (choice == 8)
                    {
                        int CPUS, MOTHERBOARDS, POWERSUPPLIES, GPUS, RAMS, STORAGES, MONEYS, DIAMOND, VALUE;
                        ifstream input(reguser + ".txt", ios :: out | ios :: in);
                        while (input >> reguser >> pass >> CPUS >> MOTHERBOARDS >> POWERSUPPLIES >> GPUS >> RAMS >> STORAGES >> MONEYS >> DIAMOND >> VALUE)
                        {
                            CPU = CPUS;
                            Motherboard = MOTHERBOARDS;
                            PSU = POWERSUPPLIES;
                            GPU = GPUS;
                            ram = RAMS;
                            storage = STORAGES;
                            MONEY = MONEYS;
                            diamonds = DIAMOND;
                            COMPVALUE = VALUE;
                            system("cls");
                           
                        }

                    }
                    else if (choice == 7)
                    {
                        int CPUS, MOTHERBOARDS, POWERSUPPLIES, GPUS, RAMS, STORAGES, MONEYS, DIAMOND, VALUE;
                        CPUS = CPU;
                        MOTHERBOARDS = Motherboard;
                        POWERSUPPLIES = PSU;
                        GPUS = GPU;
                        RAMS = ram;
                        STORAGES = storage;
                        MONEYS = MONEY;
                        DIAMOND = diamonds;
                        VALUE = COMPVALUE;



                        ofstream myFile_Handler;
                        // File Open
                        myFile_Handler.open(reguser + ".txt",ios :: out);

                        myFile_Handler << reguser << " " << pass << " " << CPUS << endl << MOTHERBOARDS << endl << POWERSUPPLIES << endl << GPUS << endl << RAMS << endl << STORAGES << endl << MONEYS << endl << DIAMOND << endl << VALUE << endl;

                        // File Close
                        myFile_Handler.close();
                        system("cls");
                        cout << "Save Successful!" << endl;
                        system("pause");


                    }
                    if (choice == 6)
                    {
                        int quantit, total;
                        cout << "How many diamonds would you like to convert: " << endl;
                        do
                        {
                            if (!cin.good())
                            {
                                cin.clear();
                                string garbage;
                                cin >> garbage;
                            }
                            cin >> quantit;

                        } while (!cin.good() || quantit < 0);
                        if (diamonds < quantit)
                        {
                            system("cls");
                            cout << "You do not have enough diamonds to convert." << endl;
                            system("pause");
                        }
                        else if (diamonds > quantit)
                        {
                            system("cls");
                            diamonds -= quantit;
                            total = quantit * diamondToMoney;
                            MONEY += total;
                            cout << "Congrats on Converting " << quantit << " Diamonds to " << total << " cash" << endl;
                            system("pause");
                        }





                    }
                    if (choice == 4)
                    {
                        int total, quant;
                        cout << "How many computers would you like to make?" << endl;

                        do
                        {

                            if (!cin.good())
                            {
                                cin.clear();
                                string garbage;
                                cin >> garbage;
                            }
                            cin >> quant;

                        } while (!cin.good() || quant < 0 || quant > 6);

                        if (quant <= 0)
                        {
                            system("cls");
                            cout << "That is an invalid ammount!" << endl;
                            system("pause");
                        }
                        else if (CPU >= quant && Motherboard >= quant && PSU >= quant && GPU >= quant && ram >= quant && storage >= quant)
                        {
                            CPU -= quant;
                            Motherboard -= quant;
                            PSU -= quant;
                            GPU -= quant;
                            ram -= quant;
                            storage -= quant;
                            total = quant * COMPVALUE;
                            MONEY += total;
                            system("cls");
                            cout << "Congratulation you have sold " << quant << " computer(s)" << endl;
                            system("pause");
                        }
                        else if (CPU < quant || Motherboard < quant || PSU < quant || GPU < quant || ram < quant || storage < quant)
                        {
                            system("cls");
                            cout << "You have not met the requirements to make " << quant << " computer(s)" << endl;
                            system("pause");
                        }


                    }
                    if (choice == 5)
                    {
                        int sellChoice, dec;


                        cout << "Inventory" << endl;
                        cout << "=======================" << endl;
                        cout << "CPU: " << CPU << "\t\t\tCPU LEVEL:" << CPULvl << endl;
                        cout << "Motherboards: " << Motherboard << "\t\tMotherboard LEVEL:" << MotherLvl << endl;
                        cout << "PowerSupply: " << PSU << "\t\tPowerSupply LEVEL:" << PSULvl << endl;
                        cout << "Graphics Card: " << GPU << "\tGraphicsCard LEVEL:" << GPULvl << endl;
                        cout << "RAM: " << ram << "\t\t\tRAM LEVEL:" << RAMLvl << endl;
                        cout << "Storage: " << storage << "\t\tStorage LEVEL:" << StorLvl << endl;
                        cout << "Money: " << MONEY << "\t\tComputer Value:" << COMPVALUE << endl;
                        cout << "=======================" << endl;
                        cout << "=======================" << endl;
                        cout << "Welcome to the Junkyard" << endl;
                        cout << "=======================" << endl;
                        cout << "Salvage parts here!" << endl;
                        cout << "0. Exit Junkyard" << endl;
                        cout << "1. CPU (80)" << endl;
                        cout << "2. Motherboard (60)" << endl;
                        cout << "3. Powersupply (20)" << endl;
                        cout << "4. Graphics Card (140)\n";
                        cout << "5. RAM (30)" << endl;
                        cout << "6. Storage (30)" << endl;
                        do
                        {

                            if (!cin.good())
                            {
                                cin.clear();
                                string garbage;
                                cin >> garbage;
                            }
                            cin >> sellChoice;

                        } while (!cin.good() || sellChoice < 0 || sellChoice > 6);



                        if (sellChoice <= -1)
                        {
                            system("cls");
                            cout << "Please enter a valid choice." << endl;
                            system("pause");
                        }

                        if (sellChoice == 1)
                        {
                            if (CPU < 1)
                            {
                                cout << "You don't have enough of the component in your inventory." << endl;
                            }
                            if (CPU >= 1)
                            {
                                cout << "Are you sure you want to sell a CPU for (80)?" << endl;
                                cout << "1.Yes \t 2.No ";
                                cin >> dec;
                            }
                            if (dec == 1)
                            {
                                CPU--;
                                MONEY = MONEY + 80;
                                system("cls");
                                cout << "You have Succesfully sold a CPU" << endl;
                                cout << "Your total balance is " << MONEY << endl;
                                system("pause");
                            }
                        }
                        if (sellChoice == 2)
                        {
                            if (Motherboard < 1)
                            {
                                cout << "You don't have enough of the component in your inventory." << endl;
                            }
                            if (Motherboard >= 1)
                            {
                                cout << "Are you sure you want to sell a Motherboard for (60)?" << endl;
                                cout << "1.Yes \t 2.No ";
                                cin >> dec;
                            }
                            if (dec == 1)
                            {
                                Motherboard--;
                                MONEY = MONEY + 60;
                                cout << "You have Succesfully sold a Motherboard" << endl;
                                cout << "Your total balance is " << MONEY << endl;
                            }
                        }
                        if (sellChoice == 3)
                        {
                            if (PSU < 1)
                            {
                                cout << "You don't have enough of the component in your inventory." << endl;
                            }
                            if (PSU >= 1)
                            {
                                cout << "Are you sure you want to sell a Powersupply for (20)?" << endl;
                                cout << "1.Yes \t 2.No ";
                                cin >> dec;
                            }
                            if (dec == 1)
                            {
                                PSU--;
                                MONEY = MONEY + 20;
                                cout << "You have Succesfully sold a Powersupply" << endl;
                                cout << "Your total balance is " << MONEY << endl;
                            }
                        }
                        if (sellChoice == 4)
                        {
                            if (GPU < 1)
                            {
                                cout << "You don't have enough of the component in your inventory." << endl;
                            }
                            if (GPU >= 1)
                            {
                                cout << "Are you sure you want to sell a GraphicsCard for (140)?" << endl;
                                cout << "1.Yes \t 2.No ";
                                cin >> dec;
                            }
                            if (dec == 1)
                            {
                                GPU--;
                                MONEY = MONEY + 140;
                                cout << "You have Succesfully sold a GraphicsCard" << endl;
                                cout << "Your total balance is " << MONEY << endl;
                            }
                        }
                        if (sellChoice == 5)
                        {
                            if (ram < 1)
                            {
                                cout << "You don't have enough of the component in your inventory." << endl;
                            }
                            if (ram >= 1)
                            {
                                cout << "Are you sure you want to sell a RAM for (30)?" << endl;
                                cout << "1.Yes \t 2.No ";
                                cin >> dec;
                            }
                            if (dec == 1)
                            {
                                ram--;
                                MONEY = MONEY + 30;
                                cout << "You have Succesfully sold a RAM" << endl;
                                cout << "Your total balance is " << MONEY << endl;
                            }
                        }
                        if (sellChoice == 6)
                        {
                            if (storage < 1)
                            {
                                cout << "You don't have enough of the component in your inventory." << endl;
                            }
                            if (storage >= 1)
                            {
                                cout << "Are you sure you want to sell a Storage unit for (30)?" << endl;
                                cout << "1.Yes \t 2.No ";
                                cin >> dec;
                            }
                            if (dec == 1)
                            {
                                storage--;
                                MONEY = MONEY + 30;
                                cout << "You have Succesfully sold a Storage unit" << endl;
                                cout << "Your total balance is " << MONEY << endl;
                            }
                        }

                    }

                    if (choice == 3)
                    {
                        mesage = false;
                        if (gw == false)
                        {
                            if (gw == true)
                            {
                                system("cls");
                                
                                cout << "You have hosted a giveaway too recently to start another one please wait " << gwtest << endl;
                                system("pause");
                                mesage = true;
                            }
                            else if (CPU > 1 && Motherboard > 1 && PSU > 1 && GPU > 1 && ram > 1 && storage > 1 && MONEY >= 500)
                            {
                                cout << "Congratulations you are hosting a giveaway!" << endl;
                                gwtest = 3;
                                gw = true;
                                CPU--;
                                Motherboard--;
                                PSU--;
                                GPU--;
                                ram--;
                                storage--;
                                COMPVALUE += 100;
                                diamondToMoney += 10;
                                system("pause");
                            }
                            if (mesage == false)
                            {
                                if (CPU <= 1)
                                {
                                    system("cls");
                                    cout << "test";
                                    cout << "You do not have enough components to host a giveaway" << endl;
                                    system("pause");
                                    (mesage = true);
                                }
                            }
                            if (mesage == false)
                            {
                                if (Motherboard <= 1)
                                {
                                    system("cls");
                                    cout << "You do not have enough components to host a giveaway" << endl;
                                    system("pause");
                                    mesage = true;
                                }
                            }
                            if (mesage == false)
                            {
                                if (PSU < 1)
                                {
                                    system("cls");
                                    cout << "You do not have enough components to host a giveaway" << endl;
                                    system("pause");
                                    mesage = true;
                                }
                            }
                            if (mesage == false)
                            {
                                if (GPU <= 1)
                                {
                                    system("cls");
                                    cout << "You do not have enough components to host a giveaway" << endl;
                                    system("pause");
                                    mesage = true;
                                }
                            }
                            if (mesage == false)
                            {
                                if (ram <= 1)
                                {
                                    system("cls");
                                    cout << "You do not have enough components to host a giveaway" << endl;
                                    system("pause");
                                    mesage = true;
                                }
                            }
                            if (mesage == false)
                            {
                                if (storage <= 1)
                                {
                                    system("cls");
                                    cout << "You do not have enough components to host a giveaway" << endl;
                                    system("pause");
                                    mesage = true;
                                }
                            }
                            if (mesage == false)
                            {
                                if (MONEY < 500)
                                {
                                    system("cls");
                                    cout << "You don't have enough money to host a giveaway" << endl;
                                    system("pause");
                                    mesage = true;
                                }
                            }

                            system("cls");
                        }

                    }
                    if (choice == 1)
                    {
                        int storeChoice;


                        system("cls");
                        cout << "Inventory" << endl;
                        cout << "========================" << endl;
                        cout << "CPU: " << CPU << "\t\t\tCPU LEVEL:" << CPULvl << endl;
                        cout << "Motherboards: " << Motherboard << "\t\tMotherboard LEVEL:" << MotherLvl << endl;
                        cout << "PowerSupply: " << PSU << "\t\tPowerSupply LEVEL:" << PSULvl << endl;
                        cout << "Graphics Card: " << GPU << "\tGraphicsCard LEVEL:" << GPULvl << endl;
                        cout << "RAM: " << ram << "\t\t\tRAM LEVEL:" << RAMLvl << endl;
                        cout << "Storage: " << storage << "\t\tStorage LEVEL:" << StorLvl << endl;
                        cout << "Money: " << MONEY << "\t\tComputer Value:" << COMPVALUE << endl;
                        cout << "========================" << endl;
                        cout << "\n=======================" << endl;
                        cout << "Welcome to Parts Land!" << endl;
                        cout << "========================" << endl;
                        cout << "0. Exit Shop" << endl;
                        cout << "1. Buy CPU" << endl;
                        cout << "2. Buy Motherboard" << endl;
                        cout << "3. Buy PowerSupply" << endl;
                        cout << "4. Buy Graphics Card" << endl;
                        cout << "5. Buy RAM" << endl;
                        cout << "6. Buy Storage" << endl;
                        cout << "Please Enter Choice: \n";

                        do
                        {

                            if (!cin.good())
                            {
                                cin.clear();
                                string garbage;
                                cin >> garbage;
                            }
                            cin >> storeChoice;

                        } while (!cin.good() || storeChoice < 0 || storeChoice > 6);







                        if (storeChoice <= -1)
                        {
                            system("cls");
                            cout << "Please enter a valid choice." << endl;
                            system("pause");
                        }
                        else if (storeChoice == 1)
                        {
                            cout << "Please enter quantity: ";
                            cin >> quantity;
                            cpuTotal = quantity * CPUCOST;
                            if (quantity <= 0)
                            {
                                system("cls");
                                cout << "Please enter a valid ammount." << endl;
                                system("pause");
                            }
                            if (MONEY < cpuTotal)
                            {
                                cout << "You don't have enough money!" << endl;
                                system("pause");
                            }
                            else if (MONEY >= cpuTotal && quantity > 0)
                            {
                                MONEY = MONEY - cpuTotal;
                                CPU = CPU + quantity;
                                cout << "Congrats on buying a CPU! Your total CPU inventory is: " << CPU << endl;
                                system("pause");
                            }
                        }
                        else if (storeChoice == 2)
                        {
                            cout << "Please enter quantity: ";
                            cin >> quantity;
                            motherTotal = quantity * MOTHERBOARDCOST;
                            if (quantity <= 0)
                            {
                                system("cls");
                                cout << "Please enter a valid ammount." << endl;
                                system("pause");
                            }
                            if (MONEY < motherTotal)
                            {
                                cout << "You don't have enough money!" << endl;
                                system("pause");
                            }
                            else if (MONEY >= motherTotal && quantity > 0)
                            {
                                MONEY = MONEY - motherTotal;
                                Motherboard = Motherboard + quantity;
                                cout << "Congrats on buying a MotherBoard! Your total MotherBoard inventory is: " << Motherboard << endl;
                                system("pause");

                            }
                        }
                        else if (storeChoice == 3)
                        {
                            cout << "Please enter quantity: ";
                            cin >> quantity;
                            psuTotal = quantity * PSUCOST;
                            if (quantity <= 0)
                            {
                                system("cls");
                                cout << "Please enter a valid ammount." << endl;
                                system("pause");
                            }
                            if (MONEY < psuTotal)
                            {
                                cout << "You don't have enough money!" << endl;
                                system("pause");
                            }
                            else if (MONEY >= psuTotal && quantity > 0)
                            {
                                MONEY = MONEY - psuTotal;
                                PSU = PSU + quantity;
                                cout << "Congrats on buying a Powersupply! Your total Powersupply inventory is: " << PSU << endl;
                                system("pause");

                            }
                        }
                        else if (storeChoice == 4)
                        {
                            cout << "Please enter quantity: ";
                            cin >> quantity;
                            gpuTotal = quantity * GPUCOST;
                            if (quantity <= 0)
                            {
                                system("cls");
                                cout << "Please enter a valid ammount." << endl;
                                system("pause");
                            }
                            if (MONEY < gpuTotal)
                            {
                                cout << "You don't have enough money!" << endl;
                                system("pause");
                            }
                            else if (MONEY >= gpuTotal && quantity > 0)
                            {
                                MONEY = MONEY - gpuTotal;
                                GPU = GPU + quantity;
                                cout << "Congrats on buying a Graphics Card! Your total Graphics Card inventory is: " << GPU << endl;
                                system("pause");
                            }
                        }
                        else if (storeChoice == 5)
                        {
                            cout << "Please enter quantity: ";
                            cin >> quantity;
                            ramTotal = quantity * RAMCOST;
                            if (quantity <= 0)
                            {
                                system("cls");
                                cout << "Please enter a valid ammount." << endl;
                                system("pause");
                            }
                            if (MONEY < ramTotal)
                            {
                                cout << "You don't have enough money!" << endl;
                                system("pause");
                            }
                            if (MONEY >= ramTotal && quantity > 0)
                            {
                                MONEY = MONEY - ramTotal;
                                ram = ram + quantity;
                                cout << "Congrats on buying RAM! Your total RAM inventory is: " << ram << endl;
                                system("pause");
                            }
                        }
                        else if (storeChoice == 6)
                        {
                            cout << "Please enter quantity: ";
                            cin >> quantity;
                            storageTotal = quantity * STORAGECOST;
                            if (quantity <= 0)
                            {
                                cout << "Please enter a valid ammount." << endl;
                                system("pause");
                            }
                            else if (MONEY < storageTotal)
                            {
                                system("cls");
                                cout << "You don't have enough money!" << endl;
                                system("pause");
                            }
                            if (MONEY >= storageTotal && quantity > 0)
                            {
                                MONEY = MONEY - storageTotal;
                                storage = storage + quantity;
                                cout << "Congrats on buying Storage! Your total Storage inventory is: " << storage << endl;
                                system("pause");
                            }
                        }
                        system("cls");


                    }
                    if (choice == 2)
                    {
                        int upgradeChoice;



                        cout << "===============================" << endl;
                        cout << "WELCOME TO THE UPGRADE STATION!" << endl;
                        cout << "===============================" << endl;
                        cout << "Which Upgrade would you like to purchase?" << endl;
                        cout << "0. Exit the upgrade station" << endl;
                        cout << "1. CPU Upgrade" << endl;
                        cout << "2. Motherboard Upgrade" << endl;
                        cout << "3. PSU Upgrade" << endl;
                        cout << "4. Graphics Card Upgrade" << endl;
                        cout << "5. RAM Upgrade" << endl;
                        cout << "6. Storage Upgrade" << endl;
                        cout << "Please enter you choice: ";
                        do
                        {

                            if (!cin.good())
                            {
                                cin.clear();
                                string garbage;
                                cin >> garbage;
                            }
                            cin >> upgradeChoice;

                        } while (!cin.good() || upgradeChoice < 0 || upgradeChoice > 6);


                        if (upgradeChoice <= -1)
                        {
                            system("cls");
                            cout << "Please enter a valid choice." << endl;
                            system("pause");
                        }
                        if (upgradeChoice == 1)
                        {
                            if (cpu1 == false && MONEY > upgrade1)
                            {
                                COMPVALUE += 75;
                                cpu1 = true;
                                MONEY -= upgrade1;
                                CPULvl = 1;
                                system("cls");
                                cout << "Congratualtions on purchasing level 1 CPU upgrade!\n";
                                system("pause");

                            }
                            else if (cpu2 == false && MONEY > upgrade2)
                            {
                                COMPVALUE += 100;
                                cpu2 = true;
                                MONEY -= upgrade2;
                                CPULvl = 2;
                                system("cls");
                                cout << "Congratualtions on purchasing level 2 CPU upgrade!\n";
                                system("pause");
                            }
                            else if (cpu3 == false && MONEY > upgrade3)
                            {
                                COMPVALUE += 125;
                                cpu3 = true;
                                MONEY -= upgrade3;
                                CPULvl = 3;
                                system("cls");
                                cout << "Congratualtions on purchasing level 3 CPU upgrade!\n";
                                system("pause");

                            }
                            else if (cpu4 == false && MONEY > upgrade4)
                            {
                                COMPVALUE += 150;
                                cpu4 = true;
                                MONEY -= upgrade4;
                                CPULvl = 4;
                                system("cls");
                                cout << "Congratualtions on purchasing level 4 CPU upgrade!\n";
                                system("pause");
                            }
                            else if (cpu5 == false && MONEY > upgrade5)
                            {
                                COMPVALUE += 175;
                                cpu5 = true;
                                MONEY -= upgrade5;
                                CPULvl = 5;
                                system("cls");
                                cout << "Congratualtions on purchasing level 5 CPU upgrade!\n";
                                system("pause");
                            }
                            else if (cpu5 == true)
                            {
                                system("cls");
                                cout << "You have achieved the maximum level for this component." << endl;
                                system("pause");
                            }
                            else if (MONEY < upgrade1)
                            {
                                system("cls");
                                cout << "You Don't Have Enough Money! Please Try Again Later." << endl;
                                system("pause");
                            }
                            else if (MONEY < upgrade2)
                            {
                                system("cls");
                                cout << "You Don't Have Enough Money! Please Try Again Later." << endl;
                                system("pause");
                            }
                            else if (MONEY < upgrade3)
                            {
                                system("cls");
                                cout << "You Don't Have Enough Money! Please Try Again Later." << endl;
                                system("pause");
                            }
                            else if (MONEY < upgrade4)
                            {
                                system("cls");
                                cout << "You Don't Have Enough Money! Please Try Again Later." << endl;
                                system("pause");
                            }
                            else if (MONEY < upgrade5)
                            {
                                system("cls");
                                cout << "You Don't Have Enough Money! Please Try Again Later." << endl;
                                system("pause");
                            }


                        }
                        else if (upgradeChoice == 2)
                        {
                            if (mother1 == false && MONEY > upgrade1)
                            {
                                COMPVALUE += 75;
                                mother1 = true;
                                MotherLvl = 1;
                                MONEY -= upgrade1;
                                system("cls");
                                cout << "Congratualtions on purchasing level 1 Motherboard upgrade!\n";
                                system("pause");
                            }
                            else if (mother2 == false && MONEY > upgrade2)
                            {
                                COMPVALUE += 100;
                                mother2 = true;
                                MotherLvl = 2;
                                MONEY -= upgrade2;
                                system("cls");
                                cout << "Congratualtions on purchasing level 2 Motherboard upgrade!\n";
                                system("pause");
                            }
                            else if (mother3 == false && MONEY > upgrade3)
                            {
                                COMPVALUE += 125;
                                mother3 = true;
                                MotherLvl = 3;
                                MONEY -= upgrade3;
                                system("cls");
                                cout << "Congratualtions on purchasing level 3 Motherboard upgrade!\n";
                                system("pause");
                            }
                            else if (mother4 == false && MONEY > upgrade4)
                            {
                                COMPVALUE += 150;
                                mother4 = true;
                                MotherLvl = 4;
                                MONEY -= upgrade4;
                                system("cls");
                                cout << "Congratualtions on purchasing level 4 Motherboard upgrade!\n";
                                system("pause");
                            }
                            else if (mother5 == false && MONEY > upgrade5)
                            {
                                COMPVALUE += 175;
                                mother5 = true;
                                MotherLvl = 5;
                                MONEY -= upgrade5;
                                system("cls");
                                cout << "Congratualtions on purchasing level 5 Motherboard upgrade!\n";
                                system("pause");
                            }
                            else if (mother5 == true)
                            {
                                system("cls");
                                cout << "You have achieved the maximum level for this component." << endl;
                                system("pause");
                            }
                            else if (MONEY < upgrade1)
                            {
                                system("cls");
                                cout << "You Don't Have Enough Money! Please Try Again Later." << endl;
                                system("pause");
                            }
                            else if (MONEY < upgrade2)
                            {
                                system("cls");
                                cout << "You Don't Have Enough Money! Please Try Again Later." << endl;
                                system("pause");
                            }
                            else if (MONEY < upgrade3)
                            {
                                system("cls");
                                cout << "You Don't Have Enough Money! Please Try Again Later." << endl;
                                system("pause");
                            }
                            else if (MONEY < upgrade4)
                            {
                                system("cls");
                                cout << "You Don't Have Enough Money! Please Try Again Later." << endl;
                                system("pause");
                            }
                            else if (MONEY < upgrade5)
                            {
                                system("cls");
                                cout << "You Don't Have Enough Money! Please Try Again Later." << endl;
                                system("pause");
                            }


                        }
                        else    if (upgradeChoice == 3)
                        {
                            if (psu1 == false && MONEY > upgrade1)
                            {
                                COMPVALUE += 75;
                                psu1 = true;
                                PSULvl = 1;
                                MONEY -= upgrade1;
                                system("cls");
                                cout << "Congratualtions on purchasing level 1 Powersupply upgrade!\n";
                                system("pause");
                            }
                            else if (psu2 == false && MONEY > upgrade2)
                            {
                                COMPVALUE += 100;
                                psu2 = true;
                                PSULvl = 2;
                                MONEY -= upgrade2;
                                system("cls");
                                cout << "Congratualtions on purchasing level 2 Powersupply upgrade!\n";
                                system("pause");
                            }
                            else if (psu3 == false && MONEY > upgrade3)
                            {
                                COMPVALUE += 125;
                                psu3 = true;
                                PSULvl = 3;
                                MONEY -= upgrade3;
                                system("cls");
                                cout << "Congratualtions on purchasing level 3 Powersupply upgrade!\n";
                                system("pause");
                            }
                            else if (psu4 == false && MONEY > upgrade4)
                            {
                                COMPVALUE += 150;
                                psu4 = true;
                                PSULvl = 4;
                                MONEY -= upgrade4;
                                system("cls");
                                cout << "Congratualtions on purchasing level 4 Powersupply upgrade!\n";
                                system("pause");
                            }
                            else if (psu5 == false && MONEY > upgrade5)
                            {
                                COMPVALUE += 175;
                                psu5 = true;
                                PSULvl = 5;
                                MONEY -= upgrade5;
                                system("cls");
                                cout << "Congratualtions on purchasing level 5 Powersupply upgrade!\n";
                                system("pause");
                            }
                            else if (psu5 == true)
                            {
                                system("cls");
                                cout << "You have achieved the maximum level for this component." << endl;
                                system("pause");
                            }
                            else if (MONEY < upgrade1)
                            {
                                system("cls");
                                cout << "You Don't Have Enough Money! Please Try Again Later." << endl;
                                system("pause");
                            }
                            else if (MONEY < upgrade2)
                            {
                                system("cls");
                                cout << "You Don't Have Enough Money! Please Try Again Later." << endl;
                                system("pause");
                            }
                            else if (MONEY < upgrade3)
                            {
                                system("cls");
                                cout << "You Don't Have Enough Money! Please Try Again Later." << endl;
                                system("pause");
                            }
                            else if (MONEY < upgrade4)
                            {
                                system("cls");
                                cout << "You Don't Have Enough Money! Please Try Again Later." << endl;
                                system("pause");
                            }
                            else if (MONEY < upgrade5)
                            {
                                system("cls");
                                cout << "You Don't Have Enough Money! Please Try Again Later." << endl;
                                system("pause");
                            }

                        }
                        else  if (upgradeChoice == 4)
                        {
                            if (gpu1 == false && MONEY > upgrade1)
                            {
                                COMPVALUE += 75;
                                gpu1 = true;
                                GPULvl = 1;
                                MONEY -= upgrade1;
                                system("cls");
                                cout << "Congratualtions on purchasing level 1 GraphicsCard upgrade!\n";
                                system("pause");
                            }
                            else if (gpu2 == false && MONEY > upgrade2)
                            {
                                COMPVALUE += 100;
                                gpu2 = true;
                                GPULvl = 2;
                                MONEY -= upgrade2;
                                system("cls");
                                cout << "Congratualtions on purchasing level 2 GraphicsCard upgrade!\n";
                                system("pause");
                            }
                            else if (gpu3 == false && MONEY > upgrade3)
                            {
                                COMPVALUE += 125;
                                gpu3 = true;
                                GPULvl = 3;
                                MONEY -= upgrade3;
                                system("cls");
                                cout << "Congratualtions on purchasing level 3 GraphicsCard upgrade!\n";
                                system("pause");
                            }
                            else if (gpu4 == false && MONEY > upgrade4)
                            {
                                COMPVALUE += 150;
                                gpu4 = true;
                                GPULvl = 4;
                                MONEY -= upgrade4;
                                system("cls");
                                cout << "Congratualtions on purchasing level 4 GraphicsCard upgrade!\n";
                                system("pause");
                            }
                            else if (gpu5 == false && MONEY > upgrade5)
                            {
                                COMPVALUE += 175;
                                gpu5 = true;
                                GPULvl = 5;
                                MONEY -= upgrade5;
                                system("cls");
                                cout << "Congratualtions on purchasing level 5 GraphicsCard upgrade!\n";
                                system("pause");
                            }
                            else if (gpu5 == true)
                            {
                                system("cls");
                                cout << "You have achieved the maximum level for this component." << endl;
                                system("pause");
                            }
                            else if (MONEY < upgrade1)
                            {
                                system("cls");
                                cout << "You Don't Have Enough Money! Please Try Again Later." << endl;
                                system("pause");
                            }
                            else if (MONEY < upgrade2)
                            {
                                system("cls");
                                cout << "You Don't Have Enough Money! Please Try Again Later." << endl;
                                system("pause");
                            }
                            else if (MONEY < upgrade3)
                            {
                                system("cls");
                                cout << "You Don't Have Enough Money! Please Try Again Later." << endl;
                                system("pause");
                            }
                            else if (MONEY < upgrade4)
                            {
                                system("cls");
                                cout << "You Don't Have Enough Money! Please Try Again Later." << endl;
                                system("pause");
                            }
                            else if (MONEY < upgrade5)
                            {
                                system("cls");
                                cout << "You Don't Have Enough Money! Please Try Again Later." << endl;
                                system("pause");
                            }
                        }
                        else if (upgradeChoice == 5)
                        {
                            if (ram1 == false && MONEY > upgrade1)
                            {
                                COMPVALUE += 75;
                                ram1 = true;
                                RAMLvl = 1;
                                MONEY -= upgrade1;
                                system("cls");
                                cout << "Congratualtions on purchasing level 1 RAM upgrade!\n";
                                system("pause");
                            }
                            else if (ram2 == false && MONEY > upgrade2)
                            {
                                COMPVALUE += 100;
                                ram2 = true;
                                RAMLvl = 2;
                                MONEY -= upgrade2;
                                system("cls");
                                cout << "Congratualtions on purchasing level 2 RAM upgrade!\n";
                                system("pause");
                            }
                            else if (ram3 == false && MONEY > upgrade3)
                            {
                                COMPVALUE += 125;
                                ram3 = true;
                                RAMLvl = 3;
                                MONEY -= upgrade3;
                                system("cls");
                                cout << "Congratualtions on purchasing level 3 RAM upgrade!\n";
                                system("pause");
                            }
                            else if (ram4 == false && MONEY > upgrade4)
                            {
                                COMPVALUE += 150;
                                ram4 = true;
                                RAMLvl = 4;
                                MONEY -= upgrade4;
                                system("cls");
                                cout << "Congratualtions on purchasing level 4 RAM upgrade!\n";
                                system("pause");
                            }
                            else if (ram5 == false && MONEY > upgrade5)
                            {
                                COMPVALUE += 175;
                                ram5 = true;
                                RAMLvl = 5;
                                MONEY -= upgrade5;
                                system("cls");
                                cout << "Congratualtions on purchasing level 5 RAM upgrade!\n";
                                system("pause");
                            }
                            else if (ram5 == true)
                            {
                                system("cls");
                                cout << "You have achieved the maximum level for this component." << endl;
                                system("pause");
                            }
                            else if (MONEY < upgrade1)
                            {
                                system("cls");
                                cout << "You Don't Have Enough Money! Please Try Again Later." << endl;
                                system("pause");
                            }
                            else if (MONEY < upgrade2)
                            {
                                system("cls");
                                cout << "You Don't Have Enough Money! Please Try Again Later." << endl;
                                system("pause");
                            }
                            else if (MONEY < upgrade3)
                            {
                                system("cls");
                                cout << "You Don't Have Enough Money! Please Try Again Later." << endl;
                                system("pause");
                            }
                            else if (MONEY < upgrade4)
                            {
                                system("cls");
                                cout << "You Don't Have Enough Money! Please Try Again Later." << endl;
                                system("pause");
                            }
                            else if (MONEY < upgrade5)
                            {
                                system("cls");
                                cout << "You Don't Have Enough Money! Please Try Again Later." << endl;
                                system("pause");
                            }
                        }
                        else if (upgradeChoice == 6)
                        {
                            if (stor1 == false && MONEY > upgrade1)
                            {
                                COMPVALUE += 75;
                                stor1 = true;
                                StorLvl = 1;
                                MONEY -= upgrade1;
                                system("cls");
                                cout << "Congratualtions on purchasing level 1 Storage upgrade!\n";
                                system("pause");
                            }
                            else if (stor2 == false && MONEY > upgrade2)
                            {
                                COMPVALUE += 100;
                                stor2 = true;
                                StorLvl = 2;
                                MONEY -= upgrade2;
                                system("cls");
                                cout << "Congratualtions on purchasing level 2 Storage upgrade!\n";
                                system("pause");
                            }
                            else if (stor3 == false && MONEY > upgrade3)
                            {
                                COMPVALUE += 125;
                                stor3 = true;
                                StorLvl = 3;
                                MONEY -= upgrade3;
                                system("cls");
                                cout << "Congratualtions on purchasing level 3 Storage upgrade!\n";
                                system("pause");
                            }
                            else if (stor4 == false && MONEY > upgrade4)
                            {
                                COMPVALUE += 150;
                                stor4 = true;
                                StorLvl = 4;
                                MONEY -= upgrade4;
                                system("cls");
                                cout << "Congratualtions on purchasing level 4 Storage upgrade!\n";
                                system("pause");
                            }
                            else if (stor5 == false && MONEY > upgrade5)
                            {
                                COMPVALUE += 175;
                                stor5 = true;
                                StorLvl = 5;
                                MONEY -= upgrade5;
                                system("cls");
                                cout << "Congratualtions on purchasing level 5 Storage upgrade!\n";
                                system("pause");
                            }
                            else if (stor5 == true)
                            {
                                system("cls");
                                cout << "You have achieved the maximum level for this component." << endl;
                                system("pause");
                            }
                            else if (MONEY < upgrade1)
                            {
                                system("cls");
                                cout << "You Don't Have Enough Money! Please Try Again Later." << endl;
                                system("pause");
                            }
                            else if (MONEY < upgrade2)
                            {
                                system("cls");
                                cout << "You Don't Have Enough Money! Please Try Again Later." << endl;
                                system("pause");
                            }
                            else if (MONEY < upgrade3)
                            {
                                system("cls");
                                cout << "You Don't Have Enough Money! Please Try Again Later." << endl;
                                system("pause");
                            }
                            else if (MONEY < upgrade4)
                            {
                                system("cls");
                                cout << "You Don't Have Enough Money! Please Try Again Later." << endl;
                                system("pause");
                            }
                            else if (MONEY < upgrade5)
                            {
                                system("cls");
                                cout << "You Don't Have Enough Money! Please Try Again Later." << endl;
                                system("pause");
                            }
                        }
                        system("cls");

                    }

                    else if (choice == 999)
                    {
                        CPU = 500;
                        Motherboard = 500;
                        PSU = 500;
                        GPU = 500;
                        ram = 500;
                        storage = 500;
                        MONEY += 100000;
                        COMPVALUE = 9999;

                        system("cls");

                    }
                    else  if (choice == 100)
                    {
                        MONEY += 99999;
                        system("cls");
                    }
                    if (choice == 55)
                    {
                        CPU = 0;
                        Motherboard = 0;
                        PSU = 0;
                        GPU = 0;
                        ram = 0;
                        storage = 0;
                        MONEY = 200;
                        diamonds = 0;
                    }
                    if (lost ==false)
                    {
                        if (CPU <= 0)
                        {
                            if (diamonds == 0)
                            {
                                if (MONEY < 400)
                                {
                                    system("cls");
                                    cout << "You have lost. You are out of parts." << endl << "GAME OVER" << endl;
                                    system("pause");
                                    choice = 0;

                                }
                            }
                        }
                        else if (Motherboard <= 0)
                        {
                            if (diamonds == 0)
                            {
                                if (MONEY < 400)
                                {
                                    system("cls");
                                    cout << "You have lost. You are out of parts." << endl << "GAME OVER" << endl;
                                    system("pause");
                                    choice = 0;

                                }
                            }
                        }
                        else if (PSU <= 0)
                        {
                            if (diamonds == 0)
                            {
                                if (MONEY < 400)
                                {
                                    system("cls");
                                    cout << "You have lost. You are out of parts." << endl << "GAME OVER" << endl;
                                    system("pause");
                                    choice = 0;

                                }
                            }
                        }
                        else if (GPU <= 0)
                        {
                            if (diamonds == 0)
                            {
                                if (MONEY < 400)
                                {
                                    system("cls");
                                    cout << "You have lost. You are out of parts." << endl << "GAME OVER" << endl;
                                    system("pause");
                                    choice = 0;

                                }
                            }
                        }
                        else if (ram <= 0)
                        {
                            if (diamonds == 0)
                            {
                                if (MONEY < 400)
                                {
                                    system("cls");
                                    cout << "You have lost. You are out of parts." << endl << "GAME OVER" << endl;
                                    system("pause");
                                    choice = 0;

                                }
                            }
                        }
                        else if (storage <= 0)
                            {
                                if (diamonds == 0)
                             
                                {
                                    if (MONEY < 400)
                                    {
                                        system("cls");
                                        cout << "You have lost. You are out of parts." << endl << "GAME OVER" << endl;
                                        system("pause");
                                        choice = 0;
                                    }
                                }
                            }
                    }
                   
                       

                    

                    if (sandbox == false)
                    {
                        system("cls");
                        cout << "running status check...." << endl;
                        if(CPU >= 500 && Motherboard >= 500 && PSU >= 500 && GPU >= 500 && ram >= 500 && storage >= 500)
                        {
                            int startChoice;
                            cout << "Congratulations! You have won!" << endl;
                            choice = 0;
                            cout << "Would you like to continue in sandbox mode?" << endl;
                            cout << "1. Yes \t 2. No" << endl;
                            cin >> startChoice;
                            if (startChoice == 1)
                            {
                                sandbox = true;
                                choice = 10;
                                system("cls");
                            }
                            if (startChoice == 2)
                            {
                                choice = 0;
                            }
                        }
                        system("cls");
                    }
                    if (gwtest == 0)
                    {
                        gw = false;
                    }
                    gwtest--;
                    days++;
                    
                    if (days == 5)
                    {
                        days = 0;
                        system("cls");
                        cout << "Congratualtions here is your 5 day reward!" << endl;
                        diamonds += 10;
                        MONEY += 100;
                        cout << "Your new balance is \n";
                        cout << "Diamonds: " << diamonds << endl;
                        cout << "Money: " << MONEY << endl;
                        system("pause");
                        system("cls");
                    }
                    days++;
                }while (choice != 0);
            
        

        
    }
    return 0;
}
 
int main(){
    int choice;
    cout << "***********************************************************************\n\n\n";
    cout << "                      Welcome to login page                             \n\n";
    cout << "*******************        MENU        *******************************\n\n";
    cout << "1.LOGIN" << endl;
    cout << "2.REGISTER" << endl;
    cout << "3.Exit" << endl;
    cout << "\nEnter your choice :";
    do {

        if (!cin.good())
        {
            cin.clear();
            string garbage;
            cin >> garbage;
        }
        cin >> choice;
    } while (!cin.good() || choice < 0);
    cout << endl;
    switch (choice)
    {
    case 1:
        login();
        break;
    case 2:
        registr();
        break;
    case 3:
        return 0;
    default:
        system("cls");
        cout << "You've made a mistake , give it a try again\n" << endl;
        main();
    }
    system("cls");
}

void login()//login process
{
    int count = 0;
    string user, u, p, space = " ";
    system("cls");
    cout << "please enter the following details" << endl;
    cout << "USERNAME :";
    cin >> user;//entering unsername and password
    cout << "PASSWORD :";
    cin >> pass;

    ifstream input(user + ".txt");
    while (input >> u >> p)//getting the username and password from data file and matching 
    {
        if (u == user && p == pass)

        {
            count = 1;
            system("cls");
        }
    }
    input.close();
    if (count == 1)
    {
        cout << "Hello " << user << "\nLOGIN SUCESS\nWe're glad that you're here.\nThanks for logging in\n";
        cin.get();
        cin.get();
        reguser = user;
        system("cls");
        gameloop = true;
        gamerun();
    }
    else
    {
        cout << "\nLOGIN ERROR\nPlease check your username and password\n";
        system("pause");
        main();
    }
   }

void registr()
{
    
    string regpass, ru, rp;
    system("cls");
    cout << "Enter the username :";
    cin >> reguser;
    cout << "\nEnter the password :";
    cin >> regpass;

    ofstream reg(reguser + ".txt", ios::out);
    reg << reguser << " " << regpass << endl;
    system("cls");
    cout << "\nRegistration Sucessful\n";
    main();


}

