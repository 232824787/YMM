//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CALayer, NSString, UIColor, UIImage;

@interface MACompassView : UIView
{
    float _degree;
    float _scale;
    UIColor *_bgColor;
    UIColor *_ticColor;
    UIColor *_arrowColor;
    NSString *_nString;
    float _fontSize;
    CALayer *_baseLayer;
    CALayer *_rotateLayer;
    CALayer *_imageLayer;
    id <MACompassViewDelegate> _delegate;
    UIImage *_image;
}

+ (id)compassViewWithDegree:(float)arg1;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) id <MACompassViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) float degree; // @synthesize degree=_degree;
- (void).cxx_destruct;
- (void)updateOrigin:(struct CGPoint)arg1;
- (void)setDegree:(float)arg1 animated:(_Bool)arg2 duration:(double)arg3;
- (void)onCompassTapped;
- (void)initGesture;
- (void)initTextLayer;
- (void)initArrowLayer;
- (void)initTicLayer;
- (void)initBaseLayer;
- (void)initAttributes;
- (id)initWithFrame:(struct CGRect)arg1;

@end

