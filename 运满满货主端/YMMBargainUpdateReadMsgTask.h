//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonNetworkTask.h"

@interface YMMBargainUpdateReadMsgTask : YMMCommonNetworkTask
{
    int _conversationType;
    long long _cargoId;
    long long _fromUid;
}

@property(nonatomic) int conversationType; // @synthesize conversationType=_conversationType;
@property(nonatomic) long long fromUid; // @synthesize fromUid=_fromUid;
@property(nonatomic) long long cargoId; // @synthesize cargoId=_cargoId;
- (Class)ymm_responseModelClass;
- (id)ymm_networkAPIPath;

@end

