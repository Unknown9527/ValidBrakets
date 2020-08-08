#include "solution.h"
// #include <string>
#include <stack>
using namespace std;



bool Solution::ValidBracket(string s0)
{
    stack<char> s;
    for (int i = 0; i < s0.size(); i++)
    {
        switch (s0[i])
        {
            case '(':
                s.push(s0[i]); 
            break;
		    
            case '[':
                s.push(s0[i]); 
            break;
		    
            case '{':
                s.push(s0[i]); 
            break;		
            
            case ')':
			    if (s.top() != '(')
                {
			    	return false;
                }else{
			    	s.pop(); 
                }
            break;
		    
            case ']':
			    if (s.top() != '[')
                {
				    return false;
                }else{
				    s.pop(); 
                }
            break;
		    
            case '}':
			    if (s.top() != '{')
                {
				    return false;
                }else{
				
                    }    s.pop(); 
            break;
            
            default: 
                break;
        }        
    }
    return s.empty();
}




