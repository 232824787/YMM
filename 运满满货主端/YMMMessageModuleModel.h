//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonModel.h"

@class NSMutableArray, NSString;

@interface YMMMessageModuleModel : YMMCommonModel
{
    _Bool _isAll;
    _Bool _all;
    NSMutableArray *_messageModuleList;
    NSString *_sortTime;
}

+ (Class)ymm_classForCollectionPropertyName:(id)arg1;
@property(copy, nonatomic) NSString *sortTime; // @synthesize sortTime=_sortTime;
@property(nonatomic) _Bool all; // @synthesize all=_all;
@property(nonatomic) _Bool isAll; // @synthesize isAll=_isAll;
@property(retain, nonatomic) NSMutableArray *messageModuleList; // @synthesize messageModuleList=_messageModuleList;
- (void).cxx_destruct;

@end

