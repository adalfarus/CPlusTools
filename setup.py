from setuptools import setup, Extension

setup(
    name='cplustools',
    ext_modules=[
        Extension('cplustools.example', ['cplustools/example.pyx', 'cplustools/example.c'])
    ],
)
