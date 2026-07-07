# 使用 Ubuntu 作为基础镜像
FROM --platform=linux/amd64 ubuntu:20.04

# 设置时区和非交互模式，避免 apt 卡住
ENV DEBIAN_FRONTEND=noninteractive
ENV TZ=Asia/Shanghai

# 更新系统并安装常用工具

# 设置工作目录
WORKDIR /app

# 把当前目录下的所有文件复制到容器中
COPY . .

# 安装 Python 依赖（如果你有 requirements.txt）
# 暴露端口（可选）
EXPOSE 8080

# 容器启动命令
CMD ["bash"]