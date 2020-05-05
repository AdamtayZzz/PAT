# PAT 
## Basic Level
### 1001 害死人不偿命的(3n+1)猜想
思路： 利用循环对数字进行奇偶判断后，对其值不断进行修改即可
### 1002 写出这个数
思路： 10^100数据远超int/long范围，采用字符串存数据，将字符转为数字求和。  
       预先建立数字0-9和汉字输出的映射，避免最终求和结果每一位进行10次if判断。  
注意： 要注意最后一个汉字输出时，没有多余空格。
### 1003 我要通过
思路： 循环字符串，若有非PAT字符直接输出 “NO”。记录到P前A的个数k1，P到T中间A的个数k2，T后A的个数k3。  
       如果k2为0，输出“NO”。将k2逐个减1，k3逐个减k1，若到K2为1时，k1=k3，则输出“YES”。  
补充： （别人的思路）正确的为 K1*K2=K3
### 1004 成绩排名
思路： 一系列变量存储最大、最小值，循环每次输入一组数据后分别与最大、最小分数比较。  
       若更大/更小，修改其对应变量即可。
### 1005 (3n+1)猜想继续
思路： 定义一个大数组，如10000长度，来定义覆盖情况。每次遍历一个数，将其覆盖数组对应下标元素设为1。  
       若当前以为1，代表其他数字已经计算过覆盖情况，不需要再重新验证覆盖情况。最后将没有覆盖的输出即可。
### 1006 换个格式输出整数
思路： 利用while循环获得每一位的数值；利用count判断正在处理个位/十位/百位，在不同位执行不同的insert操作。  
       提前建立好 1-9字符数组，便于个位数插入。
### 1007 质数对猜想
质数特点： 首先 6x 肯定不是质数，因为它能被 6 整除；其次 6x+2 肯定也不是质数，因为它还能被2整除；  
          依次类推，6x+3 肯定能被 3 整除；6x+4 肯定能被 2 整除。那么，就只有 6x+1 和 6x+5 (即等同于6x-1) 可能是质数了。  
          所以循环的步长可以设为 6，然后每次只判断 6 两侧的数即可。  
思路： 注意3，5也是质数对，依次遍历知道6*k+1>=n停止；  
       通过sqrt后从2开始遍历，判断其是否为质数。  
### 1008 数组元素循环右移问题
思路： 先对循环右移数求余，结果为M。先全部逆序，然后分别逆序0-M-1和M-End两部分。
### 1009 说反话
思路： 用空格分隔字符串，存入vector数组，最后逆序输出。
### 1010 一元多项式求导 
关键:  处理直接为0 0输入的情况;处理不清楚输出长度的情况 while(cin>>a>>b) 自动判断。  
思路： 用flag来处理最后一次输出无多余空格的情况。
### 1011 A，B和C
思路： 注意A+B的溢出问题用长整型存储数据。
### 1012 数字分类
思路： 循环分别处理五种不同的余数情况即可。
### 1013 数素数
思路： 也是用6k+1，6k-1的指数特点，计算在min到max的范围内计算第t个素数。  
       然后在进行10个一循环的输出即可。然后最后一个数不输出空格或换行符。
### 1014 福尔摩斯约会
思路： 遍历字符串判断字符满足条件得到对应数值即可。  
关键： 个位小时/分钟前要加0，星期和小时要判断A-G和A-N的范围（检查点的坑）。
### 1015 德才论
思路： 利用algorithm的sort排序，要建立如方法compare的排序规则。  
       每个考生成绩判断，分别放入四类数组中。  
检查点问题： 首先用iostream实现输入输出，会在检查点4、5超时。需要换为scanf,printf实现。
### 1016 部分A+B
思路： 将数字以字符串形式存储，目标以整形形式存储。  
       遍历字符串，如和目标整形相同，则10*result+目标数值，计算部分A/B。
### 1017 A除以B
思路： 模拟除法实现过程即可（不能有多余0）
### 1018 锤子剪刀布
思路： 分类判断各种情况，统计即可
### 1019 数字黑洞
思路： 读取第一个数据是要将其补0，产生4位字符串。  
       字符串升序/降序排列，然后转整形进行计算。
### 1020 月饼
思路： 可能存在总供给<需求的情况,题目没说库存和总价格是整数，要以浮点型输入。  
       贪心法，计算单价，从高到低依次取。满足需求或库存已用完停止。
### 1021 个位数统计
思路： 设置长度为10的数组，字符串输入检测数字。每位字符-'0'可得该位数字，  
       加到数组即可，最后完成输出。
### 1022 D进制的A+B 
思路： 先求和，再根据10进制转D进制的方法循环求余，存入字符串，最后输出即可。       
### 1023 组个最小数 
思路： 利用string.insert函数,依次插入到字符串末尾。  
       第一个非0数组，需要拿一个放到字符串首部。
### 1024 科学计数法
思路： 指数小于0只有在前面补0的一种情况。  
      指数大于0时，需要判断小数部分长度和指数大小的关系，判断是修改.位置还是补0。