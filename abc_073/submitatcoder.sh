#!/bin/bash
filename=$1
if [ ! -e ${filename} ]
then
    echo "${filename} is not found."
    exit 1
fi
echo ${filename%.*}
echo ${filename%_*}
echo "compile ${filename}..."

g++-8 -std=c++14 -Wall -O2 ${filename}
# debug
# g++-8 -std=c++14 -Wall -g -fsanitize=undefined -D_GLIBCXX_DEBUG ${filename}
if [ -e test ]
then
    rm -rf test
fi
oj dl https://atcoder.jp/contests/${filename%_*}/tasks/${filename%.*}
oj test
# echo "Could i submit this code?[Y/n]"
# read str
# case "${str}" in
#     [Yy]|[Yy][Ee][Ss])
#         echo "OK! I'll start submit!!!"
#         oj submit https://atcoder.jp/contests/${filename%_*}/tasks/${filename%.*} ${filename} --language c++14
#         ;;
#     [Nn]|[Nn][Oo])
#         echo "See you!!!"
#         ;;
#     *)
#         echo "This input is undefined";;
# esac

oj submit https://atcoder.jp/contests/${filename%_*}/tasks/${filename%.*} ${filename} --language c++14
rm a.out
