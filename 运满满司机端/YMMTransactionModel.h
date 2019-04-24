//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonModel.h"

@class NSString;

@interface YMMTransactionModel : YMMCommonModel
{
    NSString *_title;
    NSString *_money;
    NSString *_createTime;
    long long _accountItemType;
    NSString *_accountItemId;
    NSString *_createTimeDescription;
    NSString *_remark;
}

@property(retain, nonatomic) NSString *remark; // @synthesize remark=_remark;
@property(readonly, copy, nonatomic) NSString *createTimeDescription; // @synthesize createTimeDescription=_createTimeDescription;
@property(retain, nonatomic) NSString *accountItemId; // @synthesize accountItemId=_accountItemId;
@property(nonatomic) long long accountItemType; // @synthesize accountItemType=_accountItemType;
@property(copy, nonatomic) NSString *createTime; // @synthesize createTime=_createTime;
@property(copy, nonatomic) NSString *money; // @synthesize money=_money;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

