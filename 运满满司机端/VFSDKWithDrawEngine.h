//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface VFSDKWithDrawEngine : NSObject
{
    NSString *_withdrawTimeDesc;
}

+ (id)sharedInstance;
@property(copy, nonatomic) NSString *withdrawTimeDesc; // @synthesize withdrawTimeDesc=_withdrawTimeDesc;
- (void).cxx_destruct;
- (void)toWithDrawV2NewCardScene;
- (void)toWithDrawV2Scene;
- (void)requestCardListWithProgress;
- (void)start;
- (id)init;

@end

