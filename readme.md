#  Simple HTTPRequest & Json Parsing Test

##  Overview

Downloads dummy json content from https://dummyjson.com/products and groups 'products' array
members by 'category'. For each category displays the given product's 'id' & 'title'.

No proper error handling implemented as the sole goal of the project was to quickly make a
tool that does the requested task while providing a dense yet readable implementation.


##  Dependencies

[C++ Requests](https://github.com/libcpr/cpr.git) used for easy downloading
[JsonCpp](https://github.com/open-source-parsers/jsoncpp) for quick parsing


##  Usage

CMake based project! C++20 requested by the project, whoever expected to work with C++17
(structured bindig)

Example usage..
```
cmake -S . -B build -GNinja -DCMAKE_BUILD_TYPE=RELEASE
cmake --build
```

**Warning**, no install target defined for the executable target!


##  Output

Expected output:

```
$ parse.exe
Category: fragrances
        11 - "perfume Oil"
        12 - "Brown Perfume"
        13 - "Fog Scent Xpressio Perfume"
        14 - "Non-Alcoholic Concentrated Perfume Oil"
        15 - "Eau De Perfume Spray"
Category: groceries
        21 - "- Daal Masoor 500 grams"
        22 - "Elbow Macaroni - 400 gm"
        23 - "Orange Essence Food Flavou"
        24 - "cereals muesli fruit nuts"
        25 - "Gulab Powder 50 Gram"
Category: home-decoration
        26 - "Plant Hanger For Home"
        27 - "Flying Wooden Bird"
        28 - "3D Embellishment Art Lamp"
        29 - "Handcraft Chinese style"
        30 - "Key Holder"
Category: laptops
        6 - "MacBook Pro"
        7 - "Samsung Galaxy Book"
        8 - "Microsoft Surface Laptop 4"
        9 - "Infinix INBOOK"
        10 - "HP Pavilion 15-DK1056WM"
Category: skincare
        16 - "Hyaluronic Acid Serum"
        17 - "Tree Oil 30ml"
        18 - "Oil Free Moisturizer 100ml"
        19 - "Skin Beauty Serum."
        20 - "Freckle Treatment Cream- 15gm"
Category: smartphones
        1 - "iPhone 9"
        2 - "iPhone X"
        3 - "Samsung Universe 9"
        4 - "OPPOF19"
        5 - "Huawei P30"
```
