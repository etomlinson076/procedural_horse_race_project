#include <iostream>
#include <cstdlib>
#include <ctime>

const int TRACK_LENGTH = 15;
const int NUM_HORSES = 5;

using namespace std;

void advance(int horseNum, int* horses) {
  int move = rand() % 2;
  if (move == 1) {
	  horses[horseNum]++;
  }
 
}


void printLane(int horseNum, int* horses) {
    for (int i = 0; i < TRACK_LENGTH; i++) {
	if (i == horses[horseNum]) {
            cout << horseNum;
	} else {
	   cout << ".";
	}
    }
    cout << endl; 
}


bool isWinner(int horseNum, int* horses) {
   return horses[horseNum] >= TRACK_LENGTH - 1;
}



int main() {
    srand(time(NULL));
    int horses[NUM_HORSES] = {0, 0, 0, 0, 0};
    bool raceOver = false;
    int winner = -1;

    while (!raceOver) {
      for (int h = 0; h < NUM_HORSES; h++) {
         advance(h, horses);
    }

      for (int h = 0; h < NUM_HORSES; h++) {
	  if (isWinner(h, horses)) {
	      raceOver = true;
	      winner = h;
	      break;
          } 

      }	

      for (int h = 0; h < NUM_HORSES; h++) {
	  if (raceOver && h == winner) {
	     cout << "Horse " << h << " WINS!!!" << endl;
      } else {
	   printLane(h, horses);
	}
 
    }

       if (!raceOver) {
	  cout << "Press enter for another turn";
	  cin.get();
      }

    }  

return 0;

}


