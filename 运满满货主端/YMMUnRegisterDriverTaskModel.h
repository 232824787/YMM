//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonModel.h"

@class NSString;

@interface YMMUnRegisterDriverTaskModel : YMMCommonModel
{
    _Bool _isOrRegister;
    _Bool _member3Switch;
    long long _unRegisterResultCode;
    long long _queryCreditOfSurplusNum;
    long long _queryCreditNum;
    NSString *_toBuyUrl;
}

@property(copy, nonatomic) NSString *toBuyUrl; // @synthesize toBuyUrl=_toBuyUrl;
@property(nonatomic) _Bool member3Switch; // @synthesize member3Switch=_member3Switch;
@property(nonatomic) _Bool isOrRegister; // @synthesize isOrRegister=_isOrRegister;
@property(nonatomic) long long queryCreditNum; // @synthesize queryCreditNum=_queryCreditNum;
@property(nonatomic) long long queryCreditOfSurplusNum; // @synthesize queryCreditOfSurplusNum=_queryCreditOfSurplusNum;
@property(nonatomic) long long unRegisterResultCode; // @synthesize unRegisterResultCode=_unRegisterResultCode;
- (void).cxx_destruct;

@end

