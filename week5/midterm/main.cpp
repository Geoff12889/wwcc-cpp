#include <iostream>
#include <string>
using namespace std;

struct Question
{
    string question_text;
    string options[4];
    char correct_answer;
    int points;
};

void show_menu(void);
void run_quiz(Question[], int);
void display_score(int, int);

int main(void)
{
    const int QUIZLENGTH = 3;
    Question quiz[QUIZLENGTH] = {
        {"What is the capital of France?", {"A) Paris", "B) London", "C) Rome", "D) Berlin"}, 'A', 10},
        {"Which planet is known as the Red Planet?", {"A) Earth", "B) Venus", "C) Mars", "D) Jupiter"}, 'C', 10},
        {"What is 5 + 7?", {"A) 10", "B) 11", "C) 12", "D) 13"}, 'C', 10}
    };

    int choice;

    do
    {
        show_menu();
        cin >> choice;
        switch(choice)
	{
            case 1:
                run_quiz(quiz, QUIZLENGTH);
                break;
            case 2:
                cout << "Exiting the game.\n" << endl;
                break;
            default:
                cout << "Invalid selection. Try again.\n";
        }
    }
    while (choice != 2);

    return 0;
}

void show_menu()
{
    cout << "\nQuiz Game Menu\n";
    cout << "1. Start Quiz\n";
    cout << "2. Exit\n\n";
    cout << "Enter your choice: ";
}

void run_quiz(Question questions[], int quizSize)
{
    int score = 0;
    char user_answer;

    for (int i = 0; i < quizSize; i++)
    {
	// outputs the question
        cout << "\nQuestion " << (i + 1) << ": " << questions[i].question_text << endl;
	int numberOfOptions = 4;
        for (int j = 0; j < numberOfOptions; j++)
	{
	    // outputs the four options
            cout << questions[i].options[j] << endl;
        }
	// users answer
        cout << endl << "Your answer: ";
        cin >> user_answer;
        user_answer = toupper(user_answer);

        if (user_answer == questions[i].correct_answer)
	{
            cout << "Correct!\n";
            score += questions[i].points;
        }
	else
	{
            cout << "Incorrect. The correct answer was " << questions[i].correct_answer << ".\n";
        }
    }

    display_score(score, quizSize * 10);
}

void display_score(int score, int max_score) {
    cout << endl << "You scored: " << score << " out of " << max_score << endl;
    double percentage = (static_cast<double>(score) / max_score) * 100;
    cout << percentage << "%\n";

    if (percentage >= 70.0)
    {
        cout << "Great job!\n";
    }
    else
    {
        cout << "Study and try again.\n";
    }
}
