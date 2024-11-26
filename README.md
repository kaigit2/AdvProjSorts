# AdvProjSorts

This project compares the time complexities of different sorting algorithms in C.
All data here: Adv Proj Sorting Algorithms

This project was done in C on a microsoft surface computer in Visual Studio Code. Quicksort, Bubble, and Insertion sorts were used. Quicksort and Bubble were written by me, although the insertion sort was helped by Chat GPT, because the algorithm is completely new to me. The theoretical time complexities were derived by looking up their time complexities on the internet. The actual time complexities were derived from running the code with an n number of elements, and seeing how many milliseconds it took to run the sort. This was conducted with 103 elements, 104 elements, 105 elements, and 5*105 elements. Three trails per n were conducted. Then they were averaged and graphed. Using the power series trendline on Google Sheets, I found the exponential growth rate of the function. This was then compared to the theoretical growth rate. 
 Worst and best case scenarios were also compared. 
These are the results of my tests. Quicksort clearly is the best sorting algorithm, because it can handle many more elements. Each sorting algorithm is displayed with it expected time complexities in big O notation, as well as the actual time complexity when tested.




GRAPHS ⬇
*all graph time complexities are measured in ms.*
Quicksort:
Expected worst case: O(n × logn)	
Expected best case: O(n^2)
Actual average behavior: O(x^2.78)


Bubble Sort:
Expected worst case: O(n^2)
Expected best case: O(n)
Actual worst behavior: O( x^1.88)
Actual average behavior: O(x^1.69)


Insertion Sort:
Expected worst case: O(n^2)	
Expected best case:  O(n)
Actual worst behavior: x^1.86
Actual average behavior: x^1.8



