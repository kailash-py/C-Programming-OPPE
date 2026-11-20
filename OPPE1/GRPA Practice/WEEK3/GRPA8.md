# Week 3 - GRPA 8: Daily Calorie Intake Calculator

## Problem Description

You are developing a program for a fitness app. Write a C program that calculates the user's recommended daily calorie intake based on their age, gender, weight, height, and activity level.

The program should take the following inputs:
- **Age** (in years)
- **Gender** (`1` for Male, `2` for Female)
- **Weight** (in kilograms)
- **Height** (in centimeters)
- **Activity Factor** (`1.20` for Sedentary, `1.55` for Moderately Active, `1.725` for Very Active)

Calculate and display the recommended daily calorie intake using the **Harris-Benedict Formula**.

---

## Formulas (Harris-Benedict)

### 1. For Males (`gender == 1`)
$$\text{Calories} = \Big(88.362 + (13.397 \times \text{weight}) + (4.799 \times \text{height}) - (5.677 \times \text{age})\Big) \times \text{activity factor}$$

### 2. For Females (`gender == 2`)
$$\text{Calories} = \Big(447.593 + (9.247 \times \text{weight}) + (3.098 \times \text{height}) - (4.330 \times \text{age})\Big) \times \text{activity factor}$$

---

## Input & Output Format

### Input Format
| Line | Variable | Data Type | Description |
| :--- | :--- | :--- | :--- |
| **Line 1** | `age` | `int` | Age of user in years |
| **Line 2** | `gender` | `int` | `1` for Male, `2` for Female |
| **Line 3** | `weight` | `double` | Weight in kilograms (kg) |
| **Line 4** | `height` | `double` | Height in centimeters (cm) |
| **Line 5** | `activity_factor` | `double` | `1.20` (Sedentary), `1.55` (Moderate), `1.725` (Very active) |

### Output Format
- Print the recommended daily calorie intake as a `double` value rounded up to **two decimal places** (`%.2lf`).

---

## Reference Values

| Input Field | Value | Meaning |
| :--- | :--- | :--- |
| **Gender** | `1` | Male |
| | `2` | Female |
| **Activity Factor** | `1.20` | Sedentary |
| | `1.55` | Moderately Active |
| | `1.725` | Very Active |

---

## Sample Test Cases

### Sample 1 (Male)
**Input:**
```text
27
1
67.50
172.50
1.20
```

**Output:**
```text
2000.65
```

---

### Sample 2 (Female)
**Input:**
```text
27
2
67.50
172.50
1.20
```

**Output:**
```text
1787.11
```

---

## Starter Template Code

> **Note:** For consistency in output, use the `double` data type for all decimal values.

```c
#include <stdio.h>

int main() 
{	
    int gender;
    //Initialize other required variables

    // Read inputs: age, gender, weight, height and activity factor

    // Calculate the recommended daily calorie intake
    if (gender == 1)
    {
        // Write the male calorie intake expression
       
    } 
    if (gender == 2) 
    {
        // Write the female calorie intake expression
        
    }
	// Print the output up to two decimal point

    return 0;
}
```

```