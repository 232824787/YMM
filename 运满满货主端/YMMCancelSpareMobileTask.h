//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonNetworkTask.h"

@class NSString;

@interface YMMCancelSpareMobileTask : YMMCommonNetworkTask
{
    unsigned long long _type;
    NSString *_spareShareNumber;
}

@property(copy, nonatomic) NSString *spareShareNumber; // @synthesize spareShareNumber=_spareShareNumber;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (Class)ymm_responseModelClass;
- (id)ymm_networkAPIPath;

@end

