//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonModel.h"

@class NSArray, YMMTransactionDegradePage;

@interface GTBaseCargoModel : YMMCommonModel
{
    _Bool _isAll;
    _Bool _instantMsgFlag;
    NSArray *_list;
    YMMTransactionDegradePage *_replacePage;
}

+ (Class)ymm_classForCollectionPropertyName:(id)arg1;
@property(retain, nonatomic) YMMTransactionDegradePage *replacePage; // @synthesize replacePage=_replacePage;
@property(nonatomic) _Bool instantMsgFlag; // @synthesize instantMsgFlag=_instantMsgFlag;
@property(retain, nonatomic) NSArray *list; // @synthesize list=_list;
@property(nonatomic) _Bool isAll; // @synthesize isAll=_isAll;
- (void).cxx_destruct;

@end

