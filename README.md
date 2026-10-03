Lab 3: C++ Output and Time Calculations — Build, Test, and Explain with AI
Course Section: CIS 165
Author: Mihail Jovanovski

PROGRAM 1
Plan for diamond.cpp

Goal: Output a 7-line diamond pattern consisting of asterisks and spaces using exact field formatting.

Approach: Use std::cout paired with std::setw() from  to set specific field widths for right-aligned output across lines 1 through 3 and 5 through 7. Line 4 will output 7 asterisks directly without padding.

PROGRAM 2
Plan for game_time.cpp

Goal: Convert Level 1 (78 min) and Level 2 (144 min) completion times to hours and remaining minutes, then calculate how much longer Level 2 took.

Constants and Inputs: MINUTES_PER_HOUR = 60, level_one_minutes = 78, level_two_minutes = 144.

Calculations:
Hours = total_minutes / MINUTES_PER_HOUR (integer division)
Remaining Minutes = total_minutes % MINUTES_PER_HOUR (modulus operator)
Difference = level_two_minutes - level_one_minutes, converted similarly.
Output: Display each calculated variable cleanly using labeled std::cout statements.

COMPILING AND RUNNING
Open OnlineGDB in your web browser.
Select C++17 from the Language drop-down menu in the top right corner.

For diamond.cpp:
Paste the code into main.cpp.
Click the green Run button at the top.

For game_time.cpp:
Clear the editor, paste the game_time.cpp code.
Click the green Run button at the top.

