#!/bin/bash
g++ -o compiled $(find . -regex '.*/.*\.\(c\|cpp\|h\)$')
