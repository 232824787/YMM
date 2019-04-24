//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PNGenericChart.h"

@class CAShapeLayer, NSArray, NSMutableArray, NSMutableDictionary, UIColor, UIFont, UIView;

@interface PNPieChart : PNGenericChart
{
    _Bool _showOnlyValues;
    _Bool _showAbsoluteValues;
    _Bool _shouldHighlightSectorOnTouch;
    _Bool _enableMultipleSelection;
    _Bool _hideValues;
    NSArray *_items;
    UIFont *_descriptionTextFont;
    UIColor *_descriptionTextColor;
    UIColor *_descriptionTextShadowColor;
    double _duration;
    double _labelPercentageCutoff;
    double _outerCircleRadius;
    double _innerCircleRadius;
    id <PNChartDelegate> _delegate;
    NSArray *_endPercentages;
    UIView *_contentView;
    CAShapeLayer *_pieLayer;
    NSMutableArray *_descriptionLabels;
    CAShapeLayer *_sectorHighlight;
    NSMutableDictionary *_selectedItems;
    struct CGSize _descriptionTextShadowOffset;
}

@property(retain, nonatomic) NSMutableDictionary *selectedItems; // @synthesize selectedItems=_selectedItems;
@property(retain, nonatomic) CAShapeLayer *sectorHighlight; // @synthesize sectorHighlight=_sectorHighlight;
@property(retain, nonatomic) NSMutableArray *descriptionLabels; // @synthesize descriptionLabels=_descriptionLabels;
@property(retain, nonatomic) CAShapeLayer *pieLayer; // @synthesize pieLayer=_pieLayer;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) NSArray *endPercentages; // @synthesize endPercentages=_endPercentages;
@property(nonatomic) _Bool hideValues; // @synthesize hideValues=_hideValues;
@property(nonatomic) _Bool enableMultipleSelection; // @synthesize enableMultipleSelection=_enableMultipleSelection;
@property(nonatomic) __weak id <PNChartDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double innerCircleRadius; // @synthesize innerCircleRadius=_innerCircleRadius;
@property(nonatomic) double outerCircleRadius; // @synthesize outerCircleRadius=_outerCircleRadius;
@property(nonatomic) _Bool shouldHighlightSectorOnTouch; // @synthesize shouldHighlightSectorOnTouch=_shouldHighlightSectorOnTouch;
@property(nonatomic) double labelPercentageCutoff; // @synthesize labelPercentageCutoff=_labelPercentageCutoff;
@property(nonatomic) _Bool showAbsoluteValues; // @synthesize showAbsoluteValues=_showAbsoluteValues;
@property(nonatomic) _Bool showOnlyValues; // @synthesize showOnlyValues=_showOnlyValues;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) struct CGSize descriptionTextShadowOffset; // @synthesize descriptionTextShadowOffset=_descriptionTextShadowOffset;
@property(retain, nonatomic) UIColor *descriptionTextShadowColor; // @synthesize descriptionTextShadowColor=_descriptionTextShadowColor;
@property(retain, nonatomic) UIColor *descriptionTextColor; // @synthesize descriptionTextColor=_descriptionTextColor;
@property(retain, nonatomic) UIFont *descriptionTextFont; // @synthesize descriptionTextFont=_descriptionTextFont;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)drawInflexion:(double)arg1 center:(struct CGPoint)arg2 andColor:(id)arg3;
- (id)getLegendWithMaxWidth:(double)arg1;
- (double)findPercentageOfAngleInCircle:(struct CGPoint)arg1 fromPoint:(struct CGPoint)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)didTouchAt:(struct CGPoint)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)addAnimationIfNeeded;
- (void)maskChart;
- (id)newCircleLayerWithRadius:(double)arg1 borderWidth:(double)arg2 fillColor:(id)arg3 borderColor:(id)arg4 startPercentage:(double)arg5 endPercentage:(double)arg6;
- (double)ratioForItemAtIndex:(unsigned long long)arg1;
- (double)endPercentageForItemAtIndex:(unsigned long long)arg1;
- (double)startPercentageForItemAtIndex:(unsigned long long)arg1;
- (id)dataItemForIndex:(unsigned long long)arg1;
- (void)updateChartData:(id)arg1;
- (id)descriptionLabelForItemAtIndex:(unsigned long long)arg1;
- (void)strokeChart;
- (void)recompute;
- (void)loadDefault;
- (void)baseInit;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1 items:(id)arg2;

@end

