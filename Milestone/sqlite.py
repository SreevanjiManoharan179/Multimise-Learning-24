import sqlite3
import csv

conn = sqlite3.connect('example.db')
cursor = conn.cursor()

cursor.execute('''
CREATE TABLE IF NOT EXISTS table1 (
    id INTEGER PRIMARY KEY,
    name TEXT,
    age INTEGER
)
''')

cursor.execute('''
CREATE TABLE IF NOT EXISTS table2 (
    id INTEGER PRIMARY KEY,
    address TEXT,
    table1_id INTEGER,
    FOREIGN KEY(table1_id) REFERENCES table1(id)
)
''')

def insert_data_from_csv(csv_filename, table_name, columns):
    with open(csv_filename, mode='r') as file:
        reader = csv.DictReader(file)
        for row in reader:
            columns_list = [row[col] for col in columns]
            placeholders = ', '.join('?' * len(columns_list))
            cursor.execute(f'INSERT OR REPLACE INTO {table_name} ({", ".join(columns)}) VALUES ({placeholders})', columns_list)

insert_data_from_csv('table1.csv', 'table1', ['id', 'name', 'age'])
insert_data_from_csv('table2.csv', 'table2', ['id', 'address', 'table1_id'])

conn.commit()

query = '''SELECT table1.id, table1.name, table1.age, table2.address
FROM table1
INNER JOIN table2 ON table1.id = table2.table1_id '''
cursor.execute(query)

rows = cursor.fetchall()

cursor.execute(''' UPDATE table1
SET age = age + 1
''')

conn.commit()

with open('updated_data.csv', mode='w', newline='') as file:
    writer = csv.writer(file)
    writer.writerow(['id', 'name', 'age', 'address'])
    writer.writerows(rows)

print("Updated data:")
for row in rows:
    print(row)

conn.close()
