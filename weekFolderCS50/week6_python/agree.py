s = input("Do you agree? ")
if s == "Y" or s == "y":
    print("Agreed")
elif s.lower() in ["N", "n", "No", "NO", "nO", "no"]:
    print("Disagreed")
elif s == 4:
    print(4)

def main():
    meow(s)



def meow(n):
    for i in range(n):
        print("meow")


main()
