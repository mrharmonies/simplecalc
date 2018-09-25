# simplecalc
A very simple REPL calculator made with only 29 line of ANSI C code for learning purpose. The code demonstrating uses of typedef, struct, and simple string parsing in C programming. To use simplecalc, just follow this format:
```
(number) (operator) (number)
```
and then press return. simplecalc only supporting addition, multiplication, division and substraction.

# example
```
> 3.142+11
      =14.142000
> 51/11
      =4.636364
> 42*512
      =21504.000000
> 99999*99
      =9899901.000000
```

# compilation
Just compile the main source file ```calc.c``` with your favorite C compiler, e.g ```gcc -o calc calc.c```

# license
MIT License

Copyright (c) 2018 Mohd Kholid Yaacob

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
