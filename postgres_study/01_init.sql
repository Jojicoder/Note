CREATE TABLE items (
    id SERIAL PRIMARY KEY,
    name VARCHAR(100) NOT NULL,
    category VARCHAR(50) NOT NULL,
    price NUMERIC(10, 2) NOT NULL
);

INSERT INTO items (name, category, price) VALUES
('Bass Guitar', 'Music', 450.00),
('Eggplant', 'Food', 2.50),
('Whey Protein', 'Fitness', 35.00);

-- データの確認 (Retrieve all data)
SELECT * FROM items;


select id from items;