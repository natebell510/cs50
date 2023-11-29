from sys import argv

for arg in argv:
    print(arg)


if len(sys.argv) != 2
    print("Missing command line argument")
    sys.exit(1)

print(f"hello, {sys.argv[1]}")
sys.exit(0)

