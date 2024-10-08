# GRouter Dockerfile
FROM base

COPY ./ /app
WORKDIR /app

RUN mkdir build && cd build && cmake .. && make

CMD ["./build/GRouterClient"]
