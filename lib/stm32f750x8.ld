MEMORY
{
    CCM     (rwx) : ORIGIN = 0x00000000, LENGTH = 16k
    IROM    (r x) : ORIGIN = 0x02000000, LENGTH = 64k
    IRAM    (rwx) : ORIGIN = 0x20000000, LENGTH = 320k
}

INCLUDE cortex-m7.ld.ld
