//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonModel.h"

@class NSArray, NSNumber;

@interface YMMAccountIndexModel : YMMCommonModel
{
    NSNumber *_totalBalance;
    NSArray *_assetList;
}

+ (Class)ymm_classForCollectionPropertyName:(id)arg1;
@property(copy, nonatomic) NSArray *assetList; // @synthesize assetList=_assetList;
@property(retain, nonatomic) NSNumber *totalBalance; // @synthesize totalBalance=_totalBalance;
- (void).cxx_destruct;

@end

