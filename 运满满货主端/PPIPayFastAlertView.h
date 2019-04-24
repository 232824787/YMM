//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, UILabel;

@interface PPIPayFastAlertView : UIView
{
    id <PPIPayFastAlertViewDelegate> alertDelegate;
    NSMutableArray *buttons;
    UIView *parentView;
    double alertHeight;
    double alertWidth;
    UILabel *_alertContentLabel;
}

@property(retain, nonatomic) UILabel *alertContentLabel; // @synthesize alertContentLabel=_alertContentLabel;
- (void).cxx_destruct;
- (void)willMoveToSuperview:(id)arg1;
- (void)dismissAlert;
- (id)getButtonByIndex:(int)arg1;
- (void)show;
- (void)buttonClick:(id)arg1;
- (void)setup;
- (id)initWithMessage:(id)arg1 delegate:(id)arg2 confirmButtonTitle:(id)arg3 cancelButtonTitle:(id)arg4;

@end

