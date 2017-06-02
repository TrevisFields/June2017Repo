#pragma once
#include <iostream>
#include <string>

class LowestScoreDrop
{
private:
  double setScore();
  double setCalcAverage();
  double setFindLowest();
  
  double *_score1, *_score2, *_score3, *_score4, *_score5;
  
public:
  void getScore(double &, double &, double &, double &, double &);
  void getCalcAverage();
  void getFindLowest();
  
  LowestScoreDrop();
  ~LowestScoreDrop();
};
