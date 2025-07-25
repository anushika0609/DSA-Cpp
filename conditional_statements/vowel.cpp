#include<iostream>
using namespace std;
int main(){
    char character;
    cout<<"Enter character : ";
    cin>>character;

    switch(character){
        case 'a':
        cout<<"Given character is a vowel."<<endl;
        break;

        case 'e':
        cout<<"Given character is a vowel."<<endl;
        break;

        case 'i':
        cout<<"Given character is a vowel."<<endl;
        break;

        case 'o':
        cout<<"Given character is a vowel."<<endl;
        break;

        case 'u' :
        cout<<"Given character is a vowel."<<endl;
        break;

        default:
        cout<<"Given character is a consonant.";
        break;
    }
    return 0;
}