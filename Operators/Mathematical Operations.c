#include <stdio.h>

int main() {
  
  // Variables set for you, do not change here
  int booksSold = 100;
  double bookCost = 9.99;
  double totalSalesValue;

  // Make your changes here
  booksSold = booksSold + 200;
  totalSalesValue = booksSold*bookCost;

  /*
  Your publisher takes half of the total sales as part of their cut. 
  Update your totalSalesValue accordingly (you can do this with multiplication or division in the real world, 
  but for practice, please use division).
  */
  totalSalesValue = totalSalesValue/2;


  // Output logic, no need to change this
  printf("You sold %d books and your take home was $%.2f\n", booksSold, totalSalesValue);
}