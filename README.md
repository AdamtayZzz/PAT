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
### 1025 反转链表
思路： 创建一个10^5的地址空间，存储数据和下一节点指针。通过下一节点指针数组得到真正的链表排序。  
       然后利用reverse函数反转链表，最后将反转链表输出。  
检查点6: 给到了无效链结点，不是真正在链表中。故将n改成计数值sum来做后续操作。
### 1026 程序运行时间
思路： 分别计算小时、分钟、秒，个位数情况前面补0。
### 1027 打印沙漏
思路： 利用等差数列求层数，然后打印输出。  
检查点： 查询其他博主的解答后，发现字符输出后，后续不需要打印空格，直接换行即可。
### 1028 人口普查 
思路： 在1814/09/06到2014/09/06间的生日才进行比较，所有的比较直接用字符串比较即可。
### 1029 旧键盘
思路： 分别用一个长度26和10的数组检查是否为第一次出错，如果是将其插入到输出串中。
### 1030 完美数列
思路： 先排序，然后遍历数组，统计以该数字作为最小值的完美数列长度。  
减少时间复杂度方法：  
1.在遍历位置i到末尾总长度已经小于目前完美数列长度时退出。  
2.由于本代码全在int整形范围下，如果当前最小值已经大与n/p，代表其乘积值一定会大于10^9，无需遍历后续。  
3.在检查当前最小值的最大值时，直接从最小值+目前完美数列长度检查即可。  
（首先的超时代码，从后向前遍历，如果N很大，有很多无用的时间消耗）
### 1031 查验身份证 
思路： 将每一位转为数字，乘权值后求和，判断校验位。此外还要用isdigit判断是否前17位全为数字。
### 1032 挖掘机技术哪家强
思路：用map存储team与score的关系，最后遍历找到最大score和的对应team即可。
### 1033 旧键盘打字
思路：分大写字符检查是否键入符损坏 以及 普通字符键损坏两种情况判断即可。
### 1036 跟奥巴马一起编程
思路：两层循环依次打印字符C即可。
### 1037 在霍格沃茨找零钱
思路：先判断输入值的大小关系，然后取出三种货币数值。用减法相减，如果不足则借位。  
注意：转为成最小单位比较大小关系时，会超出整形范围，需要用long long int。
### 1038 统计同成绩学生
思路：用哈希表存储每个数字出现的次数，最后输出出现次数。若未出现过，输出0。
### 1039 到底买不买
思路：用哈希表存储每个字符出现的次数。最后遍历需求字符串，比对是否每个字符需求量哈希表对应key-value都满足。
### 1040 几个PAT
思路：统计每个A前后P、T的个数。注意每次乘法运算后都要求余，才能保证不超出范围。
### 1041 考试座位号
思路：用结构体数组存储每个考生信息，用哈希表记录试机座位与数组索引的对应关系。  
     哈希表可以避免O(n^2)的时间复杂度。
### 1042 字符统计
思路：用哈希表存所有字符出现的次数，最后遍历哈希表找出次数最大的字母字符。
### 1043 输出PATest
思路：用长度为6的数组存储6个字符出现的次数。最后按顺序输出，直到所有字符都输出时停止。
### 1044 火星数字
思路：首先判断是数字还是火星文。然后分别对其进行处理，数字范围为0-169，最多都只有两位。
### *1045 快速排序
思路：满足条件的数字，左边均小于，右边均大于。若不满足这种条件，排序后和原来所在位置不会相同。  
      利用此规律找到所有数字，最后输出。（O(n)时间复杂度）
