#include<iostream> // use for input and output file
using namespace std; // use this line always std wala cout and cin use karo
int main(){
    int char_to_int='a';
    cout<<char_to_int<<endl;

    char int_to_char=98;
    cout<<int_to_char<<endl;

    
    char d=123456999;  // Since the range of value exceeds the char max value of wrong acc to 1 byte char will be displayed (wrong value)
    cout<<d<<endl;

   
}
