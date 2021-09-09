"""
Given the names and grades for each student in a class of students, store them in a nested list and print the name(s) of any student(s) having the second lowest grade.
Sample Input 0

5
Harry
37.21
Berry
37.21
Tina
37.2
Akriti
41
Harsh
39

Sample Output 0

Berry
Harry


"""

if __name__ == '__main__':
    marks = []
    for _ in range(int(input())):
        name = input()
        score = float(input())
        n = [score, name]
        marks.append(n)
    marks.sort()
    m = marks[0][0]
    # print(m)
    count = 0
    for i in marks:
        if m == i[0]:
            count += 1

    for i in range(count):
        marks.remove(marks[0])

    # print(marks)
    z = marks[0][0]
    for i in marks:
        if z in i:
            print(i[1])
