//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonNetworkTask.h"

@class NSNumber, NSString;

@interface YMMSHConfirmLoadingTask : YMMCommonNetworkTask
{
    NSString *_orderId;
    NSNumber *_amount;
    NSNumber *_noLongerPopup;
}

@property(retain, nonatomic) NSNumber *noLongerPopup; // @synthesize noLongerPopup=_noLongerPopup;
@property(retain, nonatomic) NSNumber *amount; // @synthesize amount=_amount;
@property(copy, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
- (void).cxx_destruct;
- (Class)ymm_responseModelClass;
- (id)ymm_networkAPIPath;

@end

