Lab 3: C++ Output and Time Calculations — Build, Test, and Explain with AI
Course Section: CIS 165
Author: Mihail Jovanovski

PROGRAM 1
Plan for diamond.cpp
Output a 7-line diamond pattern using std::cout and std::setw() from  to control right-aligned field widths. Use widths of 5, 6, and 7 so the diamond aligns evenly on the screen.

PROGRAM 2
Plan for game_time.cpp
Store 78 and 144 in variables. Use integer division (/) to calculate hours and modulus (%) for remaining minutes for Level 1, Level 2, and their difference. Store all calculations in variables before displaying with std::cout.

COMPILING AND RUNNING
Open OnlineGDB in your web browser.
Select C++17 from the Language drop-down menu in the top right corner.

For diamond.cpp:
Paste the code into main.cpp.
Click the green Run button at the top.

For game_time.cpp:
Clear the editor, paste the game_time.cpp code.
Click the green Run button at the top.

TEST RECORDS

Program/test: diamond.cpp
Values or pattern checked: Seven required lines
Expected result before running: Line 1 (setw 5, 1 star), Line 2 (setw 6, 3 stars), Line 3 (setw 7, 5 stars), Line 4 (0 spaces, 7 stars), Line 5 (setw 7, 5 stars), Line 6 (setw 6, 3 stars), Line 7 (setw 5, 1 star)
Actual output: Seven lines forming an even, symmetrical diamond pattern
Match or correction: Correction, Adjusted width values to 5, 6, and 7 so the output lined up evenly on the computer screen. 

Program/test: game_time.cpp — assigned values
Values or pattern checked: 78 and 144 minutes
Expected result before running: Level 1 (1 hr 18 min), Level 2 (2 hr 24 min), Difference (1 hr 6 min)
Actual output: Level 1: 1 hour(s) and 18 minute(s), Level 2: 2 hour(s) and 24 minute(s), Level 2 took 1 hour(s) and 6 minute(s) longer than Level 1
Match or correction: Match

Program/test: game_time.cpp — changed values
Values or pattern checked: 90 and 205 minutes
Expected result before running: Level 1 (1 hr 30 min), Level 2 (3 hr 25 min), Difference (1 hr 55 min)
Actual output: Level 1: 1 hour(s) and 30 minute(s), Level 2: 3 hour(s) and 25 minute(s), Level 2 took 1 hour(s) and 55 minute(s) longer than Level 1
Match or correction: Match

Assigned values (78 and 144) were restored in game_time.cpp and final runs were completed.

CODE EXPLANATIONS

diamond.cpp output shape:
std::setw(W) right-aligns output within field width W. Using std::setw(5) for line 1 pads 4 leading spaces before 1 star. Line 2 uses std::setw(6) for 3 leading spaces, and line 3 uses std::setw(7) for 2 leading spaces. Line 4 needs no setw because it prints 7 stars directly. This offset ensures all lines line up cleanly and symmetrically on the screen. Invisible spaces were checked by highlighting text in the console window.

Integer division and remainder:
Integer division (/) divides whole numbers and discards decimals to give hours. Modulus (%) finds the remainder after division to give leftover minutes.

Variable trace:
level_one_minutes = 78
level_two_minutes = 144
MINUTES_PER_HOUR = 60
level_one_hours = 78 / 60 = 1
level_one_remaining_minutes = 78 % 60 = 18
level_two_hours = 144 / 60 = 2
level_two_remaining_minutes = 144 % 60 = 24
total_difference_minutes = 144 - 78 = 66
difference_hours = 66 / 60 = 1
difference_remaining_minutes = 66 % 60 = 6

Storing calculations in variables first:
Storing calculations in variables keeps the math separate from the print statements. This makes the code easier to read, simpler to debug, and aligned with course style rules.
