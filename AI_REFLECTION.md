AI REFLECTION

Tools used:
Gemini, for a quick refresher on std::setw()

One decision:
I asked for a quick reminder on how std::setw() right-aligns output. I accepted using std::setw() instead of typing spaces manually into string literals, but adjusted the width values to 5, 6, and 7 so the diamond printed evenly on screen.

Verification:
I calculated the times on paper first (78 min = 1 hr 18 min; 144 min = 2 hr 24 min; diff = 1 hr 6 min). Running game_time.cpp in OnlineGDB confirmed the console output matched my math exactly.

Learning:

What I can do now: Use integer division (/) and modulus (%) to convert time units and store results in variables.

What I need to practice: Choosing std::setw() widths on the first try without tweaking them during testing.
