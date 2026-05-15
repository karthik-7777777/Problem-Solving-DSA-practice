#User function Template for python3
arr = tuple(map(int, input().split()))

########### Write your code below ###############
# Print "True" if all elements of tuple are different, otherwise print "False"
x=sorted(arr)
flag=1
for i in range(len(x)-1):
    if x[i]==x[i+1]:
        print("False")
        flag=0
        break
if flag==1:
    print("True")
########### Write your code above ###############

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna