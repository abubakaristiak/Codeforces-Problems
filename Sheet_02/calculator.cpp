import math

def display_menu():
    print("\n✨ Gorgeous Calculator ✨")
    print("1. Addition (+)")
    print("2. Subtraction (-)")
    print("3. Multiplication (*)")
    print("4. Division (/)")
    print("5. Square Root (√)")
    print("6. Power (^)")
    print("7. Exit")

def get_input(prompt):
    while True:
        try:
            return float(input(prompt))
        except ValueError:
            print("Invalid input! Please enter a number.")

def add():
    num1 = get_input("Enter the first number: ")
    num2 = get_input("Enter the second number: ")
    print(f"Result: {num1} + {num2} = {num1 + num2}")

def subtract():
    num1 = get_input("Enter the first number: ")
    num2 = get_input("Enter the second number: ")
    print(f"Result: {num1} - {num2} = {num1 - num2}")

def multiply():
    num1 = get_input("Enter the first number: ")
    num2 = get_input("Enter the second number: ")
    print(f"Result: {num1} * {num2} = {num1 * num2}")

def divide():
    num1 = get_input("Enter the first number: ")
    num2 = get_input("Enter the second number: ")
    if num2 == 0:
        print("Error: Division by zero is not allowed!")
    else:
        print(f"Result: {num1} / {num2} = {num1 / num2}")

def square_root():
    num = get_input("Enter the number: ")
    if num < 0:
        print("Error: Square root of a negative number is not allowed!")
    else:
        print(f"Result: √{num} = {math.sqrt(num)}")

def power():
    num1 = get_input("Enter the base number: ")
    num2 = get_input("Enter the exponent: ")
    print(f"Result: {num1} ^ {num2} = {math.pow(num1, num2)}")

def main():
    while True:
        display_menu()
        choice = input("Choose an operation (1-7): ")

        if choice == '1':
            add()
        elif choice == '2':
            subtract()
        elif choice == '3':
            multiply()
        elif choice == '4':
            divide()
        elif choice == '5':
            square_root()
        elif choice == '6':
            power()
        elif choice == '7':
            print("Thank you for using the Gorgeous Calculator! Goodbye! ✨")
            break
        else:
            print("Invalid choice! Please select a valid option (1-7).")

if __name__ == "__main__":
    main()