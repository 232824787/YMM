//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonModel.h"

@class NSMutableArray;

@interface YMMIMChatOrderListModel : YMMCommonModel
{
    _Bool _all;
    unsigned long long _total;
    NSMutableArray *_data;
}

+ (Class)ymm_classForCollectionPropertyName:(id)arg1;
@property(retain, nonatomic) NSMutableArray *data; // @synthesize data=_data;
@property(nonatomic) _Bool all; // @synthesize all=_all;
@property(nonatomic) unsigned long long total; // @synthesize total=_total;
- (void).cxx_destruct;

@end

