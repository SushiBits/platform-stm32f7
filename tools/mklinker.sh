#!/bin/bash

while read name rom ram junk; do
    cat << EOF > $name.ld
MEMORY
{
    CCM     (rwx) : ORIGIN = 0x00000000, LENGTH = 16k
    IROM    (r x) : ORIGIN = 0x02000000, LENGTH = ${rom}k
    IRAM    (rwx) : ORIGIN = 0x20000000, LENGTH = ${ram}k
}

INCLUDE $1.ld
EOF
done
