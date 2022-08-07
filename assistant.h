
/*
----------------------------------------------------------------------------
               Project title   : Jarvis(personal assistant)
               Made By         : Vinay Hajare
               Written in      : C++
               Started project : 1 April April , 2021
               Platform        : Windows
               IDE used        : Code blocks
               Last Modified   : 1 April , 2021
               Total Code      : 700+ Lines
 ----------------------------------------------------------------------------
*/



#ifndef ASSISTANT_H
#define ASSISTANT_H
using namespace std;

class assistant
{

   public:
              assistant();
              ~assistant();
         void greeting();
         void typing(string);
         void clock();
         void speak(string);

};

#endif // ASSISTANT_H
