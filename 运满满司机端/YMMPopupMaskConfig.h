//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMPriorityModel.h"

@class UIColor, UIView;

@interface YMMPopupMaskConfig : YMMPriorityModel
{
    _Bool _tapToDismiss;
    UIColor *_maskColor;
    UIView *_superView;
    double _animationDuration;
    CDUnknownBlockType _completion;
    CDUnknownBlockType _dismiss;
    struct UIEdgeInsets _offsetInsets;
}

@property(copy, nonatomic) CDUnknownBlockType dismiss; // @synthesize dismiss=_dismiss;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(nonatomic) _Bool tapToDismiss; // @synthesize tapToDismiss=_tapToDismiss;
@property(nonatomic) struct UIEdgeInsets offsetInsets; // @synthesize offsetInsets=_offsetInsets;
@property(retain, nonatomic) UIView *superView; // @synthesize superView=_superView;
@property(retain, nonatomic) UIColor *maskColor; // @synthesize maskColor=_maskColor;
- (void).cxx_destruct;
- (id)init;

@end

