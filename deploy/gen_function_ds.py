import sys

def gen_function_ds(function_name):
    print(f"Generating function data store for {function_name}")

if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("Usage: gen_function_ds.py <function_name>")
    else:
        gen_function_ds(sys.argv[1])
