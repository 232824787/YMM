//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonNetworkTask.h"

@class NSString;

@interface YMMVirtualContactChangeAuthStatusTask : YMMCommonNetworkTask
{
    _Bool _isOpen;
    NSString *_bizId;
}

@property(copy, nonatomic) NSString *bizId; // @synthesize bizId=_bizId;
@property(nonatomic) _Bool isOpen; // @synthesize isOpen=_isOpen;
- (void).cxx_destruct;
- (Class)ymm_responseModelClass;
- (id)ymm_requestIgnoreProperties;
- (id)ymm_networkAPIPath;
- (id)init;

@end

