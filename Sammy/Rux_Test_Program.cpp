// Print Yes if the string contains:    - only consonants
//                                      - consonants and the letter 'i'
//                                      - only the letter 'i'
// Print No if the string contains:     - the letters: 'a', 'e', 'o', 'u'
//                                      - only vowels (excluding only the letter 'i')

#include <iostream>

int main(){

    std::string str;
    int vowelCounter = 0;
    int aeouCounter = 0;
    
    std::cout << "Enter a string: ";
    std::cin >> str;

    for(int i = 0; i <= str.size(); i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'o' || str[i] == 'u'){
            vowelCounter++;
            aeouCounter++;
        }
        else if(str[i] == 'i'){
            vowelCounter++;
        }
    }

    if(vowelCounter == str.size() && aeouCounter > 0){
        std::cout << "No";
    }
    else if(aeouCounter > 0){
        std::cout << "No";
    }
    else{
        std::cout << "Yes";
    }

return 0;
}