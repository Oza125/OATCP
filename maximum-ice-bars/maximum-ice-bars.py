def maximum_items(n, items, price):
    items.sort()
    i = 0
    while i < n and price > 0:
        if price < items[i]:
            break
        price -= items[i]
        i += 1
    return i

# Sample test
n = 5
items = [10, 20, 30, 40, 50]
price = 70
result = maximum_items(n, items, price)
print(result)  # Output: 3
