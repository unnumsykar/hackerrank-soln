from spellchecker import SpellChecker

spell = SpellChecker()

while True:
    word = input("Enter the word")
    word = word.lower()

    if word in spell:
        print(f"{word} is spelled correctly !")
    else:
        correctwords = spell.correction(word)
        print(f"The better suggestion for {word} is {correctwords}")