
# Work Report

## Name: Robin Lee Simpson

## Features:

- Not Implemented:

<br><br>

- Implemented:
  - constants
  - Stokenizer
  - Token
  - State Machine
  - Ftokenizer

<br><br>

- Partly implemented:

<br><br>

- Bugs
  - ~~Segmentation failure~~ Resolved
  - ~~File Tokenizer producing garbage~~ Resolved
  - ~~Not reading last token in file~~ Resolved

<br><br>

# Reflections:

- Made lots of little mistakes
- Learned to debug things one at a time due to bug fixes and time
- Learned about state machines and how to set them up correctly
- How to keep track of position and important variables
- How much time it can take to fix and discover a tiny mistake


# Log:
- 9/15/21 - Started on project
- 9/16/21 - Finished State machine functions and constants
- 9/18/21 - Updated make_table and token
- 9/18/21 - Updated Stokenizer
- 9/19/21 - Added to make table
- 9/20/21 - Finished make table to a proper state machine
- 9/20/21 - First iteration of get token
- 9/20/21 - Semi functioning get token achieved
- 9/21/21 - Get token produces 1 big token
- 9/21/21 - Tokenizer ignores pi
- 9/21/21 - Tokenizer reads individual characters
- 9/21/21 - Tokenizer fixed, works except for leading decimals
- 9/21/21 - Fixed Operator for stokenizer
- 9/21/21 - Updated FTokenizer
- 9/22/21 - Fixed stubs
- 9/22/21 - Fixed return type on stokenizer
- 9/22/21 - Bug fix! Did not initialize _pos caused segmentation failure
- 9/23/21 - First iteration of FTokenizer
- 9/24/21 - Ftokenizer only tokenizes 1 block
- 9/24/21 - Ftokenizer only tokenizes 1 char per block
- 9/24/21 - Ftokenizer update to work
- 9/24/21 - Fixed statemachine spaces and negative values not being caught
- 9/24/21 - Fixed space declaration
- 9/25/21 - Fixed negative index issues
- 9/26/21 - Fixed not reading last token in ftokenizer!



# **output**

<br/><br/>

# basic_test.cpp output:

solitude.txt

![basic](https://i.imgur.com/OwI8Bml.png)


<br/><br/><br/><br/>

# testB.cpp output:


![testB](https://i.imgur.com/da4gfUy.png)
![testB](https://i.imgur.com/bDdAjjX.png)
![testB](https://i.imgur.com/UqPkhvY.png)
![testB](https://i.imgur.com/FzY8pFa.png)
![testB](https://i.imgur.com/YmRkZfR.png)
![testB](https://i.imgur.com/HQAZ10L.png)
![testB](https://i.imgur.com/EtUfNA5.png)
![testB](https://i.imgur.com/b84wYPB.png)
![testB](https://i.imgur.com/KswkpHF.png)
![testB](https://i.imgur.com/UqII2FY.png)

<br/><br/><br/><br/>



