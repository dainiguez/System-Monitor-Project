#include <string>

#include "format.h"

using std::string;

// TODO: Complete this helper function
// INPUT: Long int measuring seconds
// OUTPUT: HH:MM:SS
// REMOVE: [[maybe_unused]] once you define the function
string Format::ElapsedTime(long seconds) { 
    size_t n = 2;
    string time{};
    int hours = seconds / 3600;
    int minutes = (seconds % 3600) / 60;
    int new_seconds = (seconds % 3600) % 60;
    string hours_str = std::to_string(hours);
    string minutes_str = std::to_string(minutes);
    string seconds_str = std::to_string(new_seconds);
    int hours_prec = n - std::min(n, hours_str.size());
    int minutes_prec = n - std::min(n, minutes_str.size());
    int seconds_prec = n - std::min(n, seconds_str.size());
    hours_str = std::string(hours_prec, '0').append(hours_str);
    minutes_str = std::string(minutes_prec, '0').append(minutes_str);
    seconds_str = std::string(seconds_prec, '0').append(seconds_str);
    time = hours_str + ":" + minutes_str + ":" + seconds_str;

    return time;
};