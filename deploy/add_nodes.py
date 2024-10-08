import sys

def add_nodes(cluster_name, node_count):
    print(f"Adding {node_count} nodes to cluster {cluster_name}")

if __name__ == "__main__":
    if len(sys.argv) != 3:
        print("Usage: add_nodes.py <cluster_name> <node_count>")
    else:
        add_nodes(sys.argv[1], int(sys.argv[2]))
