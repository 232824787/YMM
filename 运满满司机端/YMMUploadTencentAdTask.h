//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonNetworkTask.h"

@class NSString;

@interface YMMUploadTencentAdTask : YMMCommonNetworkTask
{
    NSString *_acitonType;
    long long _actionTime;
    NSString *_hashIdfa;
}

@property(copy, nonatomic) NSString *hashIdfa; // @synthesize hashIdfa=_hashIdfa;
@property(nonatomic) long long actionTime; // @synthesize actionTime=_actionTime;
@property(copy, nonatomic) NSString *acitonType; // @synthesize acitonType=_acitonType;
- (void).cxx_destruct;
- (Class)ymm_responseModelClass;
- (id)ymm_networkAPIPath;
- (id)initTaskWithAction:(id)arg1 actionTime:(long long)arg2 idfa:(id)arg3;

@end

