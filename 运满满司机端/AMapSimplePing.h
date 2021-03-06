//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface AMapSimplePing : NSObject
{
    struct __CFHost *_host;
    struct __CFSocket *_socket;
    unsigned short _identifier;
    unsigned short _nextSequenceNumber;
    NSString *_hostName;
    NSData *_hostAddress;
    id <AMapSimplePingDelegate> _delegate;
}

+ (const struct ICMPHeader *)icmpInPacket:(id)arg1;
+ (unsigned long long)icmpHeaderOffsetInPacket:(id)arg1;
+ (id)simplePingWithHostAddress:(id)arg1;
+ (id)simplePingWithHostName:(id)arg1;
@property(nonatomic) unsigned short nextSequenceNumber; // @synthesize nextSequenceNumber=_nextSequenceNumber;
@property(readonly, nonatomic) unsigned short identifier; // @synthesize identifier=_identifier;
@property(nonatomic) __weak id <AMapSimplePingDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSData *hostAddress; // @synthesize hostAddress=_hostAddress;
@property(readonly, copy, nonatomic) NSString *hostName; // @synthesize hostName=_hostName;
- (void).cxx_destruct;
- (void)stop;
- (void)stopDataTransfer;
- (void)stopHostResolution;
- (void)start;
- (void)hostResolutionDone;
- (void)startWithHostAddress;
- (void)readData;
- (_Bool)isValidPingResponsePacket:(id)arg1;
- (void)sendPingWithData:(id)arg1;
- (void)didFailWithHostStreamError:(CDStruct_87dc826d)arg1;
- (void)didFailWithError:(id)arg1;
- (void)noop;
- (void)dealloc;
- (id)initWithHostName:(id)arg1 address:(id)arg2;

@end

