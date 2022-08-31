/*
The other way to convert a variable from another type is explicitly. 
You can do this by simply telling the compiler what type you want to set it to. 
So in our example above we could change the line a = b to a = (int)b. 
That way if b was something other than 3.0, such as 3.2, we are telling the compiler to make it work, so it would set it to 3.
*/

#include <stdio.h>

int main() {
  
  double testScore = 95.7;
  int displayScore = 0;

  displayScore = (int)testScore;


  // No need to change below here
  printf("Great work, you got a %d%% on your test\n", displayScore);

}