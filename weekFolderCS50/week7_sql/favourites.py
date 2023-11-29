import csv

with open("favourites.csv", 'r') as file:
    reader = csv.DictReader(file)
    counts = {}
    friends, black_mirror, big_bang_theory = 0, 0, 0
    for row in reader:
        favorite = row["title"]
        if favorite in counts:
            counts[favorite] += 1
        else:
            counts[favorite] = 1


def get_value(language):
    return counts[language]


#for favorite in sorted(counts, key=lambda language: counts[language], reverse=True):
    #print(f"{favorite}: {counts[favorite]}")


#from cs50 import SQL

