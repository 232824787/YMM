//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSAttributedString, NSString, UIColor, UILabel, YMMRoundedSharpAngleView;

@interface YMMCalloutTipTextView : UIView
{
    UIColor *_calloutColor;
    UIColor *_textColor;
    unsigned long long _fontSize;
    NSString *_text;
    NSAttributedString *_textAbt;
    unsigned long long _cornerRadius;
    unsigned long long _style;
    long long _originDistance;
    unsigned long long _numberOfLines;
    YMMRoundedSharpAngleView *_backView;
    UILabel *_textLb;
    struct CGSize _sharpAngleSize;
    struct UIEdgeInsets _textContainerInset;
}

@property(retain, nonatomic) UILabel *textLb; // @synthesize textLb=_textLb;
@property(retain, nonatomic) YMMRoundedSharpAngleView *backView; // @synthesize backView=_backView;
@property(nonatomic) unsigned long long numberOfLines; // @synthesize numberOfLines=_numberOfLines;
@property(nonatomic) struct UIEdgeInsets textContainerInset; // @synthesize textContainerInset=_textContainerInset;
@property(nonatomic) long long originDistance; // @synthesize originDistance=_originDistance;
@property(nonatomic) struct CGSize sharpAngleSize; // @synthesize sharpAngleSize=_sharpAngleSize;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(nonatomic) unsigned long long cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(retain, nonatomic) NSAttributedString *textAbt; // @synthesize textAbt=_textAbt;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) unsigned long long fontSize; // @synthesize fontSize=_fontSize;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIColor *calloutColor; // @synthesize calloutColor=_calloutColor;
- (void).cxx_destruct;
- (void)setHidden:(_Bool)arg1;
- (void)layoutSubviews;
- (id)init;

@end

