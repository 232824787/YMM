//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@interface SockDataModel : NSObject
{
    unsigned char _version;
    unsigned char _cmd;
    unsigned char _biz;
    unsigned char _type;
    unsigned int _length;
    unsigned int _logid;
    NSData *_data;
}

@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(nonatomic) unsigned int logid; // @synthesize logid=_logid;
@property(nonatomic) unsigned char type; // @synthesize type=_type;
@property(nonatomic) unsigned char biz; // @synthesize biz=_biz;
@property(nonatomic) unsigned char cmd; // @synthesize cmd=_cmd;
@property(nonatomic) unsigned char version; // @synthesize version=_version;
@property(nonatomic) unsigned int length; // @synthesize length=_length;
- (void).cxx_destruct;
- (int)getVersion;
- (int)getLogId;
- (int)getType;
- (int)getCmd;
- (int)getBiz;

@end

