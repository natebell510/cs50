import csv
with open("books.csv", "a") as file:
    books = []
    for i in range(3):

        book = dict()
        book["title"] = input("Title: ").strip().capitalize()
        book["author"] = input("Author: ").strip().capitalize()
        books.append(book)
        writer = csv.DictWriter(file, fieldnames=["title","author"])
        writer.writerow({"title":book["title"], "author":book["author"]})

    print(books)


