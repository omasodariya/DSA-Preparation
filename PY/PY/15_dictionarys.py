# dictionary: A changeable, unordered collection of unique key:value pair 
                # Fast because they use hashing allow us to access value quickly

capitals={
        "India":"New Delhi",
        "China":"Beijing",    
        "USA":"Washington DC",
        "Russia":"Moscow"

}

capitals.update({"Germany":"Berlin"})
capitals.update({"USA":"New York"})
capitals.pop("China")

# print(capitals)
# print(capitals["Japan"])
print(capitals.get("Japan"))
print(capitals.get("USA"))
# print(capitals.values())
# print(capitals.keys())
# print(capitals.items())

# for key,values in capitals.items():
    # print(key+" : "+values)

# for x,y in capitals.items():
#     print(x,y)