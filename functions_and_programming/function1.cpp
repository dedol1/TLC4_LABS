#include <iostream>


int getnum();

int main()
{
    // note that once the fuction is created once, you can assign it to multiple variable to reuse
    int a = getnum();
    int b = getnum();
    
    int answer = a + b;
    
    std::cout << "this is the addittion: " << answer;
    
    return 0;
 
}


int getnum(){
    
    int number;
    
    std::cout << "enter the number";
    std::cin >> number;
    
    return number;
}


