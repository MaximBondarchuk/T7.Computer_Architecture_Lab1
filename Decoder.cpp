//
// Created by max on 14.09.15.
//

#include "Decoder.h"

Decoder::Decoder() {
    alphabet = vector<morse_symbol>();

    alphabet.push_back(morse_symbol("A", ".-"));
    alphabet.push_back(morse_symbol("B", "-..."));
    alphabet.push_back(morse_symbol("C", "-.-."));
    alphabet.push_back(morse_symbol("D", "-.."));
    alphabet.push_back(morse_symbol("E", "."));
    alphabet.push_back(morse_symbol("F", "..-."));
    alphabet.push_back(morse_symbol("G", "--."));
    alphabet.push_back(morse_symbol("H", "...."));
    alphabet.push_back(morse_symbol("I", ".."));
    alphabet.push_back(morse_symbol("J", ".---"));
    alphabet.push_back(morse_symbol("K", "-.-"));
    alphabet.push_back(morse_symbol("L", ".-.."));
    alphabet.push_back(morse_symbol("M", "--"));
    alphabet.push_back(morse_symbol("N", "-."));
    alphabet.push_back(morse_symbol("O", "---"));
    alphabet.push_back(morse_symbol("P", ".--."));
    alphabet.push_back(morse_symbol("Q", "--.-"));
    alphabet.push_back(morse_symbol("R", ".-."));
    alphabet.push_back(morse_symbol("S", "..."));
    alphabet.push_back(morse_symbol("T", "-"));
    alphabet.push_back(morse_symbol("U", "..-"));
    alphabet.push_back(morse_symbol("V", "...-"));
    alphabet.push_back(morse_symbol("W", ".--"));
    alphabet.push_back(morse_symbol("X", "-..-"));
    alphabet.push_back(morse_symbol("Y", "-.--"));
    alphabet.push_back(morse_symbol("Z", "--.."));

    alphabet.push_back(morse_symbol("1", ".----"));
    alphabet.push_back(morse_symbol("2", "..---"));
    alphabet.push_back(morse_symbol("3", "...--"));
    alphabet.push_back(morse_symbol("4", "....-"));
    alphabet.push_back(morse_symbol("5", "....."));
    alphabet.push_back(morse_symbol("6", "-...."));
    alphabet.push_back(morse_symbol("7", "--..."));
    alphabet.push_back(morse_symbol("8", "---.."));
    alphabet.push_back(morse_symbol("9", "----."));
    alphabet.push_back(morse_symbol("0", "-----"));
}

string Decoder::encode_one_symbol(string symbol) {
    for (unsigned int i = 0; i < alphabet.size(); i++)
        if (alphabet[i].symbol == symbol)
            return alphabet[i].code;

    return "";
}

string Decoder::decode_one_symbol(string code) {
    for (unsigned int i = 0; i < alphabet.size(); i++)
        if (alphabet[i].code == code)
            return alphabet[i].symbol;

    return "";
}

string Decoder::decode(string code) {
    size_t pos_word;
    while ((pos_word = code.find("       ")) != string::npos) {
        string word = code.substr(0, pos_word);
        cout << word << endl;
        code.erase(0, pos_word + 7);
    }

    return "";
}


string Decoder::encode(string symbol) {
    return "";
}

string Decoder::decode_with_split(string word, string split_by) {
    return "";
}
