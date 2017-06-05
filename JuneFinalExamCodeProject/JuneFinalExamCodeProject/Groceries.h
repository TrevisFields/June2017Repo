#include <iostream>

template <class Food>
class Groceries
{
private:
  Food *groceriesArray;
  int groceriesSize;
  int begining;
  
public:
  Groceries(int);
  Groceries (const Groceries&);
  
  ~Groceries();
  
  void push(Food);
  void pop(Food &);
  bool willGrab();
  bool willPutBack();
  
  void GroceriesDisplay();
};
