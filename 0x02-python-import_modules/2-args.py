#!/usr/bin/python3
import sys

if __name__ == "__main__":
    num_args = len(sys.argv) - 1
    args = sys.argv[1:]

    if num_args == 0:
        print("0 arguments.")
    else:
        plural_s = "s" if num_args > 1 else ""
        print("{} argument{}:".format(num_args, plural_s))
        for i in range(num_args):
            print("{}: {}".format(i + 1, args[i]))
