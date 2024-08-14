#include <iostream>
using namespace std;

// Declaring a template class named Exam.
template <class T>
class Exam
{
    private:
        // A variable (answer) of type T so that it can store results of various types.
        T answer;

    public:
        // Constructor of Exam class.
        Exam(T n) : answer(n)
        {
            cout << "Inside constructor" << endl;
        }

        T getAnswer()
        {
            return answer;
        }
};

// Main function
int main()
{
   // Creating an object with an integer type.
   Exam<int> answerInt(60);

   // Creating an object with double type.
   Exam<double> answerDouble(17.27);

   // Creating an object with char type.
   Exam<char> answerChar('a');

   // Creating an object with string type.
   Exam<string> answerString("The correct answer is a");

   // Calling the class method getNumber with different data types:
   cout << "Integer Anwser is: " << answerInt.getAnswer() << endl;
   cout << "Double Answer = " << answerDouble.getAnswer() << endl;
   cout << "Char Answer = " << answerChar.getAnswer() << endl;
   cout << "String Answer = " << answerString.getAnswer() << endl;
   return 0;
}
