# Secure System Engineering Course Project
## Static analysis of code

STEPS TO RUN
- Install llvm-3.3 and clang-3.3
- Download python-llvm-analyzer and make sure algo.py is in the same folder as it.
- In algo.py, make sure to change the clang_path to the path/to/clang in your pc.
- Run the python script algo.py with <path_to_c_file> , <function_name> , <key_var_name> as command line arguments
- <path_to_c_file> :  Provide path to the C file here
- <function_name>: name of the C function that u wish to inspect
- <key_var_name> : name of the key variable name that u feel is important and check whether all the variables that are dependent on key data are made 0 at the end of the function

SCREEN SHOT OF THE SAMPLE RUN:

![image](https://user-images.githubusercontent.com/55886366/119981680-87adf600-bfdb-11eb-9f5c-2ab2b05600c9.png)



#### check report.pdf file present in the repository for further details.
