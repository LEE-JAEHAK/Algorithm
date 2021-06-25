student_tuples = [
    ('john', 'A', 15),
    ('jane', 'B', 12),
    ('dave', 'B', 10),
]

a = sorted(student_tuples, key=lambda b: b[2])
print(a)
c = sorted(student_tuples, key=lambda b:b[1])
print(c)