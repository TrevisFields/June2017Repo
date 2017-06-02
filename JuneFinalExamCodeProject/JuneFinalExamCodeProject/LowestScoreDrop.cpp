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
  const double MAX_SCORE = 100.1;
  const double MIN_SCORE = 0.00;
  std::cout << "Welcome to the Lowest Grade Drop Calculator.\n";
  std::cout << "The lowest of 5 grades will be dropped and the current grade will be calculated for you.\n";
  
  if(MIN_SCORE <= _score1 || _score1 >= MAX_SCORE)
	 {
  std::cout << "Please enter in your first grade.\n";
  std::cin >> _score1; // Break point in code, does not display grade entered, does not continue
	 }
  else
	 {
		std::cout << "INVALID SCORE.\n";
	 }
  if(MIN_SCORE >= _score2 || _score2 <= MAX_SCORE)
	 {
  std::cout << "Please enter in your second grade.\n";
  std::cin >> _score2; // Break point in code, does not display grade entered, does not continue
	 }
  else
	 {
		std::cout << "INVALID SCORE.\n";
	 }
  if(MIN_SCORE >= _score3 || _score3 <= MAX_SCORE)
	 {
  std::cout << "Please enter in your third grade.\n";
  std::cin >> _score3; // Break point in code, does not display grade entered, does not continue
	 }
  else
	 {
		std::cout << "INVALID SCORE.\n";
	 }
  if(MIN_SCORE >= _score4 || _score4 <= MAX_SCORE)
	 {
  std::cout << "Please enter in your fourth grade.\n";
  std::cin >> _score4; // Break point in code, does not display grade entered, does not continue
	 }
  else
	 {
		std::cout << "INVALID SCORE.\n";
	 }
  if(MIN_SCORE >= _score5 || _score5 <= MAX_SCORE)
	 {
  std::cout << "Please enter in your fifth grade.\n";
  std::cin >> _score5; // Break point in code, does not display grade entered, does not continue
	 }
  else
	 {
		std::cout << "INVALID SCORE.\n";
	 }
	
}

void LowestScoreDrop::getCalcAverage()
{
  getFindLowest();
}

void LowestScoreDrop::getFindLowest()
{
  double lowestScore;
  
  
  if(_score1 < _score2)
	 {
		if(_score1 < _score3)
		{
		  if(_score1 < _score4)
			 {
				if(_score1 < _score5)
				{
				  lowestScore = _score1;
				  std::cout << "The lowest score is : " << lowestScore << std::endl;
				  std::cout << "This score will be dropped.\n";
				}
				
			 }
		}
	 }
  
  if(_score2 < _score1)
	 {
		if(_score2 < _score3)
		{
		  if(_score2 < _score4)
			 {
				if(_score2 < _score5)
				{
				  lowestScore = _score2;
				  std::cout << "The lowest score is : " << lowestScore << std::endl;
				  std::cout << "This score will be dropped.\n";
				}
				
			 }
		}
	 }
  
  if(_score3 < _score1)
	 {
		if(_score3 < _score2)
		{
		  if(_score3 < _score4)
			 {
				if(_score3 < _score5)
				{
				  lowestScore = _score3;
				  std::cout << "The lowest score is : " << lowestScore << std::endl;
				  std::cout << "This score will be dropped.\n";
				}
				
			 }
		}
	 }
  
  if(_score4 < _score1)
	 {
		if(_score4 < _score2)
		{
		  if(_score4 < _score3)
			 {
				if(_score4 < _score5)
				{
				  lowestScore = _score4;
				  std::cout << "The lowest score is : " << lowestScore << std::endl;
				  std::cout << "This score will be dropped.\n";
				}
				
			 }
		}
	 }
  
  if(_score5 < _score1)
	 {
		if(_score5 < _score2)
		{
		  if(_score5 < _score3)
			 {
				if(_score5 < _score4)
				{
				  lowestScore = _score5;
				  std::cout << "The lowest score is : " << lowestScore << std::endl;
				  std::cout << "This score will be dropped.\n";
				}
				
			 }
		}
	 }
  
  double total = (_score1 + _score2 + _score3 + _score4 + _score5);
  
  //std::cout << "\n" << total;
  double newTotal;
  newTotal = total - lowestScore;
  std::cout << "The average points you have are: "  << newTotal << "\n";;
}

LowestScoreDrop::LowestScoreDrop()
{
  getScore(_score1, _score2, _score3, _score4, _score5);
  getCalcAverage();

  
}

LowestScoreDrop::~LowestScoreDrop()
{
  
}
