//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, VFJDes3Cipher;

@interface VFJPacket : NSObject
{
    NSString *_version;
    NSString *_netNodeId;
    NSString *_terminalId;
    unsigned long long _algorithm;
    long long _keyIndex;
    long long _trace;
    NSDictionary *_datas;
    NSString *_responseCode;
    NSString *_terminalTime;
    NSString *_mac;
    NSString *_makKey;
    VFJDes3Cipher *_d3c;
}

@property(retain, nonatomic) VFJDes3Cipher *d3c; // @synthesize d3c=_d3c;
@property(retain, nonatomic) NSString *makKey; // @synthesize makKey=_makKey;
@property(retain, nonatomic) NSString *mac; // @synthesize mac=_mac;
@property(retain, nonatomic) NSString *terminalTime; // @synthesize terminalTime=_terminalTime;
@property(retain, nonatomic) NSString *responseCode; // @synthesize responseCode=_responseCode;
@property(retain, nonatomic) NSDictionary *datas; // @synthesize datas=_datas;
@property(nonatomic) long long trace; // @synthesize trace=_trace;
@property(nonatomic) long long keyIndex; // @synthesize keyIndex=_keyIndex;
@property(nonatomic) unsigned long long algorithm; // @synthesize algorithm=_algorithm;
@property(retain, nonatomic) NSString *terminalId; // @synthesize terminalId=_terminalId;
@property(retain, nonatomic) NSString *netNodeId; // @synthesize netNodeId=_netNodeId;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
- (void).cxx_destruct;
- (id)getMac:(id)arg1 trace:(id)arg2 boyd:(id)arg3;
- (id)toBytes;
- (id)initWithData:(id)arg1;
- (id)initWithVersion:(id)arg1 netNodeId:(id)arg2 terminalId:(id)arg3 alg:(unsigned long long)arg4 kidx:(long long)arg5 trace:(long long)arg6 datas:(id)arg7;

@end

