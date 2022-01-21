#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
  
  // Your future is here
  cout << "                               MAGIC 8-BALL:\n"; 
  srand(time(NULL));
  int answer = rand() % 10;
  cout << answer;

  if(answer == 0) {
    cout << " It is certain.\n";
  }
  else if(answer == 1) {
    cout << " It is decidedly so.\n";
  }
  else if(answer == 2){
    cout << " Without a doubt.\n";
  }
   else if(answer == 3){
     cout << " Yes - definitely.\n";
  }
   else if(answer == 4){
    cout << " You may rely on it./n";
  }
   else if(answer == 5){
    cout << " As I see it, yes./n";
  }
   else if(answer == 6){
    cout << " Most likely.\n";
  }
  else if(answer == 7){
    cout << " Ask later again.\n";
  }
  else if(answer == 8){
    cout << " Concentrate and ask again.\n";
  }
  else{
    cout << "  Very doubtful.\n";
  }
}