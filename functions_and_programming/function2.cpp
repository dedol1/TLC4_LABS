#include <iostream>


void output(float);
void output(std::string);
void output();


int main(){
    
    output(3.14);
    output("hi there \n");
    // output(myname);
    int myname = 5;
    output(myname);

}

void output(float num) {
     
     std::cout << num << std::endl;
}

void output(std::string sent) {
     
     std::cout << sent;
}

void output(int myname) {
     std::cout << myname;
}

