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
### 1076 Wifi密码
思路： 每次输入一个字符串，检测答案是否为T。