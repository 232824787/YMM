//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UIImageView, UILabel;

@interface YMMCarpoolCargoCheckDetailView : UIView
{
    UILabel *_freightDesLabel;
    CDUnknownBlockType _callback;
    UIButton *_showDetailButton;
    UIImageView *_modifyImageView;
    UIButton *_modifyButton;
    CDUnknownBlockType _modifyback;
}

+ (double)viewHeight:(_Bool)arg1;
@property(copy, nonatomic) CDUnknownBlockType modifyback; // @synthesize modifyback=_modifyback;
@property(retain, nonatomic) UIButton *modifyButton; // @synthesize modifyButton=_modifyButton;
@property(retain, nonatomic) UIImageView *modifyImageView; // @synthesize modifyImageView=_modifyImageView;
@property(retain, nonatomic) UIButton *showDetailButton; // @synthesize showDetailButton=_showDetailButton;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain, nonatomic) UILabel *freightDesLabel; // @synthesize freightDesLabel=_freightDesLabel;
- (void).cxx_destruct;
- (void)modifyAction;
- (void)goToDetail;
- (void)setupContentView;
- (void)update:(_Bool)arg1 isFirstLoad:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

