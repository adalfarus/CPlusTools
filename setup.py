from setuptools import setup, Extension

# Define the extension module
extension_mod = Extension('cplustools',
                      sources=['cplustools/cpp/Module.cpp', 'cplustools/cpp/DataFunctions.cpp'],
                      include_dirs=[r'C:\Users\till_\AppData\Local\Programs\Python\Python312\include'],
                      extra_compile_args=['/std:c++20'])

setup(
    name='Cplustools',
    version='1.0',
    description='A custom C++ extension for Python',
    ext_modules=[extension_mod],
)
