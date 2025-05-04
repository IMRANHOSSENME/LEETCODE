def convert(s: str, numRows: int) -> str:
    if numRows == 1:
        return s

    ans = [''] * numRows
    crow = 0
    down = False

    for c in s:
        ans[crow] += c

        if crow == 0:
            down = True
        elif crow == numRows - 1:
            down = False

        crow += 1 if down else -1

    return "".join(ans)

# Test
s = "PAYPALISHIRING"
numRows = 3
print(convert(s, numRows))  # Output: "PAHNAPLSIIGYIR"