### 1046 划拳
思路：每次划拳，分双赢、双输、单方赢三种情况统计，最后输出单方赢的次数。
### 1047 团体编程赛
思路：用hashmap统计各队总成绩，最后遍历查找最高总成绩。
### 1048 数字加密
思路：逐位加密
坑点：如果被加密串小于加密串，需要在前面补0。
### 1049 数列的片段和
思路：位置i出现的次数为(n-i)*(i+1)
### 1050 *螺旋矩阵
思路：先用整除找到M,N对,然后在1个循环中调用4个内循环分别处理上、下、左、右、的数据输入。
### 1051 *复数乘法
注意：注意处理-0.00的情况，正确输出应为0.00
### 1052 卖个萌
思路：用substr取每个[]符号之间的表情，存到二维的vector之间。最后按照输出数字取对应位置表情。  
注意：输出\时的转义字符
### 1053 住房空置率
思路：每个住房单独统计即可，判断是否满足条件一、条件二。
### 1054 求平均值
思路：对于输入的每一个数，若超过三位小数，多个小数点，超出范围，非数字，就报错。其他情况将字符串转为数字后，求和取平均。
检查点3：只有一个数字正确时输出为1 number 而不是n numbers。
### 1055 集体照
思路： 结构体存储学生，排序依照成绩从大到小+名字升序的规则。从最后一排向前面输出，每一排先处理中间最高者，然后分左右分别处理（t+=2遍历）。
### 1056 组合数的和
思路：对于每个输入的数字，将其作为十位和个位的值和(k+10*k)(n-1)加入到总的统计当中。
### 1057 数零壹
思路：对每位字符做islower和isupper判断，然后转成索引号。最后10进制转2进制统计0和1的个数。
### 1058 *多选题
思路：将每题的分数，每题解的集合set存入不同的vector数组中；最后判断某同学的答案组成set是否和题解set相同。（柳诺blog里面学的可以直接用等号比较）  
      统计媒体错的个数，以及每个同学的分数，最后按照要求输出即可。用scanf更方便对'('、')'和空格字符的输入控制。
### 1059 c语言竞赛
思路：每输入一个id时，判断该id所处位次应该属于何种奖项，将其id和奖项类别用map存储。另外还需要一个10000长度的数组存储checked的情况。
### 1060 *爱丁顿数
思路：所有里程数，从大到小排序。公里数大于天数就更新c（计数值）的值即可。直至统计的天数小于等于当前公里时，结束循环。 
### 1061 判断题
思路：用两个数组分别存分值和答案，然后每个学生的答案一一比对输出分数。
### 1062 最简分数
思路：先计算分子的范围，然后依次遍历检查是否约分，将不可约分的输出。  
注意点：控制左右两个边界的范围；以及先后输入的两个数据大小关系不确定。
### 1063 计算谱半径
思路：循环输入，计算模，然后与目前最大值比较。
### 1064 朋友数
思路：将所有的朋友数号存在set中，set会自动排序。
### 1065 单身狗
思路：用marriage数组存伴侣的id，若没伴侣则为-1；对每个输入的id，查找其是否又伴侣，若无伴侣或伴侣没参加，则输出。  
坑点：要用%5d补0输出；没伴侣不能用0在数组中标记，必须要用-1，因为有可能有id为0的人。
### 1066 图像过滤
思路：判断每个像素点是否在a-b的范围内，按%03d的格式输出即可。
### 1067 试密码
思路：N个循环输入密码，若为#代表结束，直接break；若为正确输出welcome in，在break；若为错误输出，知道第n个也是，多输入一行lock。
### 1068 万绿丛中一点红     
坑点： 有独一无二颜色的那个像素点是题目的要求，即这个像素点要满足阈值条件之外还需只在img中出现一次该值。  
思路: 用map记录出现次数，用-1~1的行列循环来判断是否都超过阈值，用c来记录这个独一无二颜色的像素点的个数。最后按不同情况输出。
### 1069 微博转发抽奖
思路： M、N 和 S，分别是转发的总量、小明决定的中奖间隔、以及第一位中奖者的序号；先判断M和S的关系；用c（模N）来记录c=0且set中无该人则获奖；用set存储所有的获奖人员。
### 1070 结绳
思路：最长的绳子越晚折叠，排序后以此计算即可。
### 1071 小赌怡情
思路: 每次输入判断是否剩余钱；是否赌注大于资金；是否有赌成功，然后对T进行相应修改，输出对应结果语句。
### 1072 开学寄语
思路：将禁止物品存于set中，每输入一个物品用find查找是否是禁品，若是禁品需要分本人第一个和本人非第一个两种情况输出内容。最后输出人数、物品数的统计结果。
### 1074 宇宙无敌加法器
思路： carry = op1+op2+carry /d  该位数 = op1+op2+carry %d 
### 1075 链表元素分类
思路：创建一个10^5的地址空间，存储数据和下一节点指针。通过下一节点指针数组分负数、[0,k]和大于k分别建立3个数组，组合输出次序。  
注意: 可能只有前两种情况有解，输出是要注意判断 -1 的出现位置。
### 1076 Wifi密码
思路： 每次输入一个字符串，检测答案是否为T。
### 1077 互评成绩计算 
思路： 用vector存小组评分，sort排序后，从begin()+1循环至end()-1求G2，最后和G1相加求平均，用round()四舍五入。
### 1078 字符串压缩与解压 
思路： 用str[i]==str[i+1]和isdigit(str[i++])遍历分别得到压缩的数目和解压缩的数目。
### 1079 延迟的回文数
思路：运用reverse函数和字符串模拟十进制运算
### 1080 MOOC期终成绩
思路: 用结构体存储学生的所有信息;用map存储所有的id和结构体的键-值关系；  
用vector存储所有的满足条件的结构体；用排序算法排序后，依次输出即可。
### 1081 检查密码
思路：对数字、字母、以及不合法字符、字符串长度出现此处进行统计不同错误，输出不同提示信息。
### 1082 射击比赛 
思路：计算x方+y方与当前最大值、最小值比较。
### 1083 是否存在相等的差
思路：用vector数组存对应差值的出现次数，最后将大于2的差值输出即可。
### 1084 外观数列
思路：循环遍历字符串依次统计同样字符出现次数
### 1086 就不告诉你
思路：先计算正序乘积，然后利用余数从前往后求和。
### 1087 有多少不同的值
思路：用set的特性来存储所有可能值，最后返回set的大小。
### 1088 三人行
思路：从99-10依次递减，求满足条件的最大甲值。
坑点：丙的值可能是浮点数


