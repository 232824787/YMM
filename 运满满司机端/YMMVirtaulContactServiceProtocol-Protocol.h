//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"
#import "YMMServiceProtocol.h"

@class YMMVirtualContactCallModel;

@protocol YMMVirtaulContactServiceProtocol <NSObject, YMMServiceProtocol>
- (void)callVirtualContact:(YMMVirtualContactCallModel *)arg1;
- (void)checkVirtualContactPublishCargo:(void (^)(_Bool))arg1;
@end

