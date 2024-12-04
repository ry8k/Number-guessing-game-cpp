#include <iostream>
#include <ctime>

int main(){
    int num;
    int guess;
    int tries = 0;
    srand(time(NULL));
    num = (rand() % 100) + 1;


    std::cout << "******************** Number Guessing Game ********************" << std::endl;

    do{
        std::cout << "Enter a guess between (1-100): ";
        std::cin >> guess;
        tries++;

     if(guess > num){
        std::cout << "Guess is greater than the number." << std::endl;
      }
      else if(guess < num){
        std::cout << "Number is greater than the guess." << std::endl;
      }
     else{
        std::cout << "You win! the number was " << num << "\n It took you " << tries << " tries to get it right.";
      }
    }while(guess != num);
    return 0;
}
