import string

# Global storage
plaintext = ""
ciphertext = ""
key = ""
logs = []
stats = {"vowels": 0, "consonants": 0, "digits": 0, "specials": 0}

# Helper Functions
def is_prime(n):
    if n < 2: return False
    for i in range(2, int(n**0.5)+1):
        if n % i == 0: return False
    return True

def compute_shifts(key):
    even_sum = sum(ord(key[i]) for i in range(0, len(key), 2))
    odd_sum = sum(ord(key[i]) for i in range(1, len(key), 2))
    even_shift = even_sum % 4 + 2
    odd_shift = odd_sum % 6 + 1
    return even_shift, odd_shift, is_prime(len(key))

def shift_char(c, shift, direction):
    if c.isalpha():
        alpha = string.ascii_uppercase if c.isupper() else string.ascii_lowercase
        idx = alpha.index(c)
        if direction == "right":
            new_idx = (idx + shift) % 26
        else:
            new_idx = (idx - shift) % 26
        return alpha[new_idx]
    elif c.isdigit():
        return str(9 - int(c))
    else:
        return c

def is_vowel(c):
    return c.lower() in "aeiou"

def transform(text, key, mode="encrypt"):
    logs.clear()
    for k in stats: stats[k] = 0

    even_shift, odd_shift, prime = compute_shifts(key)
    direction = "right" if prime else "left"
    if mode == "decrypt":
        direction = "left" if prime else "right"

    result = []
    for c in text:
        if c.isalpha():
            if is_vowel(c):
                shifted = shift_char(c, even_shift, direction)
                stats["vowels"] += 1
            else:
                shifted = shift_char(c, odd_shift, direction)
                stats["consonants"] += 1
        elif c.isdigit():
            shifted = shift_char(c, 0, direction)
            stats["digits"] += 1
        else:
            shifted = c
            stats["specials"] += 1

        logs.append((c, shifted))
        result.append(shifted)

    return ''.join(result)

# Menu Functions
def input_plaintext():
    global plaintext
    plaintext = input("Enter plaintext message: ")

def input_key():
    global key
    key = input("Enter key: ").strip()
    if not key.isalpha():
        print("Invalid key! Must contain only letters.")
        key = ""

def encrypt_message():
    global ciphertext
    if not plaintext:
        print("No plaintext provided!")
        return
    if not key:
        print("No valid key provided!")
        return
    ciphertext = transform(plaintext, key, mode="encrypt")
    print("Encrypted Ciphertext:", ciphertext)

def decrypt_message():
    global plaintext
    if not ciphertext:
        print("No ciphertext available!")
        return
    if not key:
        print("No valid key provided!")
        return
    plaintext = transform(ciphertext, key, mode="decrypt")
    print("Decrypted Plaintext:", plaintext)

def view_stats_and_logs():
    print("\n--- Transformation Log ---")
    for orig, trans in logs:
        print(f"{orig} → {trans}")
    print("\n--- Statistics ---")
    for k, v in stats.items():
        print(f"{k.title()} Processed: {v}")

# Main Menu
def main():
    while True:
        print("\n--- Dual-Phase Adaptive Shift Cipher ---")
        print("1. Input Plaintext")
        print("2. Input Key")
        print("3. Encrypt Message")
        print("4. Decrypt Message")
        print("5. View Statistics and Transformation Logs")
        print("6. Exit")
        choice = input("Enter your choice: ")
        if choice == '1':
            input_plaintext()
        elif choice == '2':
            input_key()
        elif choice == '3':
            encrypt_message()
        elif choice == '4':
            decrypt_message()
        elif choice == '5':
            view_stats_and_logs()
        elif choice == '6':
            print("Exiting program.")
            break
        else:
            print("Invalid choice. Try again.")

if __name__ == "__main__":
    main()
