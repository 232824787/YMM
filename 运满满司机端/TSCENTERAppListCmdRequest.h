//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TSCENTERAppListCmdRequest : NSObject
{
    NSString *_os;
    NSString *_userId;
    NSString *_apdid;
    NSString *_token;
    NSString *_applist;
}

@property(retain, nonatomic) NSString *applist; // @synthesize applist=_applist;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
@property(retain, nonatomic) NSString *apdid; // @synthesize apdid=_apdid;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSString *os; // @synthesize os=_os;
- (void).cxx_destruct;

@end

