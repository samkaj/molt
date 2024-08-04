# Moltlang

Molt is an imperative programming language that is simple, small, and (kind of) fast. The language covers a combination of characteristics I value from other languages. The initial implementation will be written in C with the long term goal of being self-hosted.

The design will mimic Golang's way of doing things in one way, and Rust's elegant handling of closures and iterables. The standard library should be small. One binary, no linking shenanigans. Garbage-collected to leave some room for noobs like me :)

## Features

- Primitive types as in C
- Functions are first class citizens
- Immutability by default
- Private by default
- Methods are struct members
- Iterables with nice syntax sugar

## Structure

- Lexer
- Parser
- Typechecker
- Code generator

> [!NOTE]
> Most of the components will be built from scratch, but since I want to finish this project, the codegen will probably produce either LLVM, Hare or some other compiler architecture IR.

## Development

- Unit tests are done with plain asserts in C
- Language tests are done with bash

## CodeQL

My master's thesis uses CodeQL, so I will use it as part of my CI to learn it and be more confident in my code.
