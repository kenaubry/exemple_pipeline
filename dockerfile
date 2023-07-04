FROM gcc:13.1.0

RUN git clone https://github.com/kenaubry/exemple_pipeline.git

WORKDIR exemple_pipeline

RUN make build

ENTRYPOINT ["./app"]