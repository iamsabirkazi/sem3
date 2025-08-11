from itertools import islice

def chunked(iterable, size):
    iterator = iter(iterable)
    while True:
        chunk = list(islice(iterator, size))
        if not chunk:
            break
        yield chunk

data = [1, 2, 3, 4, 5]
chunks = list(chunked(data, 3))
print(chunks)