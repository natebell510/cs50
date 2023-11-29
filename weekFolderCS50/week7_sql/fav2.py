from cs50 import SQL

db = SQL("sqlite:///fav.db")

favorite = input("Favorite: ")

rows = db.execute("SELECT * FROM fav where title = 'The Office'")
#rows = db.execute("SELECT * FROM fav where title = ?", id);




for row in rows:
    print(row["Timestamp"])


rows2 = db.execute("SELECT COUNT(*) AS n FROM fav where title = 'The Office'")
row2 = rows2[0]
print(row2["n"]) #row2[0]["n"]






