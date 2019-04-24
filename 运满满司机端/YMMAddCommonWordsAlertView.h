//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "YYTextViewDelegate.h"

@class NSString, YYTextView;

@interface YMMAddCommonWordsAlertView : UIView <YYTextViewDelegate>
{
    CDUnknownBlockType _completeBlcok;
    CDUnknownBlockType _cancelBlock;
    YYTextView *_textView;
}

@property(retain, nonatomic) YYTextView *textView; // @synthesize textView=_textView;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(copy, nonatomic) CDUnknownBlockType completeBlcok; // @synthesize completeBlcok=_completeBlcok;
- (void).cxx_destruct;
- (void)textViewDidChange:(id)arg1;
- (void)show;
- (void)dismiss;
- (void)confirmAction:(id)arg1;
- (void)cancleAction:(id)arg1;
- (void)tapGestureEvent;
- (void)setupViews;
- (void)doNothing;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

