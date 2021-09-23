FROM alpine:3 as builder
WORKDIR libgoldilocks
COPY . libgoldilocks
RUN apk add automake autoconf libtool make gcc g++
RUN cd libgoldilocks && autoreconf --install && ./configure && make lib

FROM alpine:3
COPY --from=builder /libgoldilocks/libgoldilocks/src/.libs/libgoldilocks.a /usr/local/bin/
CMD ["tail", "-f"]
