#include <iostream>
#include "src/lib/solution.h"

#include <string>
int main()
{
    Solution solution ;

    string s0 = "([a + b])";
    cout << solution.ValidBracket(s0) << endl;

    
    return EXIT_SUCCESS;
}