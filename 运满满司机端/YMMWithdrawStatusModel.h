//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonModel.h"

@class NSString;

@interface YMMWithdrawStatusModel : YMMCommonModel
{
    NSString *_title;
    NSString *_content;
    NSString *_createTime;
    long long _status;
}

@property(nonatomic) long long status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *createTime; // @synthesize createTime=_createTime;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

