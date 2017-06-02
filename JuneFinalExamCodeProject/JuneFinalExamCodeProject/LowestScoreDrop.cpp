#include "LowestScoreDrop.h"
#include <iostream>
#include <string>
#include <iomanip>
/*
 Write a program that calculates the average of a group of test scores, where the lowest score in the group is dropped. It should use the following functions:
 
 --> void getScore() should ask the user for a test score, store it in a reference parameter variable, and validate it. This function should be called by main once for each of the five scores to be entered.
 --> void calcAverage() should ask calculate and display the average of the four highest scores. This function should be called just once by main and should be passed the five scores.
 --> int findLowest() should find and return the lowest of the five scores passed to it. It should be called by calcAverage, which uses the function to determine which of the five scores to drop.
 
 Input Validation: Do no accept test scores lower than 0 or higher than 100.
 */

void LowestScoreDrop::getScore(double &_score1, double &_score2, double &_score3, double &_score4, double &_score5)
{
  std::cout << "Welcome to the Lowest Grade Drop Calculator.\n";
  std::cout << "The lowest of 5 grades will be dropped and the current grade will be calculated for you.\n";
  std::cout << "Please enter in your first grade.\n";
  
  std::cin >> _score1; // Break point in code, does not display grade entered, does not continue
  
  std::cout << "Score 2:\n";
  std::cin >> _score2;
  std::cout << "Score 3:\n";
  std::cin >> _score3;
  std::cout << "Score 4:\n";
  std::cin >> _score4;
  std::cout << "Score 5:\n";
  std::cin >> _score5;

}

void LowestScoreDrop::getCalcAverage()
{
  
}

void LowestScoreDrop::getFindLowest()
{
  double lowestScore;
  
  _score1 =  &lowestScore;
  if(lowestScore <= *_score1)
	 {
		lowestScore = *_score1;
		std::cout << "The lowest score is " << *_score1;
		std::cout << "\n This score will be dropped.\n";
	 }
  
  else if(lowestScore <= *_score2)
	 {
		lowestScore = *_score2;
		std::cout << "The lowest score is " << *_score2;
		std::cout << "\n This score will be dropped.\n";
	 }
  else if(lowestScore <= *_score3)
	 {
		lowestScore = *_score3;
		std::cout << "The lowest score is " << *_score3;
		std::cout << "\n This score will be dropped.\n";
	 }
  else if(lowestScore <= *_score4)
	 {
		lowestScore = *_score4;
		std::cout << "The lowest score is " << *_score4;
		std::cout << "\n This score will be dropped.\n";
	 }
  else if(lowestScore <= *_score5)
	 {
		lowestScore = *_score2;
		std::cout << "The lowest score is " << *_score5;
		std::cout << "\n This score will be dropped.\n";
	 }
  
}

LowestScoreDrop::LowestScoreDrop()
{
  getScore(*_score1, *_score2, *_score3, *_score4, *_score5);
  getFindLowest();
  getCalcAverage();
  
}

LowestScoreDrop::~LowestScoreDrop()
{
  
}
