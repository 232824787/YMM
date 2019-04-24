//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "LOTSizeValueDelegate.h"

@class NSString;

@interface LOTSizeValueCallback : NSObject <LOTSizeValueDelegate>
{
    struct CGSize _sizeValue;
}

+ (id)withPointValue:(struct CGSize)arg1;
@property(nonatomic) struct CGSize sizeValue; // @synthesize sizeValue=_sizeValue;
- (struct CGSize)sizeForFrame:(double)arg1 startKeyframe:(double)arg2 endKeyframe:(double)arg3 interpolatedProgress:(double)arg4 startSize:(struct CGSize)arg5 endSize:(struct CGSize)arg6 currentSize:(struct CGSize)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

