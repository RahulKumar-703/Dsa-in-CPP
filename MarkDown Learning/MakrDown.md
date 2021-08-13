<!-- 
AS We Write <h1> to <h6> Tag In HTML Here we Denote Heading with #
 -->

# Heading 1
## Heading 2
### Heading 3
### Heading 4
#### Heading 5
##### Heading 6

<!-- 
if We Write More Than 6 '#' It Will be Written As A Normal Text
 -->

 ####### Heading 7 

 Normal Text

 <!--
 For Making Text Italic
 '*Your Text* or _Your Text_ is used'
  -->

 _Italic_ text 

 *Italic* text

 <!--
 For Making Text Bold
 '**Your Text** or __Your Text__ is used'
  -->

 __Bold__ text 

 **Bold** text

 <!--
 For Creating A Strike trough Text 
 '~~Your Text~~ is used'
  -->

 ~~Striked Through~~ text 

 <!-- 
 For creating a horizontal line
  '___ or ---' is used
 -->

  Above The Line
  ___
  ---
  Under The Line

  <!-- For Writing A Quote We Use '>' -->

  > This is A Quote

<!-- for nesting We Can increase Number Of '>' -->
>GrandParent
>>Parent
>>>Child
>>>> Further More...

<!-- For Adding A Link We Use [Text](your link) -->

[Google Link](www.google.com)

<!-- We Can Also Add Hover Text Like this 
    [Text](your link
        "on hover text")
-->

[Link](www.google.com
        "Google")

<!--
For Higlighting or Quoting a Line we use `Your Text` 
-->
`Higlited Line`

<!-- Creating An Unordered List and Nested Unordered List we use '* Text'
-->
* List Item 1
* List Item 2
    * Nested Item
        * Further Nested
            * Again Nested

<!-- Creating An Ordered List and Nested Ordered List we use 
'1. Text'
-->
1. List Item 1
1. List Item 2
    1. Nested Item
        1. Further Nested
            1. Again Nested

<!-- For Creating Table -->
<!-- First And Last '|' Is Optional -->

| s.n | Name  | Email             |
| --- | ----  | ----------------- |
| 0   | Rahul | Rahul@example.com |
| 1   | User  | User@example.com  |

<!-- 
For Adding A Image We Use 
"![altName](image Location
        'Hover Text')" 
-->

![Linux Logo](https://th.bing.com/th/id/OIP.Ffjg9Htjm6oqiHlH9ch1NgHaHa?w=180&h=180&c=7&o=5&dpr=1.25&pid=1.7
    'Logo Image')


<!-- Some GitHub Syntax 
    We Can Write Any Language Code In Md Like An Editor
 -->
<!-- For Bash Command -->

```bash
# Comment
npm install

npm start

```
<!-- For JavaScript Command -->

```javascript
// Commment
var x = document.getElementByID('ID');

x.innerHTML = 'Content';
for(var i = 0; i< 5; i++)
{
    console.log(i);
}

```
<!-- For python Command -->

```python
# Comment
function name(x,y):
    return x+y
name(4+5)

```
<!-- For Cpp Command -->

```Cpp
// Comment
#include<iostream>
int main()
{
    cout << "This Is C++"

    return 0;
}

```

<!-- For Creating CheckBox List -->
* [ ] Undone Task / Not Bought Item
* [ ] Undone Task / Not Bought Item

* [x] Done Task / Bought Item
* [x] Done Task / Bought Item
