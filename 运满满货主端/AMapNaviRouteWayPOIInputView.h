//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UILabel;

@interface AMapNaviRouteWayPOIInputView : UIView
{
    id <AMapNaviRouteWayPOIInputViewDelegate> _delegate;
    UILabel *_wayPOILabel;
    UIView *_containerView;
    UIButton *_deleteBtn;
}

@property(nonatomic) __weak UIButton *deleteBtn; // @synthesize deleteBtn=_deleteBtn;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak UILabel *wayPOILabel; // @synthesize wayPOILabel=_wayPOILabel;
@property(nonatomic) __weak id <AMapNaviRouteWayPOIInputViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)addPOIBtnClick:(id)arg1;
- (void)removeMyself:(id)arg1;
- (void)setUp;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

