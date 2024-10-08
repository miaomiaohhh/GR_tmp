import sys

def create_cluster(cluster_name):
    print(f"Creating cluster {cluster_name}")

if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("Usage: create_cluster.py <cluster_name>")
    else:
        create_cluster(sys.argv[1])
