//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@interface VFJCard : NSObject
{
    int _balance;
    NSData *_f0015;
    NSData *_f0016;
    NSData *_f000E;
    NSData *_f000F;
    NSData *_f0019;
}

@property(nonatomic) int balance; // @synthesize balance=_balance;
@property(retain, nonatomic) NSData *f0019; // @synthesize f0019=_f0019;
@property(retain, nonatomic) NSData *f000F; // @synthesize f000F=_f000F;
@property(retain, nonatomic) NSData *f000E; // @synthesize f000E=_f000E;
@property(retain, nonatomic) NSData *f0016; // @synthesize f0016=_f0016;
@property(retain, nonatomic) NSData *f0015; // @synthesize f0015=_f0015;
- (void).cxx_destruct;
- (id)description;
- (id)initWithF0015:(id)arg1 f0016:(id)arg2 f000E:(id)arg3 f000F:(id)arg4 f0019:(id)arg5 balance:(int)arg6;

@end

