/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    
    // Start from the least significant digit
    int carry = 1;

    // Iterate through the digits from right to left
    for (int i = digitsSize - 1; i >= 0; i--) {
        int sum = digits[i] + carry;
        digits[i] = sum % 10;  // Update the current digit
        carry = sum / 10;      // Update the carry for the next iteration

        // If there is no carry, we can stop the loop
        if (carry == 0) {
            break;
        }
    }

    // If there is still a carry after the loop, we need to add a new digit
    if (carry > 0) {
        // Increment the size of the result array
        (*returnSize) = digitsSize + 1;

        // Allocate memory for the new array
        int* result = (int*)malloc((*returnSize) * sizeof(int));

        // Set the most significant digit to the carry value
        result[0] = carry;

        // Copy the remaining digits from the original array
        for (int i = 0; i < digitsSize; i++) {
            result[i + 1] = digits[i];
        }

        return result;
    } else {
        // No new digit is added
        (*returnSize) = digitsSize;
        return digits;
    }
}
