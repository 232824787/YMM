//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonNetworkTask.h"

@class NSString;

@interface YMMUnRegisterDriverTask : YMMCommonNetworkTask
{
    NSString *_queryCode;
    NSString *_queryType;
}

@property(copy, nonatomic) NSString *queryType; // @synthesize queryType=_queryType;
@property(copy, nonatomic) NSString *queryCode; // @synthesize queryCode=_queryCode;
- (void).cxx_destruct;
- (Class)ymm_responseModelClass;
- (id)ymm_networkAPIPath;

@end

