//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonModel.h"

@class NSArray, NSNumber;

@interface YMMPublishDepositCellModel : YMMCommonModel
{
    unsigned long long _needReturnDeposit;
    unsigned long long _dealModel;
    NSNumber *_deposit;
    NSArray *_depositItem;
}

@property(retain, nonatomic) NSArray *depositItem; // @synthesize depositItem=_depositItem;
@property(retain, nonatomic) NSNumber *deposit; // @synthesize deposit=_deposit;
@property(nonatomic) unsigned long long dealModel; // @synthesize dealModel=_dealModel;
@property(nonatomic) unsigned long long needReturnDeposit; // @synthesize needReturnDeposit=_needReturnDeposit;
- (void).cxx_destruct;

@end