## Advanced Level
### 1001 A+B Format 求余 栈的使用
思路：利用对于1000求余，每次将余数存于栈中。最终出栈等到正序结果，加上符号即可。  
特殊情况：0
### 1002 A+B for Polynomials 哈希映射
思路：用长度为1001的vector，存每个指数级的系数值。最后输出统计结果。
### 1003 Emergency
#### 经典Dijkstra算法
思路：在距离的比较外，增加对相同最短路径长度的统计以及最大化支援车辆数目的统计，主要是普通的Dijakstra算法在遍历每个可连接节点下做最短路径更新位置下增加一些信息追踪功能。
### 1004 Counting Leaves
#### 树的存储形式 队列实现宽度优先遍历
思路：将树存储在数组中，数组元素指当前索引所指节点的父节点索引。  
利用队列实现每次访问同一层的树节点，统计没有子节点的个数，宽度优先遍历。
###  1005 Spell It Right 字符和数转换
思路：利用(char-'0')求和得到数值,最后利用对10求余输出最终结果。  
特殊情况：0
### 1006 Sign In and Sign Out 排序
思路：建立结构体存储id，时间。直接用时间的字符串的比较进行sort排序，最终得到结果。
### 1007 Maximum Subsequence Sum 
#### 最大子序列 <-> 经典动态规划问题
思路：动态规划问题，cursum = max{cursum+num,num}  
测试点四：没看到output的要求-> If all the K numbers are negative, then its maximum sum is defined to be 0, and you are supposed to output the first and the last numbers of the whole sequence.
### 1008 Elevator 
思路：计算每两个层之间的差值，正负区分时间大小。
### 1009 Product of Polynomials 哈希映射
思路：用一个结构体保存多项式一项的指数值和数据值，存入vector数组中。最后利用两层循环计算乘法，输出最终结果。
### 1011 World Cup Betting 
思路：挑出每场比赛赔率最高的，并且记录W/T/L，并计算成绩，最终输出结果。
### 1012 The Best Rank 
思路：用map存储id和名次、科目的对应关系，根据优先级A->C->M->E来分别对成绩排序，并同时对两个map进行更新，只有名次更低的情况才会替换，否则保持原样，最后输出结果。
### 1013 Battle Over Cities
#### 经典的并查集，检查子连通图个数
思路：首先用数组存储连通的顶点信息。除去删除的城市外，构造并查集，检查最终得到并查子集的个数。  
超时原因：首先最后一个测试点超时的原因：没有设计全局vector<int> tree来存储变量；设计使用int city[n][n] 而不是 city[m][2]，这样n*n>>m，会超时。
### 1014 Waiting in Line
#### 经典的优先队列问题(注意结构体优先队列，重载运算符的方法)
思路：优先队列控制的条件有两个，第一个结束时间越早越好，窗口数越小越好。  
坑点：是开始时间不晚于17：00即可进行完！
### 1015 Reversible Primes 素数判断
思路：每次先检查输入数字是否为素数，再检查其reverse后是否为素数，输出相应结果。
### 1016 Phone Bills （REMAIN）
#### 复杂的哈希映射题
思路：利用vector存储记录，并通过名字和时间进行排序，在查找前后id相同且一开一关的加入到map数组中，最后将所有满足条件的统计并输出。  
关键：参考了柳诺的博客，用map存储有效的通话记录对。
### 1017 Queueing at Bank
#### 经典的优先队列问题
思路：优先队列中通过结束时间排序，来判断选择哪个窗口。统计等待时间分为两种情况，第一种为窗口空闲晚于到达时间，有增值；第二种为窗口空闲时间遭遇到达时间，增值为0。
### 1018 1018 Public Bike Management（REMAIN）
#### 经典Dijkstra算法求最短路径 + DFS统计单车数量
思路：三组条件（最短，最少需要，最少送回），后两种不满足最短路径算法的条件。需要先读取最短路径，在从所有的可能最短路径中求最好的情况。  
特殊：因为单车数量在路径上的传递不满足最优子结构，无法从Dijkstra遍历中得到正确结果。
### 1019 General Palindromic Number 进制转换
思路：由于基数的可以很大，所以每一位不一定为单个数字，用vector存储，然后reverse后进行比较，检查其是否为回文数。
### 1020 Tree Traversals
#### 二叉树应用 利用后序和中序来构造唯一二叉树 + 树的广度优先遍历
思路：用queue实现广度优先遍历，存叶子节点的结构体指针。
### 1021 Deepest Root
#### DFS遍历所有情况 + DFS实现FloodFill（检测多少子区域，联通分量个数）
#### 检查连通分量个数的两种方法 DFS / 并查集
### 1022 Digital Library map和set存储信息
#### 输入格式的控制（正确输入的例子）
思路：利用map存储各类信息和id组成的set的对应关系。  
坑点：%07d格式输出整形id，%04d格式输出整形year。
### 1023 Have Fun with Numbers 大数加法运算
思路：在字符串上，利用carry和加法完成运算。用map统计前后字符串中出现次数相同与否。
### 1024 Palindromic Number 大数加法运算
思路：数字很大，所以只能用字符串来模拟大数据的加法运算。
### 1025 PAT Ranking 排序
思路：用vector做记录，根据id和成绩来分段排序，最后汇总。每次排序时都要给他附上名次即可。
### 1027 Colors in Mars 进制转换
思路: 十进制转十三进制，注意0的处理。
### 1028 List Sorting 排序
思路：简单的sort结构体排序，但注意要用printf、scanf否则会超时。
### 1029 Median 双指针
思路：考虑一个数组遍历完但仍未找到中位数的情况。
### 1030 Travel Plan 
#### 经典Dijkstra算法 + 数组做路径统计
### 1031 Hello World for U 
思路：找规律最后填充即可
### 1032 Sharing 哈希映射
思路：用数组代表地址空间，存储完之后，遍历第一个单词，做标记。最后遍历第二个单词，检查到第一个标记就输出结果。
### 1033 To Fill or Not to Fill 贪心算法（REMAIN）
#### 经典的贪心算法难题!! 重点题型
思路：若最长可行走距离内，有油价更便宜的，则只加到该station的油即可；若最长可行走距离内无油价最便宜的，则把油箱加满。  
注意：计算价格是不能忽视油箱中已有的油，用一个变量记录。
### 1034 Head of a Gang DFS遍历
#### DFS遍历连通分量基础上对边权值进行统计
思路：利用dfs统计连通个数，用marked数组控制每个结点只被访问一次。  
对边权值进行统计：通过将遍历过的边权值置0来避免多次计算。
并查集不太好保存边的信息所以用dfs计算连通分量和相关信息比较好
### 1035 Password 字符串操作
思路：对字符串的每位检查是否要修改，再修改即可。
### 1036 Boys vs Girls  循环比较
思路：根据性别，遍历比较最大值、最小值。
### 1037 Magic Coupon  排序
思路：统计正负数出现次数，然后只允许正数×正数 负数×负数，才能保证最大值。
### 1038 Recover the Smallest Number (REMAIN) 排序+贪心 
#### 关键在于保证两两字符串 都是局部最小值; 若有一组不是局部最小值，交换两个字符串会得到一个更小的数字
### 1039 Course List for Student 哈希映射
思路：哈希映射存每个学生的所有课程，排序后输出。   
坑点：首先用的map和string直接做key，会超时。换成26*26*26*10+10的转化int后做映射。
### 1040 Longest Symmetric String 动态规划
思路：dp[i]表示第i个字符前一共用dp[i]个对称，所以求dp[i+1]时，需要考虑两种拓展方式：  
第一种为：aa->aaa 第二种为:aa->aaaa；所以要对两个位置依次比对求最大的对称串长度。
### 1041 Be Unique 哈希映射
思路：用map存出现次数，遍历数组第一个出现次数为1的输出。
### 1042 Shuffling Machine 排序
思路：card结构体由牌号和索引位置组成，每次循环重新给排输入索引位置，排序。  
注意：用数字代替字符串，加快运算速度，最后用数字和字符串关系输出结果即可。
### 1043 Is It a Binary Search Tree 二叉搜索树的建立，遍历和检查
思路：利用递归完成大部分功能实现，考虑边界s>=e的情况如何处理。
### 1044 Shopping in Mars （REMAIN）数组遍历
思路：和1046一样，数组元素存开始到当前位置的和。每次输入个新的数据后，立即做判断，设计全局min值，如果当前和-start索引值>=目标值，则可以将其与min比较，然后判断是否更小；
若相等则加入map，若更小则清空map再加入map。start值无需每次都从0开始重新遍历，因为每个输入结束后一定有当前和-start索引值<目标值，而下一个循环一定会增大和，前面的无需考虑了，因为肯定比当前的差值要大很多。  
关键: 内层循环start开始的位置不为0。
### 1045 Favorite Color Stripe 动态规划
思路：dp[i][j]表示前i个布条和前j个色块的最大可能数值；如果i对应颜色==j对应颜色，那么取dp[i][j]= max(dp[i-1][j],dp[i-1][j-1])+1；如果颜色不对应，则取dp[i][j]= max(max(dp[i-1][j],dp[i-1][j-1]),dp[i][j-1])三者的最大值。  
其他思路：[柳诺大神](https://www.liuchuo.net/archives/2283)提到先删除不喜欢的颜色，在用数组索引号做最长递增子序列的长度。
### 1046 Shortest Distance 哈希映射
思路：直接用一个数组存储1-k的路径和，最后用路径和相减。减少了重复运算次数，大大加快效率
### 1047 Student List for Course 哈希映射+排序
思路：和1039类似思路，将string转为int，建立课程和学生数组的映射，最后排序输出即可。
### 1048 Find Coins 排序+双指针
思路：双指针遍历，若更大则减少较大端索引；若更小则增加较小端索引。
### 1050 String Subtraction Set使用
思路：用set存储第二个字符串出现的字符；set唯一存放每个字符；遍历第一个字符串若在set中则不输出。
### 1051 Pop Sequence 模拟堆栈（REMAIN）
思路：模拟堆栈，如果要pop的数字比堆栈top的要大，要一直进栈到数字相等。其后一直出栈，直到再次出现不等数字。
### 1052 Linked List Sorting 哈希映射排序
#### 特殊情况：考虑某些结点不在链表中，链表为空等情况。
思路：无需按照真正链表排序方法写；直接创建一个结构体，将链表上的结点存入vector中，然后用value值从小到大排序，start为自身address，而next为下一个节点的address。  
### 1053 Path of Equal Weight DFS
思路：用数组存每个节点的父节点信息，进行dfs遍历所有满足条件的情况。当权值满足且为叶子节点时才存入到result中。最后用sort来对序列进行非递增排序。这里的dfs要实时对其对weight和path进行回退。
### 1054 The Dominant Color map的使用 哈希映射
思路：用map统计每个色度出现次数，超过half则输出。  
注意：cout cin会超时，转而使用scanf 和 printf！
### 1055 The World's Richest 排序
思路：按规则排序输出，由于n与k、m的值差距很大，要将每个年龄的前100个取出，减少遍历个数，避免超时。
### 1056 Mice and Rice Queue队列的运用
思路：排名为当前分组数+1。将每一组的第一名重复插入到队列的尾端。
### 1058 A+B in Hogwarts 不同进制加法
思路：carry位和进制加法运算
### 1059 Prime Factors 素数筛选 分解质因数
思路：long int为32位，首先先处理100000前的素数筛选。然后用每个素数循环相除得到结果，注意最后可能会有一个大于2^16的质数，要在最后考量==1与否。要注意输入数据为1的处理。 
### 1060 Are They Equal 科学计数法
思路：先遍历找到'.'的位置；然后遍历找到第一个非'0'且非'.'的位置，两数相减便可得到指数为。然后从此位置开始找前n个非'.'的数据，若没有这么多个则补0，作为数值。将两部分比较即可。
### 1063 Set Similarity 并集 交集
思路：原来设想用itersection 和 union分别求并交集，最后一个检查点超时。 1063-1.cpp  
改进：遍历方法来解决 看a中的每个元素b中是否有，对应修改nc和nt两个参数。 1063-2.cpp
### 1064 Complete Binary Search Tree （REMAIN） 完全二叉树和排序二叉树的结合运用
思路：用数组存完全二叉树，2i和2i+1分别表示其左右结点；排序二叉树的中序遍历是递增的；用递归中序遍历每个位置将数据依次放入。
### 1065 A+B and C (64bit)  整数溢出问题
思路：若a>0 b>0溢出则sum<0;若a<0 b<0溢出则sum>0;
### 1067 Sort with Swap(0, i) REMAIN 贪心法
思路：只要数字0不在0号位，说明0占了其他数字的位置，就把0所在的位置还给正确的数，即把0的位置和那个数的位置交换，这样就排定了那个数。若还没有把全部数排定，0就回到了0号位，则需要通过一次交换把0调出来以便继续排定剩余的数，可以选择将0的位置和任意一个没有排定的数交换，这样0就被调出来了。  
数据结构：用a数组，a[i]表示数字i所在的下标，交换时将a[0]和a[a[0]]交换，含义为将0和a[0]对应下标的数字交换，使其回归原位。  
超时问题：找没排定的数时不要从头遍历数组，这样会超时。用一个变量unsort遍历即可，因为已经有序的数字不会再变为无序，所以直接遍历一次即可。
### 1068 Find More Coins 0/1背包问题 动态规划 （REMAIN）
#### 第一时间没反应过来用dp解决
思路：用dp来做规划；同时用一个数组choice来表示对当前选择了的硬币进行标记。最最后输出结果也是利用choice输出。输入的硬币价值按从大到小的顺序排序，可以使得输出时的路径是最小的那一条路径。
### 1070 Mooncake 贪心法
思路：以产品的单价排序依次选择单价最高的。
### 1071 Speech Patterns
思路：用map统计每个word出现的次数。
### 1074 Reversing Linked List 模拟链表操作 注意无效节点的情况
思路：用reverse实现即可，要判断是否满足长度为k