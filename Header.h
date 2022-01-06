#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>
#include <windows.h>
#include <stdlib.h>

using namespace std;

char checkIfChar()
{
    string inputCharS;
    char inputChar;

    try {
        cin >> inputCharS;
        inputChar = inputCharS[0];
    }
    catch (exception e)
    {
        cout << "Error, Try Again" << endl;
        cin.clear();
        cin.ignore(256, '\n');
        checkIfChar();
    }

    return inputChar;
}

int checkIfInteger()
{
    string inputIntegerS;
    int inputInteger;

    do
    {
        try {
            cin >> inputIntegerS;
            inputInteger = stoi(inputIntegerS);
        }
        catch (exception e)
        {
            cout << "Error, Try Again" << endl;
            cin.clear();
            cin.ignore(256, '\n');
            checkIfInteger();
        }
    } while (inputInteger = 0);
    
    return inputInteger;
}

int score = 0;

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

string checkInputOne(string inputOne)
{
    transform(inputOne.begin(), inputOne.end(), inputOne.begin(), tolower);
    if (inputOne == "canada")
    {
        score += 1;
        PlaySound(TEXT("Correct_Answer_06.wav"), NULL, SND_SYNC);
        return "* Correct *\n\n";
    }
    else
    {
        SetConsoleTextAttribute(hConsole, 12);
        PlaySound(TEXT("Game_Show_Wrong_Answer.wav"), NULL, SND_SYNC);
        return "< Incorrect > The Answer Is Canada\n\n";
    }
}

string checkInputTwo(char inputTwo)
{
    inputTwo = toupper(inputTwo);
    if (inputTwo == 'A')
    {
        score += 2;
        PlaySound(TEXT("Correct_Answer_06.wav"), NULL, SND_SYNC);
        return "* Correct *\n\n";
    }
    else if (inputTwo == 'B')
    {
        SetConsoleTextAttribute(hConsole, 12);
        PlaySound(TEXT("Game_Show_Wrong_Answer.wav"), NULL, SND_SYNC);
        return "< Incorrect > The South Atlantic Ocean Is Located Between South America And Africa\n\n";
    }
    else if (inputTwo == 'C')
    {
        SetConsoleTextAttribute(hConsole, 12);
        PlaySound(TEXT("Game_Show_Wrong_Answer.wav"), NULL, SND_SYNC);
        return "< Incorrect > The North Pacific Ocean Is Located Between North America And Asia\n\n";
    }
    else if (inputTwo == 'D')
    {
        SetConsoleTextAttribute(hConsole, 12);
        PlaySound(TEXT("Game_Show_Wrong_Answer.wav"), NULL, SND_SYNC);
        return "< Incorrect > The South Pacific Ocean Is Located Between South America And Oceania\n\n";
    }
    else
    {
        SetConsoleTextAttribute(hConsole, 12);
        PlaySound(TEXT("Game_Show_Wrong_Answer.wav"), NULL, SND_SYNC);
        return "< Incorrect > This Was Not An Option\n\n";
    }
}

string checkInputThree(string inputThree, int randomNumber)
{
    string answerThree = "";
    for (randomNumber; randomNumber > 0; randomNumber = randomNumber / 2)
    {
        answerThree = to_string(randomNumber % 2) + answerThree;
    }
    if (answerThree == inputThree)
    {
        score += 3;
        PlaySound(TEXT("Correct_Answer_06.wav"), NULL, SND_SYNC);
        return "* Correct *\n\n";
    }
    else
    {
        SetConsoleTextAttribute(hConsole, 12);
        PlaySound(TEXT("Game_Show_Wrong_Answer.wav"), NULL, SND_SYNC);
        return "< Incorrect > The Answer Is " + answerThree + "\n\n";
    }
}

string checkInputFour(string inputFour)
{
    transform(inputFour.begin(), inputFour.end(), inputFour.begin(), tolower);
    if (inputFour == "true")
    {
        score += 4;
        PlaySound(TEXT("Correct_Answer_06.wav"), NULL, SND_SYNC);
        return "* Correct *\n\n";
    }
    else
    {
        SetConsoleTextAttribute(hConsole, 12);
        PlaySound(TEXT("Game_Show_Wrong_Answer.wav"), NULL, SND_SYNC);
        return "< Incorrect > The Answer Is True\n\n";
    }
}

