// A program of two integers to determine if the first integer is a mutiple of the second integeer

#include <iostream> // allows the program to perform an input or output

using std::cout; // program uses cout
using std::cin;  // program uses cin

int main()
{
    //declering virables
    int number1; // first integer 
    int number2; // second integer
    cout << "Input First Integer:";       // prompt user for first integer
    cin >> number1;                       // input first integer 
    
    cout << "Input Second Integer:";      // prompt user for second integer 
    cin >> number2;                       // input second integer 
    
    if ( number2 % 2 == 2 );              //
    {
         cout << number1 << "Is a multiple of number 2"; // showing that the first integer is a multiple of the second 
         }
                      
              system ("PAUSE");            // To be able to veiw program result in the output screen
              
              return 0; 
              }
