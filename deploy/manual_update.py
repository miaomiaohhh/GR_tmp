import sys

def manual_update(cluster_name):
    print(f"Performing manual update on cluster {cluster_name}")

if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("Usage: manual_update.py <cluster_name>")
    else:
        manual_update(sys.argv[1])
