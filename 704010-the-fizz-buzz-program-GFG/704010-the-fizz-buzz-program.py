#User function Template for python3

def fizzBuzz(number):
    # Write your code here.
    print("FizzBuzz" if number%3==0 and number%5==0 else "Fizz"if number%3==0 else "Buzz" if number%5==0 else number)