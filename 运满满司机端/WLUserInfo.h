//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WLUserInfo : NSObject
{
    long long _uid;
    long long _domainId;
    long long _appUid;
    long long _appDomainId;
    NSString *_type;
    NSString *_realName;
    NSString *_idCardNum;
    NSString *_mobile;
    NSString *_pid;
    NSString *_rid;
}

@property(copy, nonatomic) NSString *rid; // @synthesize rid=_rid;
@property(copy, nonatomic) NSString *pid; // @synthesize pid=_pid;
@property(copy, nonatomic) NSString *mobile; // @synthesize mobile=_mobile;
@property(copy, nonatomic) NSString *idCardNum; // @synthesize idCardNum=_idCardNum;
@property(copy, nonatomic) NSString *realName; // @synthesize realName=_realName;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(nonatomic) long long appDomainId; // @synthesize appDomainId=_appDomainId;
@property(nonatomic) long long appUid; // @synthesize appUid=_appUid;
@property(nonatomic) long long domainId; // @synthesize domainId=_domainId;
@property(nonatomic) long long uid; // @synthesize uid=_uid;
- (void).cxx_destruct;

@end

