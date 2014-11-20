/** 
 * Main file
 * 
 * Author:   Jamison Bryant <robojamison@gmail.com>
 * Filename: main.cpp
 * Version:  1.0
 */

#include <cstdlib>
#include <stdio.h>
#include <string>

using namespace std;

int main(int argc, char** argv) 
{
    bool debug_mode = false;
    
    // Check if arguments given
    if(argc > 0) {
        // Parse and validate given arguments
        bool args_valid = false;
        
        for(int i = 0; i < argc; i++) {
            string this_arg = string(argv[i]);
            
            // Check if debug mode requested
            if(this_arg == "-d") {
                string next_arg = toupper(string(argv[i + 1]));
                
                if(next_arg == "Y") {
                    debug_mode = true;
                } else if(next_arg == "N") {
                    debug_mode = false;
                }
            } 
            
            // Check if input string given
            if(this_arg == "-i") {
                string next_arg = string(argv[i + 1]);
                string input_str = next_arg;
                args_valid = true;
            }
        }
        
        if(!args_valid) {
            printf("ERROR: One or more arguments were invalid or missing.");
            
            return 0;
        }
    } else {
        // No arguments given: enter interactive mode
    }
    
    return 0;
}

