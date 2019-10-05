#include <iostream>
#include <string>
#inlcude "vowels.h"

using namespace std;

int main()
{
    Vowels vowels; 
    cout << "Enter a string : " ; 
    cin >> vowels.chString;
    vowels.show(vowels.chString);
    return 0;
}
void Vowels::show(string chart)
{
    for(int i = 0 ; i < chString.length(); i++)
    {
        char chr = toupper(chString[i]);
       
        if( chr >= 'A' && chr <= 'Z')
        {
            if( chr == 'A' || chr == 'E' || chr == 'I' || chr == 'O' || chr == 'U')
            {
                vowelsString++;
            }
            else 
            {
                consonat++;
            }
        }
    }
    cout << "The number of vowels is " << vowelsString << endl;
    cout << "The number of consonat is " << consonat << endl;
}