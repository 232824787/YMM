//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UILabel;

@interface YMMTruckYardNoDataView : UIView
{
    CDUnknownBlockType _publishCallback;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UIButton *_publishButton;
}

@property(retain, nonatomic) UIButton *publishButton; // @synthesize publishButton=_publishButton;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) CDUnknownBlockType publishCallback; // @synthesize publishCallback=_publishCallback;
- (void).cxx_destruct;
- (void)publishAction:(id)arg1;
- (void)setNeedsUpdateConstraints;
- (void)initControls;
- (id)init;

@end

