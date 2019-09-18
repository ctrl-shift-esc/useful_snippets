#include <signal.h>

void myInterruptHandler(int signum);

void myInterruptHandler(int signum)
{
  //things to do when signal caught, preferably something that breaks out of the loop
}

void main()
{
  //place to catch signal, like an infinite loop
  
  //register new handler
  ___sighandler_t oldHandler = signal(SIGINT, myInterruptHandler);
  
  while(//condition that breaks out of loop)
  {
    //stuff...
  }
  
  //return default handler after use
  signal(SIGINT, SIG_DFL);
  
}
