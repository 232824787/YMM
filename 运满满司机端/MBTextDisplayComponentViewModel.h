//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MBBaseModuleViewModel.h"

@class NSString;

@interface MBTextDisplayComponentViewModel : MBBaseModuleViewModel
{
    NSString *_title;
    NSString *_descPrefix;
    NSString *_descValue;
    NSString *_descSuffix;
    double _value;
    double _ratioValue;
}

@property(nonatomic) double ratioValue; // @synthesize ratioValue=_ratioValue;
@property(nonatomic) double value; // @synthesize value=_value;
@property(copy, nonatomic) NSString *descSuffix; // @synthesize descSuffix=_descSuffix;
@property(copy, nonatomic) NSString *descValue; // @synthesize descValue=_descValue;
@property(copy, nonatomic) NSString *descPrefix; // @synthesize descPrefix=_descPrefix;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)componentView;
- (void)onSumNotificationReceived:(double)arg1;

@end

