//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonModel.h"

@class NSArray, NSString;

@interface YMMPublishingCargoListModel : YMMCommonModel
{
    NSString *_remainingNumberTip;
    NSArray *_list;
    NSString *_expireCargoMessage;
    NSString *_listHintContent;
}

+ (Class)ymm_classForCollectionPropertyName:(id)arg1;
@property(retain, nonatomic) NSString *listHintContent; // @synthesize listHintContent=_listHintContent;
@property(retain, nonatomic) NSString *expireCargoMessage; // @synthesize expireCargoMessage=_expireCargoMessage;
@property(retain, nonatomic) NSArray *list; // @synthesize list=_list;
@property(retain, nonatomic) NSString *remainingNumberTip; // @synthesize remainingNumberTip=_remainingNumberTip;
- (void).cxx_destruct;

@end

