## 一、系统概述
本安全审计登录注册管理员系统是为了保障系统安全，对用户登录、注册行为进行有效管理和审计的应用程序。它提供了可靠的身份验证机制和全面的审计功能，确保只有授权的管理员能够访问和操作系统相关功能。
## 原理
注册：客户端向服务器端发送自己的id，信号量，服务器收到后进行审核并生成N和R传输给客户端，客户端进行级联并哈希迭代计算传给服务器，服务器将其入库
认证：客户端向服务器端发送id和信号量，服务器端收到后进行查表，看id是否存在，然后取出N和R发送给客户端，客户端进行N次迭代哈希计算，然后传给服务器，服务器再做一次哈希与数据库中的值进行比对，如果一致，则返回认证成功。
重置：当认证成功且N等于1时，服务器端发送信号量和N、R给客户端，客户端进行N+1次迭代哈希计算。然后传给服务器端，服务器端将其入库（此重置过程可用户透明，不用改口令，也可以用户不透明，更改口令）
挑应战思想：当用户尝试登录时，服务器会向用户发送一个挑战，通常是随机生成的。用户通过算法生成一个应答，然后将应答发送回服务器。服务器使用相同的算法和通行短语验证用户的应答是否正确。由于挑战是随机的，每次登录尝试都会生成不同的挑战。这意味着即使两个攻击者同时尝试登录，他们也会收到不同的挑战。因此，攻击者很难重放先前的登录尝试来破解系统。这种机制提高了系统的安全性，使其免受重放攻击等安全威胁。
哈希函数：哈希函数是一种将任意长度的数据映射为固定长度哈希值的函数，具有不可逆性和抗碰撞性。通过选择合适的哈希函数，可以将口令加密成固定长度的哈希值，保证口令的安全性。此次实验我采用了MD5算法，其一种基于分组的密码散列函数，它将输入数据分为若干个分组，每个分组长度为64字节。具体来说，MD5算法将输入数据填充为长度是64的倍数，然后将填充后的数据分为若干个64字节的分组，对每个分组进行一系列的位操作和模加运算，最终得到一个128位的哈希值。MD5算法的分组处理使得它能够处理任意长度的输入数据，并且保证了算法的效率和安全性。
账户锁定与解锁策略是一种常见的安全机制，通过设置一定的规则和条件，对账户进行锁定和解锁操作，以保证账户的安全性。登录表中设置时间和错误次数的字段，当用户输入错误密码时，便更新表中的数据。当用户第一次输入错误密码时，系统可以将错误次数加1，并记录下当前时间。如果用户在一定时间内（例如几分钟或几小时）连续输入错误密码达到一定次数（例如3次或5次），系统就可以将该账户锁定，禁止用户继续登录。当账户被锁定时，用户需要联系管理员来解锁账户。
日志记录与审计：通过记录所有用户的操作，包括用户类型、时间、人物、事件、结果，以便进行审计和分析。这些信息存储在数据库表中，但只有日志管理员才能查看。


