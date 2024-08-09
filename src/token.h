#pragma once

enum TokenType {
    Number,
    Identifier,
    Equals,
    OpenParen,
    CloseParen,
    BinaryOp,
    Let,
};

struct Token {
    char* value;
    enum TokenType type;
};
