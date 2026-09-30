# L2P1

Program - Values used.	   Expected result before running	  Actual output	  Match or fix
sum.cpp — assigned values	50 and 100 --> 150.             	150         	Match
sum.cpp — changed values	66 and 1 --> 67.     	            67	            Match
mpg.cpp — assigned values	312 miles; 16 gallons -->19.5 	    19.5	        Match
mpg.cpp — changed values	500 miles; 60 gallons --> 8.33	    8.33	        Match
I have restored the variables to their initial default value after the user input values.
For sum.cpp: First, I set number1 and number 2 as int values as I expected to only use integers. total is assigned the answer. I stored the calculation in total before printing, because if I need to print the total again, I can just use a variable instead of repeating an equation. While it is not a big deal for addition, if there is a complicated equation, it would be more convenient and readable to just use a variable.
For mpg.cpp: The formula I used was just a simple miles/gallons, because thats how one calculates the mpg. If I had used int variables for the miles and gallons, then when I divide, it will give me an int number, before turning into a float. For example, with 16 gallons and 312 miles, the expected output is 19.5, but if the variables were in int, the 19.5 would be rounded down to 19, and then since it was turned into a float, it would be 19.0. Similarly, with my changed values input of 500 miles and 60 gallons, it would've been 500/60-->8.0 as the 8.33 was rounded down. Therefore, I set all variables as floats.