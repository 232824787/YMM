//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class HCBGraph, NSString, UIColor, UIFont, UILabel;

@interface HCBStepperItem : UIView
{
    unsigned long long _state;
    unsigned long long _number;
    UIFont *_numberFont;
    UIFont *_titleFont;
    NSString *_title;
    unsigned long long _style;
    double _borderWidth;
    UIColor *_borderColorDefault;
    UIColor *_borderColorSelected;
    UIColor *_circleColorDefault;
    UIColor *_circleColorSelected;
    UIColor *_titleColorDefault;
    UIColor *_titleColorSelected;
    UIColor *_numberColorDefault;
    UIColor *_numberColorSelected;
    double _circleRadius;
    HCBGraph *_leftLine;
    HCBGraph *_rightLine;
    HCBGraph *_leftDash;
    HCBGraph *_rightDash;
    UIView *_circle;
    UILabel *_numberLabel;
    UILabel *_titleLabel;
}

@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *numberLabel; // @synthesize numberLabel=_numberLabel;
@property(retain, nonatomic) UIView *circle; // @synthesize circle=_circle;
@property(retain, nonatomic) HCBGraph *rightDash; // @synthesize rightDash=_rightDash;
@property(retain, nonatomic) HCBGraph *leftDash; // @synthesize leftDash=_leftDash;
@property(retain, nonatomic) HCBGraph *rightLine; // @synthesize rightLine=_rightLine;
@property(retain, nonatomic) HCBGraph *leftLine; // @synthesize leftLine=_leftLine;
@property(nonatomic) double circleRadius; // @synthesize circleRadius=_circleRadius;
@property(retain, nonatomic) UIColor *numberColorSelected; // @synthesize numberColorSelected=_numberColorSelected;
@property(retain, nonatomic) UIColor *numberColorDefault; // @synthesize numberColorDefault=_numberColorDefault;
@property(retain, nonatomic) UIColor *titleColorSelected; // @synthesize titleColorSelected=_titleColorSelected;
@property(retain, nonatomic) UIColor *titleColorDefault; // @synthesize titleColorDefault=_titleColorDefault;
@property(retain, nonatomic) UIColor *circleColorSelected; // @synthesize circleColorSelected=_circleColorSelected;
@property(retain, nonatomic) UIColor *circleColorDefault; // @synthesize circleColorDefault=_circleColorDefault;
@property(retain, nonatomic) UIColor *borderColorSelected; // @synthesize borderColorSelected=_borderColorSelected;
@property(retain, nonatomic) UIColor *borderColorDefault; // @synthesize borderColorDefault=_borderColorDefault;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(retain, nonatomic) UIFont *numberFont; // @synthesize numberFont=_numberFont;
@property(nonatomic) unsigned long long number; // @synthesize number=_number;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)create;
- (id)initWithFrame:(struct CGRect)arg1 style:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

