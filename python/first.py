print("har har mhadev")

import os
import multiprocessing

# Method 1: Using the os module
num_cores_os = os.cpu_count()
print(f"Number of CPU cores (os.cpu_count()): {num_cores_os}")

# Method 2: Using the multiprocessing module
num_cores_multiprocessing = multiprocessing.cpu_count()
print(f"Number of CPU cores (multiprocessing.cpu_count()): {num_cores_multiprocessing}")
