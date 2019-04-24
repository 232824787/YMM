//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMPublishBaseInfoViewModel.h"

@class NSString, UIColor, UIFont;

@interface YMMPublishInputViewModel : YMMPublishBaseInfoViewModel
{
    _Bool _cannotInputZero;
    _Bool _unitHidden;
    _Bool _separatorLineHidden;
    unsigned long long _contentLengthLimit;
    NSString *_unitText;
    UIColor *_unitTextColor;
    long long _unitTextAlignment;
    UIFont *_unitFont;
}

@property(nonatomic) _Bool separatorLineHidden; // @synthesize separatorLineHidden=_separatorLineHidden;
@property(nonatomic) _Bool unitHidden; // @synthesize unitHidden=_unitHidden;
@property(retain, nonatomic) UIFont *unitFont; // @synthesize unitFont=_unitFont;
@property(nonatomic) long long unitTextAlignment; // @synthesize unitTextAlignment=_unitTextAlignment;
@property(retain, nonatomic) UIColor *unitTextColor; // @synthesize unitTextColor=_unitTextColor;
@property(copy, nonatomic) NSString *unitText; // @synthesize unitText=_unitText;
@property(nonatomic) _Bool cannotInputZero; // @synthesize cannotInputZero=_cannotInputZero;
@property(nonatomic) unsigned long long contentLengthLimit; // @synthesize contentLengthLimit=_contentLengthLimit;
- (void).cxx_destruct;

@end

