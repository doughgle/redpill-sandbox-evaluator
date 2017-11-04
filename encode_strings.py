import sys
import re
f = open(sys.argv[1])
for line in f:
    tokens = line.split('"')
    if len(tokens) > 1:
        tokens[1] = tokens[1].encode('zip')
        print '"'.join(tokens)
    else:
        print line

f.close()
