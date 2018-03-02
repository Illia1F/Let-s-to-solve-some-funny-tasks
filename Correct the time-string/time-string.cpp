#include <regex>
#include <string>

std::string correct(std::string timeString)
{ 
  if (timeString.empty())
    return timeString;

  // our regular expression that we will compare
  std::regex reg("(\\d\\d):(\\d\\d):(\\d\\d)");

  std::cmatch cm;

  if (std::regex_match(timeString.c_str(), cm, reg)) {
    int hours = atoi(cm[1].first);
    int minutes = atoi(cm[2].first);
    int seconds = atoi(cm[3].first);

    minutes += seconds / 60;
    hours += minutes / 60;
    seconds %= 60;
    minutes %= 60;
    hours %= 24; 

    char result[9];    
    sprintf(result, "%02d:%02d:%02d", hours, minutes, seconds);
    return std::string(result);
  }

  return "";
}