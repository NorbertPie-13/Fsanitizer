# Fsanitizer
Describe and discuss Address Sanitizer with examples.
## Table of Contents

[Purpose](#purpose)<br>
[What is Address Sanitizer?](#what-is-address-sanitizer)
[About Me](#about_me)<br>


## Purpose
- The purpose of this repo is to inform the use case of the GCC compiler flag known as Address Sanitizer.

## What is Address Sanitizer?
- Address Sanitizer was originally made by Google to expedite secure coding practices by reporting errors such as "Use after free" and "Access Null Value".
- After finding its use to be successful and identifying several issues in the developers code, it was eventually built into the GCC standard library.

### Supported Systems
Chart uploaded from AddressSanitizer by google (https://github.com/google/sanitizers/wiki/AddressSanitizer)
<img src="./images/support_chart"><br>

### Reporting Errors Supported
- Use after free
- Heap buffer overflow
- Stack buffer overflow
- Global buffer overflow
- Use after return
- Use after scope
- Initialization order bugs
- Memory Leaks
