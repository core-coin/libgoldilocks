FROM alpine:3
WORKDIR libgoldilocks
COPY . libgoldilocks
RUN apk add automake autoconf libtool make gcc g++
RUN cd libgoldilocks && autoreconf --install && ./configure && make lib
CMD ["tail", "-f"]
