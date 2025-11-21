## Week 5

This week’s assignment covers:

### Module 6 – Strings and Classes (Item + File I/O)

**File:** `module6_item.cpp`  
- Defines an `Item` class with:
  - `string name`
  - `int quantity`
  - `void saveToFile()` – writes item data to `items.txt` in the format `name,quantity`
  - `void loadFromFile()` – reads from `items.txt` and prints each line
- In `main()`, an `Item` object is created, values are assigned, and both methods are called to save and display the item data.

To run:
1. Compile: `g++ module6_item.cpp -o module6_item`
2. Run: `./module6_item`

---

### Module 11 – Advanced Classes (Constructors & Destructors)

**File:** `module11_product.cpp`  
- Defines a `Product` class with private attributes:
  - `int id`
  - `string name`
  - `float price`
- Constructor initializes the attributes and prints `"Constructor called"`.
- Destructor prints `"Destructor called"` when the object is destroyed.
- `void printDetails()` prints the product’s ID, name, and price.

To run:
1. Compile: `g++ module11_product.cpp -o module11_product`
2. Run: `./module11_product`
