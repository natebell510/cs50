scores = [72,73,33]
average = sum(scores) / len(scores)
print(f"average: {average}")

scores2 = []
for i in range(3):
    score = get_int("Score: ")
    scores2.append(score)
