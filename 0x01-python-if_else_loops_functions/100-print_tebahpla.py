#!/usr/bin/python3
lowercase = False
for char in reversed(range(ord('a'), ord('z') + 1)):
    if lowercase:
        print("{}".format(chr(char)), end="")
    else:
        print("{}".format(chr(char - 32)), end="")
    lowercase = not lowercase
