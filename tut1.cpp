#include <iostream>

void cmd()
{
    int a = 1, b = 50;
    for (int a = 1; a < 5; a++)
    {
        std::cerr << "Loading...\n";
    }
        std::cerr << "\nhacking success!";

}

void whoami()
{
    std::cerr<<"Windows10 \nProgrammer \n1KB Of RAM (poor)";
}
int main()
{
    std::string command;
    std::string whoam;
    std::cerr << "Enter Command:";
    std::cin >> command;

    if (command == "hack12")
    {
        cmd();
    }
    if (command=="userconfig")
    {
        whoami();
    }
    
    else
    {
        std::cerr<<"WRONG COMMAND INTRUDER";
    }

        std::cerr<<"\nEnter Command:";
std::cin>>whoam;

if (whoam=="userconfig")
{
    whoami();
}
 if (whoam=="hack12")
 {
    cmd();
 }
 

    return 0;
}