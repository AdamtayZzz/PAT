# PAT 
## Basic Level
### 1001 害死人不偿命的(3n+1)猜想
思路： 利用循环对数字进行奇偶判断后，对其值不断进行修改即可
### 1002 写出这个数
思路： 10^100数据远超int/long范围，采用字符串存数据，将字符转为数字求和。
       预先建立数字0-9和汉字输出的映射，避免最终求和结果每一位进行10次if判断。
注意： 要注意最后一个汉字输出时，没有多余空格。
### 1004 成绩排名
思路： 一系列变量存储最大、最小值，循环每次输入一组数据后分别与最大、最小分数比较，
       若更大/更小，修改其对应变量即可。
