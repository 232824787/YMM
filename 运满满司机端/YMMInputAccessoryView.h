//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton;

@interface YMMInputAccessoryView : UIView
{
    CDUnknownBlockType _cancelCallback;
    CDUnknownBlockType _confirmCallback;
    UIButton *_cancelButton;
    UIButton *_confirmButton;
}

@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(copy, nonatomic) CDUnknownBlockType confirmCallback; // @synthesize confirmCallback=_confirmCallback;
@property(copy, nonatomic) CDUnknownBlockType cancelCallback; // @synthesize cancelCallback=_cancelCallback;
- (void).cxx_destruct;
- (void)confirmAction:(id)arg1;
- (void)cancelAction:(id)arg1;
- (void)setNeedsUpdateConstraints;
- (id)init;

@end

