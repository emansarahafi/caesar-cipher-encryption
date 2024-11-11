# Caesar Cipher Encryption

This program implements the Caesar Cipher for encrypting text. It takes a message and a shift value (between 0 and 25) from the user, applies the Caesar Cipher by shifting each alphabetic character in the message, and then outputs the encrypted message. The program includes input validation to ensure the shift value is within the correct range, and it keeps non-alphabetic characters unchanged in the encryption process.

## Code Breakdown

### 1. `encryptCaesarCipher` Function:
- This function takes a message and a shift value as input parameters and returns the encrypted message.
- It initializes an empty string `encryptedMessage` to store the encrypted result.
- The function then loops through each character of the input message.
- For each character:
  - It converts the character to lowercase using `tolower`.
  - If the character is a lowercase alphabetic letter, it applies the Caesar Cipher encryption formula by shifting the character by the specified amount.
  - Non-alphabetic characters remain unchanged.
  - The encrypted character is appended to the `encryptedMessage` string.
- Finally, the function returns the encrypted message.

### 2. `main` Function:
- The `main` function is where the program execution starts.
- It declares variables `message` and `shift` to store the user's input message and shift value.
- The program prompts the user to input a message and reads it using `getline`.
- It then prompts the user to input a shift value between 0 and 25, validating the input to ensure it is within the specified range and is numeric.
- Once a valid shift value is obtained, the `encryptCaesarCipher` function is called with the message and shift value.
- The encrypted message is then displayed to the user.

### 3. Input Validation:
- The code includes input validation for the shift value entered by the user. It ensures that the shift value is a number and falls within the valid range of 0 to 25.

### 4. Caesar Cipher Encryption:
- The Caesar Cipher encryption works by shifting each alphabetic character by the specified amount. Only lowercase alphabetic characters are encrypted, while non-alphabetic characters remain unchanged.
