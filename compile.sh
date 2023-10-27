#!/bin/bash
g++ -o build $(find . -regex '.*/.*\.\(c\|cpp\|h\)$')
