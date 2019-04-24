//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VVBaseNode.h"

@class UIView, VVLineLayer;

@interface NVLineView : VVBaseNode
{
    UIView *_cocoaView;
    VVLineLayer *_lineLayer;
    unsigned long long _orientation;
    unsigned long long _gravity;
}

@property(nonatomic) unsigned long long gravity; // @synthesize gravity=_gravity;
@property(nonatomic) unsigned long long orientation; // @synthesize orientation=_orientation;
@property(retain, nonatomic) VVLineLayer *lineLayer; // @synthesize lineLayer=_lineLayer;
@property(retain, nonatomic) UIView *cocoaView; // @synthesize cocoaView=_cocoaView;
- (void).cxx_destruct;
- (void)layoutSubNodes;
- (_Bool)setStringData:(id)arg1 forKey:(int)arg2;
- (_Bool)setStringValue:(id)arg1 forKey:(int)arg2;
- (_Bool)setFloatValue:(float)arg1 forKey:(int)arg2;
- (_Bool)setIntValue:(int)arg1 forKey:(int)arg2;
- (void)setBackgroundColor:(id)arg1;
- (void)setRootCocoaView:(id)arg1;
- (id)init;

@end

