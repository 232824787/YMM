//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIColor, UIFont;

@interface MAScaleViewLite : UIView
{
    double _resultSegmentLengthInMeters;
    double _resultSegmentLength;
    double _magicNumbers[3];
    UIColor *_scaleColor;
    UIColor *_borderColor;
    UIFont *_textFont;
    NSString *_drawingText;
    double _distanceInMeters;
}

@property(nonatomic) double distanceInMeters; // @synthesize distanceInMeters=_distanceInMeters;
@property(retain, nonatomic) NSString *drawingText; // @synthesize drawingText=_drawingText;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)updateOrigin:(struct CGPoint)arg1;
- (id)getFormattedString:(double)arg1;
- (void)calculateSegmentLength;
- (void)initMagicNumber;
- (id)initWithFrame:(struct CGRect)arg1;

@end

