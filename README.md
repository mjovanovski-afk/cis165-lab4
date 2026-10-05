Lab 4: C++ Averages and Ocean-Level Projections
Project Overview

average.cpp: Calculates the sum and average of five double values.
ocean_levels.cpp: Calculates projected ocean level rises over 5, 7, and 10 years based on a fixed annual rate.

Program Plans

average.cpp Plan

Variables: Five double variables val1, val2, val3, val4, val5 holding assigned values 28, 32, 37, 24, and 33.
Sum Calculation: Store the total in a double variable named sum using sum = val1 + val2 + val3 + val4 + val5.
Average Calculation: Store the result in a double variable named average using average = sum / 5.0.
Output: Print sum and average to the console with clear labels.

ocean_levels.cpp Plan

Constants: ANNUAL_RISE_RATE = 1.5 mm per year. Year constants: YEARS_5 = 5, YEARS_7 = 7, YEARS_10 = 10.
Calculations:
rise_5_years = ANNUAL_RISE_RATE * YEARS_5
rise_7_years = ANNUAL_RISE_RATE * YEARS_7
rise_10_years = ANNUAL_RISE_RATE * YEARS_10
Output: Print each projection with clear labels and mm units.

Testing Results

Test 1: Average — assigned values

Values used: 28, 32, 37, 24, 33

Expected results: Sum: 154.0, Average: 30.8

Actual results: Sum: 154, Average: 30.8

Result: Match

Test 2: Average — changed values

Values used: 10.5, 12.2, 15.3, 20.1, 18.4

Expected results: Sum: 76.5, Average: 15.3

Actual results: Sum: 76.5, Average: 15.3

Result: Match

Test 3: Ocean — assigned rate

Values used: 1.5 mm per year

Expected results: 5 yrs: 7.5 mm, 7 yrs: 10.5 mm, 10 yrs: 15.0 mm

Actual results: 5 yrs: 7.5 mm, 7 yrs: 10.5 mm, 10 yrs: 15 mm

Result: Match

Test 4: Ocean — changed rate

Values used: 2.0 mm per year

Expected results: 5 yrs: 10.0 mm, 7 yrs: 14.0 mm, 10 yrs: 20.0 mm

Actual results: 5 yrs: 10 mm, 7 yrs: 14 mm, 10 yrs: 20 mm

Result: Match

Code Explanations

Why should the five values and the average use the double data type?
Double supports decimal numbers. Computing averages involves division, which results in decimals frequently even if the starting inputs are integers. Using double prevents losing decimal precision.

Trace the assigned values through sum and average.

Inputs: val1 = 28, val2 = 32, val3 = 37, val4 = 24, val5 = 33

Sum calculation: 28 + 32 + 37 + 24 + 33 = 154

Average calculation: 154.0 / 5.0 = 30.8

Why should the average calculation divide the completed sum rather than only the final value?
An average requires finding the total of all numbers before dividing by the amount of numbers. Without taking the full sum first, only the final value would be divided by 5, leading to an incorrect result.

Explain how the ocean-level calculations use the annual rate and number of years.
Each projection calculates the total level increase using multiplication: Total Rise = Annual Rate * Years. Multiplying the fixed rate of 1.5 mm per year by each target number of years gives the projected rise in millimeters.

Why is the annual ocean-level rate a good candidate for a named constant?
The rate of ocean level rise is a fixed value throughout the program. Declaring it as a constant prevents accidental changes during execution and makes the code easier to read.

Why does the assignment require calculations to be stored before using cout?
Storing calculations in variables separates the math logic from the display logic. This makes the code cleaner, easier to debug, and simpler to reuse later.
