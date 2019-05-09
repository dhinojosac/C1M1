# Coursera Course 1 Final Assessment
## Introduction to Embedded Systems Software and Development Environments 
### Diego Orlando Hinojosa Cordova

### TODOs
[] Implement data.h and data.c.

```
src/course1.c:34:20: error: implicit declaration of function ‘reserve_words’ [-Werror=implicit-function-declaration]
   ptr = (uint8_t*) reserve_words( DATA_SET_SIZE_W );
                    ^~~~~~~~~~~~~
src/course1.c:34:9: error: cast to pointer from integer of different size [-Werror=int-to-pointer-cast]
   ptr = (uint8_t*) reserve_words( DATA_SET_SIZE_W );
         ^
src/course1.c:41:12: error: implicit declaration of function ‘my_itoa’ [-Werror=implicit-function-declaration]
   digits = my_itoa( num, ptr, BASE_16);
            ^~~~~~~
src/course1.c:41:31: error: ‘BASE_16’ undeclared (first use in this function)
   digits = my_itoa( num, ptr, BASE_16);
                               ^~~~~~~
src/course1.c:41:31: note: each undeclared identifier is reported only once for each function it appears in
src/course1.c:42:11: error: implicit declaration of function ‘my_atoi’ [-Werror=implicit-function-declaration]
   value = my_atoi( ptr, digits, BASE_16);
           ^~~~~~~
src/course1.c:47:3: error: implicit declaration of function ‘free_words’ [-Werror=implicit-function-declaration]
   free_words( (uint32_t*)ptr );
   ^~~~~~~~~~
src/course1.c: In function ‘test_data2’:
src/course1.c:63:9: error: cast to pointer from integer of different size [-Werror=int-to-pointer-cast]
   ptr = (uint8_t*) reserve_words( DATA_SET_SIZE_W );
         ^
src/course1.c:70:31: error: ‘BASE_10’ undeclared (first use in this function)
   digits = my_itoa( num, ptr, BASE_10);
                               ^~~~~~~
src/course1.c: In function ‘test_memmove1’:
src/course1.c:93:9: error: cast to pointer from integer of different size [-Werror=int-to-pointer-cast]
   set = (uint8_t*) reserve_words( MEM_SET_SIZE_W );
         ^
src/course1.c: In function ‘test_memmove2’:
src/course1.c:133:9: error: cast to pointer from integer of different size [-Werror=int-to-pointer-cast]
   set = (uint8_t*) reserve_words(MEM_SET_SIZE_W);
         ^
src/course1.c: In function ‘test_memmove3’:
src/course1.c:171:9: error: cast to pointer from integer of different size [-Werror=int-to-pointer-cast]
   set = (uint8_t*)reserve_words( MEM_SET_SIZE_W);
         ^
src/course1.c: In function ‘test_memcopy’:
src/course1.c:212:9: error: cast to pointer from integer of different size [-Werror=int-to-pointer-cast]
   set = (uint8_t*) reserve_words(MEM_SET_SIZE_W);
         ^
src/course1.c:227:3: error: implicit declaration of function ‘my_memcopy’ [-Werror=implicit-function-declaration]
   my_memcopy(ptra, ptrb, TEST_MEMMOVE_LENGTH);
   ^~~~~~~~~~
src/course1.c: In function ‘test_memset’:
src/course1.c:251:9: error: cast to pointer from integer of different size [-Werror=int-to-pointer-cast]
   set = (uint8_t*)reserve_words(MEM_SET_SIZE_W);
         ^
src/course1.c:266:3: error: implicit declaration of function ‘my_memset’ [-Werror=implicit-function-declaration]
   my_memset(ptra, MEM_SET_SIZE_B, 0xFF);
   ^~~~~~~~~
src/course1.c:268:3: error: implicit declaration of function ‘my_memzero’ [-Werror=implicit-function-declaration]
   my_memzero(ptrb, MEM_ZERO_LENGTH);
   ^~~~~~~~~~
src/course1.c: In function ‘test_reverse’:
src/course1.c:300:10: error: cast to pointer from integer of different size [-Werror=int-to-pointer-cast]
   copy = (uint8_t*)reserve_words(MEM_SET_SIZE_W);
          ^
src/course1.c:309:3: error: implicit declaration of function ‘my_reverse’ [-Werror=implicit-function-declaration]
   my_reverse(set, MEM_SET_SIZE_B);
   ^~~~~~~~~~
```