string checkInputFive(int inputFive)
{
    if (inputFive = 3)
    {
        score += 5;
        PlaySound(TEXT("Correct_Answer_06.wav"), NULL, SND_SYNC);
        return "* Correct *\n\n";
    }
    else
    {
        SetConsoleTextAttribute(hConsole, 12);
        PlaySound(TEXT("Game_Show_Wrong_Answer.wav"), NULL, SND_SYNC);
        return "< Incorrect > The Answer Is Maple\n\n";
    }
}

string checkInputSix(char inputSix)
{
    inputSix = toupper(inputSix);
    if (inputSix == 'B')
    {
        score += 6;
        PlaySound(TEXT("Correct_Answer_06.wav"), NULL, SND_SYNC);
        return "* Correct *\n\n";
    }
    else
    {
        SetConsoleTextAttribute(hConsole, 12);
        PlaySound(TEXT("Game_Show_Wrong_Answer.wav"), NULL, SND_SYNC);
        return "< Incorrect > The Answer Is Black\n\n";
    }
}

string checkInputSeven(char inputTwo)
{
    inputTwo = toupper(inputTwo);
    if (inputTwo == 'D')
    {
        score += 7;
        PlaySound(TEXT("Correct_Answer_06.wav"), NULL, SND_SYNC);
        return "* Correct *\n\n";
    }
    else
    {
        SetConsoleTextAttribute(hConsole, 12);
        PlaySound(TEXT("Game_Show_Wrong_Answer.wav"), NULL, SND_SYNC);
        return "< Incorrect > The Answer Is Father Christmas\n\n";
    }
}

string checkInputEight(char inputTwo)
{
    inputTwo = toupper(inputTwo);
    if (inputTwo == 'C')
    {
        score += 8;
        PlaySound(TEXT("Correct_Answer_06.wav"), NULL, SND_SYNC);
        return "* Correct *\n\n";
    }
    else
    {
        SetConsoleTextAttribute(hConsole, 12);
        PlaySound(TEXT("Game_Show_Wrong_Answer.wav"), NULL, SND_SYNC);
        return "< Incorrect > The Answer Is C, The Rhyme\n\n";
    }
}

string checkInputNine(char inputTwo)
{
    inputTwo = toupper(inputTwo);
    if (inputTwo == 'A')
    {
        score += 9;
        PlaySound(TEXT("Correct_Answer_06.wav"), NULL, SND_SYNC);
        return "* Correct *\n\n";
    }
    else
    {
        SetConsoleTextAttribute(hConsole, 12);
        PlaySound(TEXT("Game_Show_Wrong_Answer.wav"), NULL, SND_SYNC);
        return "< Incorrect > The Answer Is Green\n\n";
    }
}

string checkInputTen(char inputTwo)
{
    inputTwo = toupper(inputTwo);
    if (inputTwo == 'B')
    {
        score += 10;
        PlaySound(TEXT("Correct_Answer_06.wav"), NULL, SND_SYNC);
        return "* Correct *\n\n";
    }
    else
    {
        SetConsoleTextAttribute(hConsole, 12);
        PlaySound(TEXT("Game_Show_Wrong_Answer.wav"), NULL, SND_SYNC);
        return "< Incorrect > The Answer Is 7\n\n";
    }
}

string letterGrade(int score)
{
    float percentage = ((ceil((score / 55) * 10000)) / 100);
    if (100 <= percentage)
    {
        return "S\n\n";
    }
    else if (90 <= percentage)
    {
        return "A+\n\n";
    }
    else if (80 <= percentage)
    {
        return "A\n\n";
    }
    else if (75 <= percentage)
    {
        return "B+\n\n";
    }
    else if (70 <= percentage)
    {
        return "B\n\n";
    }
    else if (65 <= percentage)
    {
        return "C+\n\n";
    }
    else if (60 <= percentage)
    {
        return "C\n\n";
    }
    else if (55 <= percentage)
    {
        return "D+\n\n";
    }
    else if (50 <= percentage)
    {
        return "D\n\n";
    }
    else if (percentage < 50)
    {
        return "F\n\n";
    }
}
