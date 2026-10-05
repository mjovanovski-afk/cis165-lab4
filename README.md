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
