#!/bin/bash
# Install this tool
# https://kimiyuki.net/blog/2017/01/19/pr-online-judge-tools/
filename=$1
if [ ! -e ${filename} ]
then
    echo "${filename} is not found."
    exit 1
fi
tmp=${filename#*_}
num=${tmp%%_*}
if [ -e test ]
then
    rm -rf test
fi
# lesson/2/ITP1
# lesson/1/ALDS1
# lesson/8/ITP2
# library/3/DSL
# library/7/DPL
# library/5/GRL
# library/4/CGL
# library/6/NTL

if [[ ${filename%%_*} = "ITP1" ]]
then
    oj dl https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/${filename%%_*}/${num}/${filename%.*}
elif [[ ${filename%%_*} = "ALDS1" ]]
then
    oj dl https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/${filename%%_*}/${num}/${filename%.*}
elif [[ ${filename%%_*} = "ITP2" ]]
then
    oj dl https://onlinejudge.u-aizu.ac.jp/courses/lesson/8/${filename%%_*}/${num}/${filename%.*}
elif [[ ${filename%%_*} = "DSL" ]]
then
    oj dl https://onlinejudge.u-aizu.ac.jp/courses/lesson/3/${filename%%_*}/${num}/${filename%.*}
elif [[ ${filename%%_*} = "DPL" ]]
then
    oj dl https://onlinejudge.u-aizu.ac.jp/courses/lesson/7/${filename%%_*}/${num}/${filename%.*}
elif [[ ${filename%%_*} = "GRL" ]]
then
    oj dl https://onlinejudge.u-aizu.ac.jp/courses/lesson/5/${filename%%_*}/${num}/${filename%.*}
elif [[ ${filename%%_*} = "CGL" ]]
then
    oj dl https://onlinejudge.u-aizu.ac.jp/courses/lesson/4/${filename%%_*}/${num}/${filename%.*}
elif [[ ${filename%%_*} = "NTL" ]]
then
    oj dl https://onlinejudge.u-aizu.ac.jp/courses/lesson/6/${filename%%_*}/${num}/${filename%.*}
else
    echo "The courses is not found."
    exit 1
fi

g++-10 -std=c++14 -Wall -O2 ${filename}
# # debug
# # g++-8 -std=c++14 -Wall -g -fsanitize=undefined -D_GLIBCXX_DEBUG ${filename}
oj test
rm a.out
