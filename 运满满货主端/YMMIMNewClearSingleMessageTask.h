//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMIMCommonNetworkTask.h"

@class NSString;

@interface YMMIMNewClearSingleMessageTask : YMMIMCommonNetworkTask
{
    NSString *_toUid;
}

@property(copy, nonatomic) NSString *toUid; // @synthesize toUid=_toUid;
- (void).cxx_destruct;
- (Class)ymm_responseModelClass;
- (id)ymm_networkAPIPath;
- (id)initWithToUid:(id)arg1;

@end

