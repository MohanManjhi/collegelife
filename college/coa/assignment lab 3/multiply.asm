## Program to Multiply two and three 
        .text
        .globl  main

main:
        ori     $8,$0,0x2       # put two's comp. two into register 8
        ori     $9,$0,0x3       # put two's comp. three into register 9
        mul    $10,$8,$9        # multiply register 8 and 9, put result in 10
