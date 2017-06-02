#pragma once
#include <iostream>
#include <string>

class LowestScoreDrop
{
public:
  double _score1 = 0;
  double _score2 = 0;
  double _score3 = 0;
  double _score4 = 0;
  double _score5 = 0;
  
  void getScore(double &, double &, double &, double &, double &);
  void getCalcAverage();
  void getFindLowest();
  
  LowestScoreDrop();
  ~LowestScoreDrop();
};
