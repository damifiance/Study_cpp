#include <iostream>

void happyBirthday(); 
void hbd(std::string BirthdayBOI, int age);
//declare the function first <<- if this isn't here the code will say that the function happyBirthday wasn't defined
std::string name="Benjamin";


int main() {
    
    //function = a block of reusable code

    int age = 19;
    

    happyBirthday();
    hbd(name, age);

    


    return 0;
}


void happyBirthday() { //the name variable was not defined in this function(it was defined in the main function) therefore it can't be called
                        // a solution would be to define it outside of all the functions and make it a global variable
                        // or define the variable inside the happyBirthday function!
    std::cout <<"Happy Birthday to " <<name <<"\n";
    std::cout <<"Happy Birthday to " << name << "\n";
    std::cout <<"Happy Birthday dear "<< name <<"\n";
    std::cout <<"Happy Birthday to "<< name << "\n";
    std::cout << "\n";
}

void hbd(std::string BirthdayBOI, int age) { //or you could make the function recieve an arguement
    std::cout <<"Happy Birthday to " << BirthdayBOI <<"\n";
    std::cout <<"Happy Birthday to " << BirthdayBOI << "\n";
    std::cout <<"Happy Birthday dear "<< BirthdayBOI <<"\n";
    std::cout <<"Happy Birthday to "<< BirthdayBOI << "\n";
    std::cout << "You are " << age << " years old!\n";
    std::cout << "\n";
}