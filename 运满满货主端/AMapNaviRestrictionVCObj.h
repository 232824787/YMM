//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSAttributedString, NSString;

@interface AMapNaviRestrictionVCObj : NSObject
{
    _Bool _isEffect;
    long long _ruleId;
    NSString *_title;
    NSAttributedString *_info;
    NSArray *_overlays;
    double _height;
    double _sumHeight;
}

@property(nonatomic) double sumHeight; // @synthesize sumHeight=_sumHeight;
@property(nonatomic) double height; // @synthesize height=_height;
@property(copy, nonatomic) NSArray *overlays; // @synthesize overlays=_overlays;
@property(copy, nonatomic) NSAttributedString *info; // @synthesize info=_info;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool isEffect; // @synthesize isEffect=_isEffect;
@property(nonatomic) long long ruleId; // @synthesize ruleId=_ruleId;
- (void).cxx_destruct;

@end

