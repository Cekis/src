# SWGNGE

## Ubuntu Environment Setup

Note that the server only supports 32bit linux platforms at this time.

	sudo apt-get install build-essential zlib1g-dev libpcre3-dev cmake libboost-dev libxml2-dev libncurses5-dev flex bison git-core alien libaio1

## Dependencies

The following versions are required for this present iteration.  I'll avoid going into detail on how to set this up, but using SWG-Source's VM will avoid issues so that is recommended:
- Oracle Instant Client 18.3 up to 21.
- Java 11.0.3

## Build code
Using the following command will build the entire application from scratch including building the database and establishing the cluster:

```ant swg```

