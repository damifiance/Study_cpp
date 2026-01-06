/*
    typedef =   reversed keyword to create an additional name (alias) for another data type.
                New identifier for an existing type
                Helps with readability and reduces typos
                Use when there is a clear benefit
                Replaced with 'using' (work better with templates)
    
*/


#include <iostream>
#include <vector> // --> for this theme

typedef std::vector<std::pair<std::string, int>> pairlist_t;
//typedef std::string text_t;
//typedef int number_t;

using text_t = std::string;
using number_t = int;

int main(){

    std::vector<std::pair<std::string, int>> pairlist;
    pairlist_t pairlist2;
    
    std::string firstname = "Benjamin";
    text_t lastname = "Park";

    int age = 20;
    number_t score = 90;

    return 0;
}