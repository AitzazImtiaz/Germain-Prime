#include <iostream>
#include "InfInt.h"
#include <windows.h>

#pragma comment(lib, "user32")

using namespace std;

bool prime_check(InfInt n)
{
    bool flag = true;
    if (n == 2) // checks if 2 is entered(as 2 is a prime number )
    {
        //    std::cout<<" The number is PRIME !!! ";
        return true; // terminates the program is two is enterd, as there is no need for further checking
    }

    else // divides the number with value from 2 to (number-1)
    {
        for (InfInt i = 2; i < n; i++)
        {
            // if it is divisible than values smaller than number-1 it is non - prime
            if (n % i == 0)
                flag = false;
        }
    }
    return flag; // returns either true or false as the result

}

void main_program() {
    InfInt loop, helper, Germain;
    loop = 2;
    helper = 2;
    while(true){
        Germain = (helper * loop) + 1;
        if (prime_check(loop) and prime_check(Germain)){
            cout << loop;
            cout << "\n";
        }
        loop = loop + 1;
    }
}
int main() {
    system("cls");
    InfInt option;
    while (true) {
        ::SendMessage(::GetConsoleWindow(), WM_SYSKEYDOWN, VK_RETURN, 0x20000000);
        cout << "   >===>    >=======> >======>     >=>       >=>       >>       >=> >==>    >=>       >======>   >======>     >=> >=>       >=> >=======>       \n";
        cout << " >>    >=>  >=>       >=>    >=>   >> >=>   >>=>      >>=>      >=> >> >=>  >=>       >=>    >=> >=>    >=>   >=> >> >=>   >>=> >=>             \n";
        cout << ">=>         >=>       >=>    >=>   >=> >=> > >=>     >> >=>     >=> >=> >=> >=>       >=>    >=> >=>    >=>   >=> >=> >=> > >=> >=>             \n";
        cout << ">=>         >=====>   >> >==>      >=>  >=>  >=>    >=>  >=>    >=> >=>  >=>>=>       >======>   >> >==>      >=> >=>  >=>  >=> >=====>         \n";
        cout << ">=>   >===> >=>       >=>  >=>     >=>   >>  >=>   >=====>>=>   >=> >=>   > >=>       >=>        >=>  >=>     >=> >=>   >>  >=> >=>             \n";
        cout << " >=>    >>  >=>       >=>    >=>   >=>       >=>  >=>      >=>  >=> >=>    >>=>       >=>        >=>    >=>   >=> >=>       >=> >=>             \n";
        cout << "  >====>    >=======> >=>      >=> >=>       >=> >=>        >=> >=> >=>     >=>       >=>        >=>      >=> >=> >=>       >=> >=======>       \n";
        cout << "\n";
        cout << "Only Dedicated to Sophie Germain \n";
        cout << "An AitzazImtiaz software\n";
        cout << "Click F11 to exit this doom \n";
        cout << "\n";
        cout << "Options:\n";
        cout << "1) Run and Find Germain numbers for Infinity\n";
        cout << "Type 1:";
        cin >> option;
        if (option == 1) {
            system("cls");
            main_program();
        }
        else {
            system("cls");
        }
    }
}