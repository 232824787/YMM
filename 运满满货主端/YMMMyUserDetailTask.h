//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonNetworkTask.h"

@class NSArray, NSDictionary;

@interface YMMMyUserDetailTask : YMMCommonNetworkTask
{
    NSArray *_codes;
    NSDictionary *_filterParams;
}

@property(copy, nonatomic) NSDictionary *filterParams; // @synthesize filterParams=_filterParams;
@property(copy, nonatomic) NSArray *codes; // @synthesize codes=_codes;
- (void).cxx_destruct;
- (Class)ymm_responseModelClass;
- (id)ymm_networkAPIPath;

@end

