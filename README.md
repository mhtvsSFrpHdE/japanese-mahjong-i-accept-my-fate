# japanese-mahjong-i-accept-my-fate
**Or called "Ramdom Janshi(雀士)"**

A program to help you to kill yourself when you can't find or calculate safe tiles in defense.

It will generate random numbers from 1 to 14,

then you discard the number repersented tile whatever what it is, you bet, you pay.

The random number update once a second in current algorithm.

**How to use**

- If no naki happen, discard tiles from left to right simply.
- If naki-ed, discard tiles from right to left, each naki treat as *3(include kan) then subtrack from numbers.

  Formula: 14 - (naki * 3, or tiles number left in your hand) - (random number)
  ```
  If result is positive number, discard from left to right,
  if result is negative number, discard from right to left.
  ```
  
**Why**

  Compare to manual calculate tiles by method documented on popular mahjong wiki(suji, kabe, etc),
  
  ramdom janshi provide you a way to solve the problem in probability.
  
  In macroscopically, it has an expected probability to lose the game each time you decided a tile by program.
  
  Different people's calculate ability is different level,
  
  even a calculate master can be deceive by an ulterior opponent.
  
  With random janshi, it not gonna to affected by anyone.
  
  You opponents can't use their trick to put you down, this is a completely fair-minded coin toss game between you.
