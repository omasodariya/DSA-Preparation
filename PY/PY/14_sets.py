# sets are unordered, unindexed and No duplicate values

utensils={"fork","spoon","knife"}
dishes={"bowl","cup","plates","knife"}

# utensils.add("Napkin")
# utensils.remove("fork")
# utensils.clear()

# utensils.update(dishes)
# dishes.update(utensils)

# for x in dishes:
#     print(x)

dinner_table=utensils.union(dishes)

# for x in dinner_table:
#     print(x)

# print(utensils.difference(dishes))
# print(dishes.difference(utensils))
# print(dishes.union(utensils))

print(utensils.intersection(dishes))

