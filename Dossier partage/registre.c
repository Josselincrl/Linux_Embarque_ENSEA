#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/mman.h>
#include <stdint.h>

#define GPIO_LED_ADDR 0xFF203000

int main(void)
{
    uint32_t * p;
    int fd = open("/dev/mem", O_RDWR);
    p = (uint32_t*)mmap(NULL, 4, PROT_WRITE|PROT_READ, MAP_SHARED, fd, GPIO_LED_ADDR);
    *p = (1<<6);
}