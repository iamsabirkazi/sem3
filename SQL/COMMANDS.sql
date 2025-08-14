--create a table:
CREATE TABLE table_name
( column_name1 DATA_TYPE(SIZE),
  column_name2 DATA_TYPE(SIZE),
  column_name3 DATA_TYPE(SIZE),
  column_name4 DATA_TYPE(SIZE)
);

--describimg a table
DESC table_name;

--adding new column
ALTER TABLE table_name
ADD ( column_name DATA_TYPE(SIZE));

--adding multiple column
ALTER TABLE table_name
ADD ( column_name1 DATA_TYPE(SIZE),
      column_name2 DATA_TYPE(SIZE),
      column_name3 DATA_TYPE(SIZE)
);

--droping column
ALTER TABLE table_name
DROP COLUMN column_name;

--modifying column size
ALTER TABLE table_name
MODIFY ( column_name1 DATA_TYPE(SIZE));

--renaming existing column
ALTER TABLE table_name
RENAME COLUMN existing_column TO new_column;

--inserting data into specified column using value method
INSERT INTO table_name (column_name1, column_name2, column_name3) VALUES (value1,value2,value3);

--inserting data without specifying column
INSERT INTO table_name VALUES (value1,value2,value3);

--using address method use ('') single quote for string value
INSERT INTO table_name VALUES ('&value1',&value2,&value3);

--select column and all rows 
SELECT column_name1, column_name2 FROM table_name;

--select all column and all rows 
SELECT * FROM table_name;

--select column for specific record 
SELECT column_name1, column_name2 FROM table_name WHERE column_name = VALUE;

--update 
UPDATE table_name
SET column_name = new_value
where column_name = value;

--delete 
DELETE FROM table_name WHERE column_name = value;