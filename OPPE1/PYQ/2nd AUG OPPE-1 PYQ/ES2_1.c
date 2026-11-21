/*
ES Problem 1 [20 Marks] – Fitness Test
A school conducts a fitness test for its students. Each student receives a fitness score.
The school wants to know:
How many students passed the fitness test (score ≥ 50).
The average score of all students who passed.
Write a C program that takes the number of students followed by their fitness scores and
prints:
1. The number of students who passed.
2. The average score of all students who passed.
If no student passes, print 0.00 as the average.
Input Format
The first line contains an integer n representing the number of students.
The next n lines each contain an integer representing a student's fitness score.
Output Format
Print the following separated by a space:
passed_students average_pass_score
Print the average score up to two decimal places.
If no student passes, print 0.00 as the average.
Sample Input 1
5
60
40
75
50
30
Sample Output 1
3 61.67
*/
#include<stdio.h>
int main(){
    int n, passed=0, sum=0;
    scanf("%d", &n);
    for(int i = 0; i<n;i++){
        int score;
        scanf("%d", &score);
        if (score>=50){
            passed+=1;
            sum+=score;
        }
        else { continue;}

    }
    double avg;
    if (passed>0){
         avg = (double)sum/(double)passed;
    }
    else{  avg =0;}
    printf("%d %.2lf", passed, avg);
}