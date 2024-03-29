FROM alpine:3.14 as builder
WORKDIR libgoldilocks
COPY . libgoldilocks
RUN apk add automake autoconf libtool make gcc g++
RUN cd libgoldilocks && autoreconf --install && ./configure && make all

FROM scratch
COPY --from=builder /libgoldilocks/libgoldilocks/src/.libs/libgoldilocks.a /usr/local/bin/
CMD ["tail", "-f"]
