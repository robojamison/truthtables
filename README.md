# TruthTables

TruthTables is a command-line utility for students of formal logic that generates truth tables for logical statements 
and can evaluate the logical equivalency of one or more such statements.

## Formal Logic

"Formal logic" is a mathematical term for the logical principles that govern our everyday decision-making and reasoning 
skills. An example of a formal logical statement is:

<em>p</em> → <em>q</em>

This is read as "<em>p</em> implies <em>q</em>", where <em>p</em> and <em>q</em> are two arbitrary scenarios. We don't 
know what they are or how they interact with each other, but we know that if <em>p</em> happens then <em>q</em> must 
also happen by the logical statement given above.

Logical statements can contain many different types of operators.

| Symbol | Text | Meaning | Example                                                                  |
| ------ | ---- | ------- | ------------------------------------------------------------------------ |
| ^      | ^    | and     | <em>p</em> ^ <em>q</em> (read as "<em>p</em> and <em>q</em>")            |
| v      | v    | or      | <em>p</em> v <em>q</em> (read as "<em>q</em> or <em>q</em>")             |
| ~      | ~    | not     | ~<em>p</em> (read as "not <em>p</em>")                                   |
| ≡      | ===  | iff     | <em>p</em> ≡ <em>q</em> (read as "<em>p</em> if and only if <em>q</em>") |
| →     | ->    | implies | <em>p</em> → <em>q</em> (read as "<em>p</em> implies <em>q</em>")        |

Those interested in learning more about formal logic and its uses are encouraged to read the Wikipedia article on 
[Mathematical logic](http://en.wikipedia.org/wiki/Mathematical_logic).

## Downloading

Compiled versions of TruthTables will be uploaded to the [Releases](https://github.com/robojamison/truthtables/releases)
page as they are released. These releases should support most operating systems (TruthTables is designed to be as 
OS-agnostic as possible). 

Alternatively, you may [clone the repository](https://github.com/robojamison/truthtables.git) if you wish to examine the 
TruthTables source code or compile it for yourself.

## Usage

Once you have obtained a copy of TruthTables, simply open a command-line terminal and change into the directory where
the compiled TruthTables binary file is located, then execute it. If you run TruthTables without any command-line 
parameters, it will run interactively and will prompt you for any information it needs.

If you wish to run TruthTables automatically (instead of interactively), simply append the required parameter switches 
and their arguments to the TruthTables execution command.

| Switch    | Description                             | Argument | Required? | Default |
| --------- | --------------------------------------- | -------- | --------- | ------- |
| `--debug` | Writes debug information to the console | Y/N      | N         | N       |
| `--input` | Logical statement to evaluate           | string   | Y         | N/A     |

## Troubleshooting

TruthTables is still in alpha, and so it is very likely to contain bugs and/or errors. If you encounter a problem with
TruthTables, first try to diagnose it by taking the following steps:

* Ensure that your input does not contain any invalid characters. TruthTables recognizes the lower- and upper-case 
    letters of the English alphabet, as well as the logical operators identified above (and spaces).

* Ensure that your statement is a valid logical statement. This doesn't mean you have to evaluate it yourself, but do 
    make sure that you didn't enter something like `p ~=^v q`, which is gibberish.

* Finally, re-run the program with the same input with the `--debug` flag. The debug information that will be printed
    to the console may provide a solution to the problem.

If the issue persists, please file a bug report on the [Issues](https://github.com/robojamison/truthtables/issues) page.
When filing a bug report please be as descriptive as possible, and please follow the Mozilla Developer Network's
[Bug Writing Guidelines](https://developer.mozilla.org/en-US/docs/Mozilla/QA/Bug_writing_guidelines)!

## License

**The MIT License (MIT)**

Copyright (c) 2014 Jamison Bryant

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated
documentation files (the "Software"), to deal in the Software without restriction, including without limitation the
rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit
persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the
Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE
WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR
OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

## Credits

**Jamison Bryant**  
Lead Developer  
robojamison@gmail.com
