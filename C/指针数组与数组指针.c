//// 指针数组与数组指针的区别

//指针数组： 存放 n 个指针的数组

char *cp[n];

//如 n = 3, 存放 3 个指针的数组, 3个指针别指向 3个 存放不同长度（char）的字符串

char *cp[3] = { "abcd",
               "abcdefgh",
               "qwertyuiopasdf"
             };

int *ip[4] = { 123,
               3456778,
               9089,
               667899
             };

////数组指针： 指向一系列（ n个,n不确定 ）一维数组[m](确定大小的)的指针

char (*cp)[m]；

//如 m = 5, 

char (*cp)[5] = { "abcd",
                  "zxcv",
                  "vbnm",
                  ......
                  n行
                };

int (*ip)[5] = { {1, 2, 3, 4, 5},
                 {6, 7, 8, 9, 0},
                ......
                  n行
               };






