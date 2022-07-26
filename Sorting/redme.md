Selection Sort 
Theory - https://drive.google.com/file/d/1WtwEvIvqKOUR0Ys0S_SLPjfWzcT-W4_X/view
Reference Video - https://www.youtube.com/watch?v=UdO2NeHB46c&list=PLDzeHZWIZsTryvtXdMr6rPh4IDexB5NIA&index=16
Reference Detail - https://www.acodersjourney.com/selection-sort/#:~:text=Selection%20sort%20is%20NOT%20a,order%20relative%20to%20one%20another

Space Complexity - O(1)
BlaBlaBla FYI* - Since the array is sorted in place and no extra space is used, the space complexity is O(1)

Time Complexity - O(n^2) Best Case
Time Complexity - O(n^2) Worst Case
BlaBlaBla FYI* - For each element, the entire list is checked to find the smallest element. So in the worst case, "n" elements are checked for each element. Hence the time complexity is O(N^2)

Adaptable? No
BlaBlaBla FYI* - The order of elements does not affect the sorting time. In other words, even if the array is partially sorted, still each element is compared and there is no breaking out early. Hence Selection sort is non-adaptable.

Stable? No
BlaBlaBla FYI* - Selection sort is NOT a stable sorting algorithm. Elements which are equal might be re-arranged in the final sort order relative to one another.

Number of Comparisons and Swaps - O(N^2) comparisons and O(N) swaps
BlaBlaBla FYI* - Selection Sort makes O(N^2) comparisons ( every element is compared to every other element). Selection Sort makes O(N) swaps to get all elements in the correct place.

Use Case - 
1. When the array is NOT partially sorted
2. When we have memory usage constraints
3. When a simple sorting implementation is desired
4. When the array to be sorted is relatively small

Avoid Case - 
1. The array to be sorted has a large number of elements
3. You want a faster run time and memory is not a concern.


Bubble Sort 
Theory - https://drive.google.com/file/d/1DScaSvG0TzAy2b9MF9CcEtzoOxvai3MY/view
Reference Video - https://youtu.be/zOhUavxlzw4
Reference Detail - https://www.acodersjourney.com/bubble-sort/

Space Complexity - O(1)
BlaBlaBla FYI* - Since the array is sorted in place and no extra space is used, the space complexity is O(1)

Time Complexity - O(n) Best Case
Time Complexity - O(n^2) Worst Case
BlaBlaBla FYI* - The worst case is when the entire array is sorted in descending order. In that case, we have to check N elements and swap N elements for each selected element. Hence the time complexity is O(N^2)

Adaptable? Yes
BlaBlaBla FYI* - If the array is partially sorted, we'll terminate the sorting loop early. Hence Bubble sort is adaptive

Stable? Yes
BlaBlaBla FYI* - Bubble Sort is a stable sorting algorithm. Elements which are equal are NOT  re-arranged in the final sort order relative to one another.

Number of Comparisons and Swaps - O(N^2) comparisons and O(N^2) swaps
BlaBlaBla FYI* - Bubble Sort makes O(N^2) comparisons ( every element is compared to every other element). Bubble Sort makes O(N^2) swaps to get all elements in the correct place.

Use Case - 
1. When the array is partially sorted - since bubble sort is adaptive
2. When we have memory usage constraints
3. When a simple sorting implementation is desired
4. When the array to be sorted is relatively small

Avoid Case - 
1. The array to be sorted has a large number of elements
2. The array is completely  unsorted
3. You want a faster run time and memory is not a concern.





*FYI - For your Information