#include <iostream>                                                                                 //Created by Zachary Kofoed Q934C652
#include <direct.h>
#include <string>



//use these
//system("dir");   //list files in current directory
//system("cd");   //cd (change directory)
//system("mkdir");   //mkdir(create a new directory)
//system("echo");   //echo(display a message)
//system("type");   //type (concatenate and display content of files, Windows equivalent of cat)
void option1() {
    std::cout << "TO DO: list files in current directory\n";
    system("dir");
}

void option2() {
    std::cout << "TO DO: cd (change directory)\n";
    system("cd");
}


void option3() 
{
    if (_mkdir("C:\\Test") != 0)
    {
        std::cerr << "Failed to create directory!" << std::endl;
        // Handle the failure (e.g., by throwing an exception or returning an error code)
    }
    else
    {
        std::cout << "Successfully created a directory. \n";
    }
}


void option4() {
    system("echo");
    std::string message;
    std::cin.ignore(); // Ignore the newline character left in the input buffer
    std::cout << "Enter the message to display: ";
    std::getline(std::cin, message);
    std::string command = "echo " + message;
    system(command.c_str());
}

void option5() 
{
    std::cout << "Enter the name of the file to display its contents: ";
    std::string fileName;
    std::cin >> fileName;
    std::cout << "\n";
    std::string command = "type " + fileName;
    system(command.c_str());
}

int main() {
    int choice = 0;

    do {
        // Display menu
        std::cout << "Menu:\n \n";
        std::cout << "1. dir\n \n";
        std::cout << "2. cd\n \n";
        std::cout << "3. mkdir\n \n";
        std::cout << "4. echo\n \n";
        std::cout << "5. type\n \n";
        std::cout << "0. Exit\n \n";

        // Get user choice
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        std::cout << "\n";


        // Perform action based on user choice
        switch (choice) {
        case 1:
            option1();
            break;
        case 2:
            option2();
            break;
        case 3:
            option3();
            break;
        case 4:
            option4();
            break;
        case 5:
            option5();
            break;
        case 0:
            std::cout << "Exiting program. Goodbye!\n";
            break;
        default:
            std::cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 0);



    return 0;
}