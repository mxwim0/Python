#include <iostream>
#include <csignal>

using namespace std;

void signalHandler( int signum ) {
   cout << "시그널 오류발생 (" << signum << ") received.\n";


   exit(signum);  
}

int main () {
   int i = 0;
   // register signal SIGINT and signal handler  
   signal(SIGINT, signalHandler);  

   while(++i) {
      cout << "잠자러 간다~...." << endl;
      if( i == 3 ) {
         raise( SIGINT);
      }
      sleep(1);
   }

   return 0;
}
