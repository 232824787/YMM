//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITextViewDelegate.h"

@class IQTextView, NSDictionary, NSString, UIButton, UILabel;

@interface HCBETCWriteFeedbackView : UIView <UITextViewDelegate>
{
    _Bool _notUploadWhenCancel;
    NSDictionary *_infoDic;
    CDUnknownBlockType _cancelBlock;
    CDUnknownBlockType _submitBlock;
    UILabel *_wordCountLabel;
    UIButton *_cancelBtn;
    UIButton *_submitBtn;
    IQTextView *_textView;
    UIView *_textViewContainer;
}

@property(nonatomic) __weak UIView *textViewContainer; // @synthesize textViewContainer=_textViewContainer;
@property(nonatomic) __weak IQTextView *textView; // @synthesize textView=_textView;
@property(nonatomic) __weak UIButton *submitBtn; // @synthesize submitBtn=_submitBtn;
@property(nonatomic) __weak UIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(nonatomic) __weak UILabel *wordCountLabel; // @synthesize wordCountLabel=_wordCountLabel;
@property(copy, nonatomic) CDUnknownBlockType submitBlock; // @synthesize submitBlock=_submitBlock;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(retain, nonatomic) NSDictionary *infoDic; // @synthesize infoDic=_infoDic;
@property(nonatomic) _Bool notUploadWhenCancel; // @synthesize notUploadWhenCancel=_notUploadWhenCancel;
- (void).cxx_destruct;
- (void)textViewDidChange:(id)arg1;
- (void)updateWordCountLabel;
- (void)submitFeedback;
- (void)clickSubmitBtn:(id)arg1;
- (void)clickCancelBtn:(id)arg1;
- (void)loadUI;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

