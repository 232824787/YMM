//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AMapSearchObject.h"

@class NSArray;

@interface AMapInputTipsSearchResponse : AMapSearchObject
{
    long long _count;
    NSArray *_tips;
}

+ (id)ajo_arrayClassMapping;
+ (id)ajo_mapping;
@property(retain, nonatomic) NSArray *tips; // @synthesize tips=_tips;
@property(nonatomic) long long count; // @synthesize count=_count;
- (void).cxx_destruct;

@end

