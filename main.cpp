#include <iostream>
#include "longueur.h"
#include "copy.h"
#include "concat.h"
#include "compare.h"
#include "*cherche_char.h"
#include "inverse.h"
#include "to_upper.h"
#include "to_lower.h"
#include "*cherche_mot.h"

int main(int argc,char** argv){
    int choice;
    std::cout << "Welcome to this program." << std::endl;
    std::cout << "Choose the exercice you want to carry out" << std::endl;
    std::cout << "1. Finding the length of a string of characters. \n 2. Copying the contents of a string of characters into another. \n 3. Concatenating a string of characters. \n 4. Comparison of string of characters. \n 5. Searching for a character. \n 6. Inverting the letters of a word. \n 7. Converting a capital letter to a small letter and vice versa. \n 8. Searching for a word in a phrase. \n 9. Extraction of a sub-string of characters. \n 10. Suppression of characters. \n 11. Counting the words in a phrase. " << std::endl;
    std::cin >> choice;
    switch(choice){
        case 1:{
            const int MAX = 100;
            char chaine[MAX];
            std::cout << "enter the word: " << std::endl;
            std::cin>>chaine;
            int length = longueur(chaine);
            std::cout << "the length is:  " << length << std::endl;
        }
        case 2:{
            char source[];
            char dest[100];
            std::cout << "Enter a word or a short phrase" << std::endl;
            std::cin >> source[];
            copy(dest, source);
            std::cout<< "Source: " <<  source << std::endl;
            std::cout<< "Destination" << dest << std::endl;
            
        }
        case 3:{
            char dest[100] = "Hello";  
            const char *source = "world!";
    
            concat(dest, source); 

            std::cout << "Concatenated string : " << dest <<std::endl;
            
        }
        case 4:{
            const char *chaine1 = "Hello";
            const char *chaine2 = "Hello!";
    
            int resultat = compare(chaine1, chaine2);

            if (resultat == 0) {
                printf("The strings are identical.\n");
            } else if (resultat < 0) {
                printf("The first string is lexicographically inferior.\n");
            } else {
                printf("the first string is lexicographically superior.\n");
            }

        }
        case 5:{
            const char* text = "Hey guys!!";
            char caractere = 'u';
            std::cout<< "We will use  the phrase 'hey guys!!' to look for the letter 'u' " << std::endl;
             
            char* result = cherche_char(text, caractere);

            if(result != NULL){
                std::cout << "Character " << caractere << " found at position: " << (result - text) << std::endl;

            }else{
                std::cout << "Character " << caractere << " not found." << std::endl;
            }
        }
        case 6:{
            char text[] = "Hello, world!";

            std::cout << "Original string: " << text << std::endl;

            inverse(text);

            std::cout << "Reversed string: " << text << std::endl;
            
        }
        case 7:{
            
            char chaine[];
            std::cout << "Write the word you want to convert and the program will change it to capital and small letters"<<std::endl;
            std::cin>> chaine;

            std::cout << "Original string: " << chaine << std::endl;

            to_upper(chaine);
            std::cout << "String in Upper case letters : " << chaine << std::endl;

            to_lower(chaine);
            std::cout << "String in Lower case letters : " << chaine << std::endl;


        }
        case 8:{
            const char *phrase = "Hello, world !";
            const char *mot = "world";
            std::cout<< "Here we are going to test the program with the phrase Hello, world!, and we are going to search for the word  "<< std::endl;

            char *resultat = cherche_mot(phrase, mot);

            if (resultat != NULL) {
            std::cout << "Word found : " << resultat << std::endl;
            } else {
                std::cout << "Word was not found" << std::endl;
            }
         }
        case 9:{
            
        }
        case 10:{
            
        }
        case 11:{
            
        }
    }

    return 0;
}