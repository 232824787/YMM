//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VFSDKBaseViewController.h"

#import "UITextFieldDelegate.h"

@class NSString, UITextField, UITextView;

@interface VFSDKTestNavgatorURLsViewController : VFSDKBaseViewController <UITextFieldDelegate>
{
    UITextField *_textField;
    UITextView *_textView;
}

+ (_Bool)baseLoadFromNib;
@property(nonatomic) __weak UITextView *textView; // @synthesize textView=_textView;
@property(nonatomic) __weak UITextField *textField; // @synthesize textField=_textField;
- (void).cxx_destruct;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)_vf_open:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

