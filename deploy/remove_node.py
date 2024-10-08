import sys

def remove_node(cluster_name, node_id):
    print(f"Removing node {node_id} from cluster {cluster_name}")

if __name__ == "__main__":
    if len(sys.argv) != 3:
        print("Usage: remove_node.py <cluster_name> <node_id>")
    else:
        remove_node(sys.argv[1], sys.argv[2])
