// Is the string uppercase?
// Task

// Create a method to see whether the string is ALL CAPS.
// Examples (input -> output)

// "c" -> False
// "C" -> True
// "hello I AM DONALD" -> False
// "HELLO I AM DONALD" -> True
// "ACSKLDFJSgSKLDFJSKLDFJ" -> False
// "ACSKLDFJSGSKLDFJSKLDFJ" -> True

// In this Kata, a string is said to be in ALL CAPS whenever it does not contain any lowercase letter so any string containing no letters at all is trivially considered to be in ALL CAPS.
#include<iostream>
#include<array>

bool is_uppercase(const std::string s)
{
    for (char element : s)
    {
        if ( (element >= 'a') && (element<='z') )
        {
            return false;
        }
        
    }
    return true;
}


int main()
{
    std::array<std::string,6> tests = 
    {
        "c",
        "C",
        "hello I AM DONALD",
        "HELLO I AM DONALD",
        "ACSKLDFJSgSKLDFJSKLDFJ",
        "ACSKLDFJSGSKLDFJSKLDFJ",
    };

    for (int i = 0; i < tests.size(); i++)
    {
        std::cout<<i+1<<". "<<is_uppercase( tests[i] )<< "\n";
    }
    
    return 0;
}