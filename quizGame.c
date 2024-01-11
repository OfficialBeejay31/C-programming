#include <stdio.h>
#include <ctype.h>

int main(){
    
    char questions[][100] = {"What is the capital of France?",
                             "Which programming language is known for its versatility and is widely used in web development?",
                             "What is the powerhouse of the cell?",
                             "In which year did Christopher Columbus first reach the Americas?",
                             "Which planet is known as the 'Red Planet'?"
                            };
                            
    char options[][100] = {"A) Berlin B) London C) Paris D) Rome", 
                           "A) Java B) Python C) JavaScript D) C++",
                           "A) Nucleus B) Ribosome C) Mitochondria D) Endoplasmic Reticulum",
                           "A) 1492  B) 1607 C) 1776 D) 1812",
                           "A) Venus B) Mars C) Jupiter D) Saturn"
                            };
                            
    char answers[5] = {'C', 'C', 'C', 'A', 'B'};
    char guess;
    int score;
    
    int numberOfQuestion = sizeof(questions) / sizeof(questions[0]);
    printf("QUIZ GAME\n");

    for(int i = 0; i < numberOfQuestion; i++){
        printf("*************************************\n");
        printf("%s\n", questions[i]);
        printf("%s\n", options[i]);
        scanf("%c", &guess);
        getchar();
        guess = toupper(guess);
        if (guess == answers[i]){
            printf("CORRECT!!\n");
            score++;
        }
        else{
            printf("WRONG!!\n");
        }
        printf("*************************************\n");
    }
    
    printf("Your Final Score: %d/%d", score, numberOfQuestion);

    return 0;
}
