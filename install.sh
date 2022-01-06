#!/bin/bash

cat .git/refs/remotes/origin/master | git show --no-patch --no-notes --pretty='%cd' | cat > include/timestmp

CPP_FLAG="-Wall -Wextra -std=c11 -pedantic"
gcc $CPP_FLAG src/kodo.c -o src/kodo

INST_DIR="${XDG_DATA_HOME-$HOME/.local/share}/kodo"
mkdir -p $INST_DIR
cp src/kodo ${INST_DIR}
cd ${INST_DIR}

cp kodo /usr/bin