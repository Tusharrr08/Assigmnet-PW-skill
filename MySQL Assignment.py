#1
#A database is an organized collection of structured information, or data, typically stored electronically in a computer system.
#SQL databases are vertically scalable, while NoSQL databases are horizontally scalable. 
#SQL databases are table-based, while NoSQL databases are document, key-value, graph, or wide-column stores.
#SQL databases are better for multi-row transactions, while NoSQL is better for unstructured data like documents or JSON.

#2
# DDL stands for Data definition language is a computer language used to create and modify the structure of database objects in a database

#CREATE is used to create new database or table 
import mysql.connector

mydb=mysql.connector.connect(
    host="localhost",
    user= "abc",
    password="password"
)

mycursor=mydb.cursor()
mycursor.execute("CREATE TABLE infomatic")
mydb.close()

#DROP is used to delete a table
DROP TABLE infomatic

#ALTER is used to modify the existing table for e.g. it used to ADD, DROP, RENAME, column in table
ALTER TABLE infomatic
ADD Email VARCHAR(200)
DROP COLUMN Email
RENAME COLUMN Email to id_password


#TRUNCATE is used to delete all rows in table but it not delete your table defination 
TRUNCATE TABLE infomatic 


#3
#DML stands for Data Manipulation Language. It is a set of SQL statements that are used to manipulate data in a database.

#INSERT is used to insert data in table.
insert into database_name.table_name values(INT, VARCHAR(200), FLOAT,)

#UPDATE is used to update existing data in database 
UPDATE table_name SET City = 'NewDelhi' WHERE S.No = 1

#DELETE is used to delete a row from table
DELETE FROM table_name WHERE S.NO = 1


#4
#DQL stands for Data Query Language that are used to make various queries in information systems and databases. 

#SELECT is used to retrieve data from table or to view data in table 
SELECT * FROM table_name #for all data (*) is used 
SELECT c1, c2 FROM table_name # specific column retrieve


#5
#Primary keys are unique values that identify each row in a table. They cannot be NULL values. Primary keys are used to uniquely identify rows in a table, and they are also used to enforce referential integrity between tables.

#Foreign keys are columns in one table that refer to the primary key of another table. Foreign keys are used to establish a relationship between two tables, and they are also used to enforce referential integrity between tables

#6
import mysql.connector

mydb=mysql.connector.connect(
    host="Host_Name",
    user="User_Name",
    password="password"
)

mycursor=mydb.cursor()
mycursor.execute(operation)
mydb.close()

#The cursor() method is used to create a cursor. A cursor is a pointer to a set of rows in a database. The cursor() method takes a SQL query as a parameter. The cursor will then execute the query and return a cursor object.

#The execute() method is used to execute a SQL query. The execute() method takes a SQL query as a parameter. The cursor will then execute the query and return the results of the query.

#7
#FROM and JOIN clauses: The FROM and JOIN clauses are executed first to determine the data of interest.

#WHERE clause: The WHERE clause is executed to filter out records that do not meet the constraints.

#GROUP BY clause: The GROUP BY clause is executed to group the data based on the values in one or more columns.

#HAVING clause: The HAVING clause is executed to remove the created grouped records that don't meet the constraints.

#SELECT clause: The SELECT clause is executed to derive all desired columns and expressions.

#ORDER BY clause: The ORDER BY clause is executed to sort the derived values in ascending or descending order.

#LIMIT/OFFSET clauses: Finally, the LIMIT and/or OFFSET clauses are executed to keep or skip a specified number of rows.
