//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol IFlyEngineDelegate <NSObject>

@optional
- (void)onEnd:(int)arg1;
- (void)onResult:(const void *)arg1 length:(unsigned int)arg2 status:(int)arg3;
- (void)onStop;
@end

