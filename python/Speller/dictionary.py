# Words in dictionary
words = {}


def check(word):
    """Return true if word is in dictionary else false"""
    #TODO

def load(dictionary):
    """Load dictionary into memory, returning true if successful else false"""
    file = open(dictionary, "r")
    for line in file:
        word = line.rstrip()
        #TODO: add word to dictionary words

    file.close()
    return True


def size():
    """Returns number of words in dictionary if loaded else 0 if not yet loaded"""
    #TODO
