//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PNGenericChart.h"

@class CAShapeLayer, NSArray, NSMutableArray, NSString, UIColor, UIFont;

@interface PNBarChart : PNGenericChart
{
    NSMutableArray *_xChartLabels;
    NSMutableArray *_yChartLabels;
    _Bool _showLabel;
    _Bool _showChartBorder;
    _Bool _showLevelLine;
    _Bool _rotateForXAxisText;
    _Bool _isGradientShow;
    _Bool _isShowNumbers;
    float _yValueMax;
    NSArray *_xLabels;
    NSArray *_yLabels;
    NSArray *_yValues;
    NSMutableArray *_bars;
    double _xLabelWidth;
    UIColor *_strokeColor;
    NSArray *_strokeColors;
    double _yChartLabelWidth;
    CDUnknownBlockType _yLabelFormatter;
    NSString *_yLabelPrefix;
    NSString *_yLabelSuffix;
    double _chartMarginLeft;
    double _chartMarginRight;
    double _chartMarginTop;
    double _chartMarginBottom;
    UIColor *_chartBorderColor;
    CAShapeLayer *_chartBottomLine;
    CAShapeLayer *_chartLevelLine;
    CAShapeLayer *_chartLeftLine;
    double _barRadius;
    double _barWidth;
    double _labelMarginTop;
    UIColor *_barBackgroundColor;
    UIColor *_labelTextColor;
    UIFont *_labelFont;
    long long _xLabelSkip;
    long long _yLabelSum;
    double _yMaxValue;
    double _yMinValue;
    UIColor *_barColorGradientStart;
    id <PNChartDelegate> _delegate;
}

@property(nonatomic) _Bool isShowNumbers; // @synthesize isShowNumbers=_isShowNumbers;
@property(nonatomic) _Bool isGradientShow; // @synthesize isGradientShow=_isGradientShow;
@property(nonatomic) __weak id <PNChartDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool rotateForXAxisText; // @synthesize rotateForXAxisText=_rotateForXAxisText;
@property(retain, nonatomic) UIColor *barColorGradientStart; // @synthesize barColorGradientStart=_barColorGradientStart;
@property(nonatomic) double yMinValue; // @synthesize yMinValue=_yMinValue;
@property(nonatomic) double yMaxValue; // @synthesize yMaxValue=_yMaxValue;
@property(nonatomic) long long yLabelSum; // @synthesize yLabelSum=_yLabelSum;
@property(nonatomic) long long xLabelSkip; // @synthesize xLabelSkip=_xLabelSkip;
@property(retain, nonatomic) UIFont *labelFont; // @synthesize labelFont=_labelFont;
@property(retain, nonatomic) UIColor *labelTextColor; // @synthesize labelTextColor=_labelTextColor;
@property(retain, nonatomic) UIColor *barBackgroundColor; // @synthesize barBackgroundColor=_barBackgroundColor;
@property(nonatomic) double labelMarginTop; // @synthesize labelMarginTop=_labelMarginTop;
@property(nonatomic) double barWidth; // @synthesize barWidth=_barWidth;
@property(nonatomic) double barRadius; // @synthesize barRadius=_barRadius;
@property(retain, nonatomic) CAShapeLayer *chartLeftLine; // @synthesize chartLeftLine=_chartLeftLine;
@property(retain, nonatomic) CAShapeLayer *chartLevelLine; // @synthesize chartLevelLine=_chartLevelLine;
@property(retain, nonatomic) CAShapeLayer *chartBottomLine; // @synthesize chartBottomLine=_chartBottomLine;
@property(nonatomic) _Bool showLevelLine; // @synthesize showLevelLine=_showLevelLine;
@property(retain, nonatomic) UIColor *chartBorderColor; // @synthesize chartBorderColor=_chartBorderColor;
@property(nonatomic) _Bool showChartBorder; // @synthesize showChartBorder=_showChartBorder;
@property(nonatomic) _Bool showLabel; // @synthesize showLabel=_showLabel;
@property(nonatomic) double chartMarginBottom; // @synthesize chartMarginBottom=_chartMarginBottom;
@property(nonatomic) double chartMarginTop; // @synthesize chartMarginTop=_chartMarginTop;
@property(nonatomic) double chartMarginRight; // @synthesize chartMarginRight=_chartMarginRight;
@property(nonatomic) double chartMarginLeft; // @synthesize chartMarginLeft=_chartMarginLeft;
@property(retain, nonatomic) NSString *yLabelSuffix; // @synthesize yLabelSuffix=_yLabelSuffix;
@property(retain, nonatomic) NSString *yLabelPrefix; // @synthesize yLabelPrefix=_yLabelPrefix;
@property(copy) CDUnknownBlockType yLabelFormatter; // @synthesize yLabelFormatter=_yLabelFormatter;
@property(nonatomic) double yChartLabelWidth; // @synthesize yChartLabelWidth=_yChartLabelWidth;
@property(retain, nonatomic) NSArray *strokeColors; // @synthesize strokeColors=_strokeColors;
@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(nonatomic) float yValueMax; // @synthesize yValueMax=_yValueMax;
@property(nonatomic) double xLabelWidth; // @synthesize xLabelWidth=_xLabelWidth;
@property(retain, nonatomic) NSMutableArray *bars; // @synthesize bars=_bars;
@property(retain, nonatomic) NSArray *yValues; // @synthesize yValues=_yValues;
@property(retain, nonatomic) NSArray *yLabels; // @synthesize yLabels=_yLabels;
@property(retain, nonatomic) NSArray *xLabels; // @synthesize xLabels=_xLabels;
- (void).cxx_destruct;
- (void)touchPoint:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)barColorAtIndex:(unsigned long long)arg1;
- (void)viewCleanupForCollection:(id)arg1;
- (void)addSeparatorAnimationIfNeeded;
- (void)addBorderAnimationIfNeeded;
- (void)strokeChart;
- (void)updateBar;
- (void)getYValueMax:(id)arg1;
- (void)updateChartData:(id)arg1;
- (void)__addYCoordinateLabelsValues;
- (void)processYMaxValue;
- (void)setupDefaultValues;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

