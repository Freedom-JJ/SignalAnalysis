# 提交时需注意：
1. 不上传Debug文件夹（太大了）
2. 除了自己新建的代码外，不要上传不必要的untracked文件
# 运行步骤：
1. git clone https://codeup.aliyun.com/633fb2c0bd947c7ec67c1c93/SignalAnalysis2.git
2. 根据aricraft_db.sql导入数据库，数据库名为aricraft_db
3. 打开odbc32位软件，配置odbc连接，配置参数为：

|  |  |
|------|----|
| Data Source Name | aricraft_db |
| ip | localhost |
| port | 3306 | 
| User | root |
| password | root |
| Database | aricraft_db |

测试连接，成功则说明已经连接

4. 编译器版本为Qt 5.9.9 MinGW 32bit,构建模式为Debug
5. 构建目录建议选择为src\Debug ,使用Shadow build 
6. 打开src\sa3rdParty.pro文件，build
7. 打开src\sa.pro文件，build然后run，此时应该能够正常运行