#include <iostream>

int main() {
     // integer n store the input
    int n;
    //promte user inter the number
    std::cout << "enter a number: ";
   
    // read n
    std::cin >> n;
    

    // check the number is -1
    if (n == -1) {
    
    //print the message
        std::cout << "negative one" << std::endl;
        
    } else if (n == 0) {
        std::cout << "zero" << std::endl;
    } else if (n == 1) {
        std::cout << "positive one" << std::endl;
        
    // if the number is none of above
    } else {
        std::cout << "other value" << std::endl;
    }

// return 0 to indicate successful execution
    return 0;
    
}
