//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAGradientLayer, CAShapeLayer, NSString, UIImageView, UILabel;

@interface YMMPriceSuggestionView : UIView
{
    double _horizontalMargin;
    double _lineWidth;
    double _arrowWidth;
    double _arrowHeight;
    double _arrowPos;
    NSString *_lowPrice;
    NSString *_suitablePrice;
    NSString *_highPrice;
    NSString *_tipText;
    UILabel *_lowPriceLabel;
    UILabel *_suitablePriceLabel;
    UILabel *_highPriceLabel;
    UILabel *_lowTitleLabel;
    UILabel *_suitableTitleLabel;
    UILabel *_highTitleLabel;
    UIImageView *_tipIconView;
    UILabel *_tipLabel;
    CAGradientLayer *_lineLayer;
    CAShapeLayer *_lineMaskLayer;
}

+ (double)heightWithText:(id)arg1 width:(double)arg2;
@property(retain, nonatomic) CAShapeLayer *lineMaskLayer; // @synthesize lineMaskLayer=_lineMaskLayer;
@property(retain, nonatomic) CAGradientLayer *lineLayer; // @synthesize lineLayer=_lineLayer;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UIImageView *tipIconView; // @synthesize tipIconView=_tipIconView;
@property(retain, nonatomic) UILabel *highTitleLabel; // @synthesize highTitleLabel=_highTitleLabel;
@property(retain, nonatomic) UILabel *suitableTitleLabel; // @synthesize suitableTitleLabel=_suitableTitleLabel;
@property(retain, nonatomic) UILabel *lowTitleLabel; // @synthesize lowTitleLabel=_lowTitleLabel;
@property(retain, nonatomic) UILabel *highPriceLabel; // @synthesize highPriceLabel=_highPriceLabel;
@property(retain, nonatomic) UILabel *suitablePriceLabel; // @synthesize suitablePriceLabel=_suitablePriceLabel;
@property(retain, nonatomic) UILabel *lowPriceLabel; // @synthesize lowPriceLabel=_lowPriceLabel;
@property(copy, nonatomic) NSString *tipText; // @synthesize tipText=_tipText;
@property(copy, nonatomic) NSString *highPrice; // @synthesize highPrice=_highPrice;
@property(copy, nonatomic) NSString *suitablePrice; // @synthesize suitablePrice=_suitablePrice;
@property(copy, nonatomic) NSString *lowPrice; // @synthesize lowPrice=_lowPrice;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGPath *)_maskShapePath:(struct CGSize)arg1;
- (void)_buildGradientLine;
- (id)initWithFrame:(struct CGRect)arg1;

@end

