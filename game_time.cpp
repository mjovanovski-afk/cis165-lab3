#include <iostream>

int main()
{
    const int MINUTES_PER_HOUR=60;
    
    int level_one_minutes = 78;
    int level_two_minutes = 144;
    
    int level_one_hours=level_one_minutes / MINUTES_PER_HOUR;
    int level_one_remainding_minutes=level_one_minutes % MINUTES_PER_HOUR;
    
    int level_two_hours=level_two_minutes / MINUTES_PER_HOUR;
    int level_two_remainding_minutes=level_two_minutes % MINUTES_PER_HOUR;
    
    int total_difference_minutes= level_two_minutes - level_one_minutes;
    int total_difference_hours= total_difference_minutes/MINUTES_PER_HOUR;
    int total_difference_remainding_minutes= total_difference_minutes%MINUTES_PER_HOUR;
    
    std::cout<<"Level 1: "<<level_one_hours<<" hour(s) and "<<level_one_remainding_minutes<<" minute(s)\n";
    std::cout<<"Level 2: "<<level_two_hours<<" hour(s) and "<<level_two_remainding_minutes<<" minute(s)\n";
    std::cout<<"Level 2 took "<<total_difference_hours<<" hour(s) and "<<total_difference_remainding_minutes<<" minute(s) longer than level 1\n";
}