#include <iostream>
#include <stdio.h>
//#include <debugger.h>
//#include <functions.h>


using namespace std;

//**********   MAIN FUNCTION   **********

int main (int argc, char *argv[] ) {

    switch (argc) { // For getting input from console
        case 6:
            long input_5;
            input_5 = atol(argv[5]); //Fifth Input
            //num_threads = input_5;
        case 5:
            long input_4;
            input_4 = atol(argv[4]); //Fourth Input
            //in_parallel = input_4;
        case 4:
            long input_3;
            input_3 = atol(argv[3]); // Third Input
            //display_bit = input_3;
        case 3:
            long input_2;
            input_2 = atol(argv[2]); // Second Input -- B
        case 2:
            long input_1;
            input_1 = atol(argv[1]); // First input -- M
            break;
        case 1:
            // Keep this empty
            break;
        default:
            cout << "FATAL ERROR: Wrong Number of Inputs" << endl; // If incorrect number of inputs are used.
            return 1;
    }








return 0;
}