## 二、功能特点
### （一）登录功能
[![20241118205339.jpg](https://i.postimg.cc/6354CnG1/20241118205339.jpg)](https://postimg.cc/gwQ0Wwsv)
多因素身份验证
系统支持多种身份验证方式，包括但不限于用户名和密码、验证码（可集成图形验证码、短信验证码等机制），增强了登录的安全性，防止恶意登录尝试。

密码安全策略
对用户密码有严格的要求，如长度限制、包含大小写字母、数字和特殊字符等，通过正则表达式判断，并且对用户输入的密码进行加密存储，使用先进的加密算法（如MD5）保障密码安全。
登录审计
每次登录尝试都会被详细记录，包括登录时间、IP 地址、用户名等信息。对于连续多次失败的登录尝试，可以触发安全预警机制，如暂时锁定账户或通知管理员。
### （二）注册功能
信息完整性验证
在用户注册过程中，要求用户填写完整且准确的信息，如姓名、联系方式、邮箱等，并对输入信息进行格式验证，确保数据的合法性。
唯一性检查
对用户名、邮箱等关键信息进行唯一性检查，防止重复注册，确保系统用户信息的准确性和唯一性。
注册审批（可选）
对于新注册的用户，可以设置管理员审批流程，新用户注册信息将提交给管理员审核，只有审核通过后用户才能正常登录和使用系统，进一步加强系统的安全性。
### （三）管理员功能
[![2024-11-18-204843.png](https://i.postimg.cc/QM70RL4r/2024-11-18-204843.png)](https://postimg.cc/B8qTKzfh)
用户管理
管理员可以查看、编辑和删除系统中的用户信息，包括重置用户密码、修改用户权限等操作。
能够对用户进行分类管理，如根据用户角色、部门等划分不同的用户组，方便批量管理和权限分配。
审计日志查询
[![2024-11-18-204856.png](https://i.postimg.cc/bJj3P6WS/2024-11-18-204856.png)](https://postimg.cc/ns0vY1Hn)
管理员可以查询和分析系统的登录注册审计日志，根据不同的条件（如时间范围、用户名、IP 地址等）进行筛选和排序，以便及时发现异常登录注册行为，并采取相应的措施。
安全设置更新
[![2024-11-18-204908.png](https://i.postimg.cc/gJq42VbS/2024-11-18-204908.png)](https://postimg.cc/VrvX7b6n)
可以对系统的安全设置进行更新，如修改密码策略、验证码类型和有效期、登录失败锁定策略等，确保系统安全机制能够适应不断变化的安全环境。
## 三、技术架构
[![E7-F34984-D45762927-FC88-F8-CFDA5-A89-A.png](https://i.postimg.cc/HxK5BFL9/E7-F34984-D45762927-FC88-F8-CFDA5-A89-A.png)](https://postimg.cc/nj4CLRBX)

[![2024-12-03-171659.png](https://i.postimg.cc/Hj1MC5XJ/2024-12-03-171659.png)](https://postimg.cc/m1VkYPdR)
客户端 - 服务端（C/S）
数据库用的是sql server,通过ODBC连接
使用Qt的network模块通过TCP/IP 协议通信

## 四、安装与部署
环境要求
服务器环境：，需要安装 
数据库环境：安装并配置 [sql server]，创建必要的数据库和表结构，可以使用提供的数据库初始化脚本。
安装步骤
下载系统安装包（[下载地址](https://www.microsoft.com/zh-cn/sql-server/sql-server-downloads?msockid=3b801dec7c1467ee227f08d87d1166ff)到服务器指定目录。
解压安装包，按照安装向导的提示进行配置，包括数据库连接配置、服务器端口设置等。
启动系统服务，可通过命令行或启动脚本启动后端服务，前端页面可以通过 Web 服务器进行部署和访问。
## 五、使用说明
用户登录
在登录页面输入用户名和密码，根据系统要求输入验证码（如果有）。
如果是首次登录，可能需要修改初始密码或完成其他初始化步骤。
用户注册
访问注册页面，填写必填信息，提交注册申请。
如果有注册审批流程，等待管理员审核通过后即可登录。
管理员操作
使用管理员账号登录系统后，通过导航菜单进入用户管理、审计日志查询和安全设置等功能页面，按照页面提示进行相应操作。
## 六、安全注意事项
定期更新
为了保持系统的安全性，应及时更新系统版本，包括后端代码、前端页面和依赖的第三方库，以修复可能存在的安全漏洞。
网络安全防护
确保服务器所在网络环境的安全性，部署防火墙、入侵检测系统等网络安全设备，防止外部网络攻击。
数据备份
定期对系统数据（特别是用户信息和审计日志）进行备份，防止数据丢失或损坏，并将备份数据存储在安全的位置。
安全意识培训
对系统管理员和用户进行安全意识培训，让他们了解安全审计系统的重要性和正确的使用方法，避免因人为疏忽导致的安全问题。
