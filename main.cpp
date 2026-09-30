// Homework 5 — Tyler Quintana
// CIS 5 Week 05 · Rule engine lite

#include <iostream>


int main() {
  int score = 0;
  int attendance = 0;

  std:: cout << "Score? ";
  std::cin >> score;
  std:: cout << "Attendance percentage? ";
  std:: cin >> attendance;


  // Edge values: 
  // just under: score- 69 attendance- 59 
  // exact: score- 70 attendance- 60 
  // Just over: score- 71 attendance- 61

  if (score < 0 || score > 100)
  {
  std:: cout << "INVALID SCORE\n";
  }
  
  
  // this invalid guard is here first to keep the rest 
  // of the blocks from running in error
  
  else if (score >= 70 && attendance >= 60)
  {
    std:: cout << " You're passing! I'm proud of you :)\n";
  }
  //I used && here because you need both a min of a 70 in score and 60 percent
  //  attendance to be considered passing not just one of the two
  
   else if (score <= 70)
  {
    std:: cout << "Time to lock in! You're failing.\n";
  }

  else if (score >= 70 || attendance <= 59)
  {
    std::cout << "WARNING: Your abscences are too high! \n";
  }
  
  else 
  {
    std:: cout << "WARNING\n";
  }

  
  return 0;
}
