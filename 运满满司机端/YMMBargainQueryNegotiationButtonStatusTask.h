//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonNetworkTask.h"

@class NSString;

@interface YMMBargainQueryNegotiationButtonStatusTask : YMMCommonNetworkTask
{
    NSString *_cargoId;
    NSString *_otherSideUid;
    NSString *_role;
}

@property(copy, nonatomic) NSString *role; // @synthesize role=_role;
@property(copy, nonatomic) NSString *otherSideUid; // @synthesize otherSideUid=_otherSideUid;
@property(copy, nonatomic) NSString *cargoId; // @synthesize cargoId=_cargoId;
- (void).cxx_destruct;
- (Class)ymm_responseModelClass;
- (id)ymm_networkAPIPath;

@end

