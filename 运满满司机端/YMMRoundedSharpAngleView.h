//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIColor;

@interface YMMRoundedSharpAngleView : UIView
{
    UIColor *_fillColor;
    unsigned long long _cornerRadius;
    unsigned long long _style;
    long long _originDistance;
    struct CGSize _sharpAngleSize;
}

@property(nonatomic) long long originDistance; // @synthesize originDistance=_originDistance;
@property(nonatomic) struct CGSize sharpAngleSize; // @synthesize sharpAngleSize=_sharpAngleSize;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(nonatomic) unsigned long long cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)init;

@end

