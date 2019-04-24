//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, NSTimer, UIButton, UITextField;

@interface HCBLoanCLApplyVerifyView : UIView
{
    NSTimer *codeTimer;
    long long timerCount;
    NSTimer *voiceCodeTimer;
    long long voiceTimerCount;
    CDUnknownBlockType _sendCodeBlock;
    CDUnknownBlockType _sendVoiceCodeBlock;
    CDUnknownBlockType _codeBlock;
    NSString *_code;
    UIButton *_sendCodeBtn;
    UIButton *_voiceCodeBtn;
    UITextField *_codeTF;
}

@property(nonatomic) __weak UITextField *codeTF; // @synthesize codeTF=_codeTF;
@property(nonatomic) __weak UIButton *voiceCodeBtn; // @synthesize voiceCodeBtn=_voiceCodeBtn;
@property(nonatomic) __weak UIButton *sendCodeBtn; // @synthesize sendCodeBtn=_sendCodeBtn;
@property(copy, nonatomic) NSString *code; // @synthesize code=_code;
@property(copy, nonatomic) CDUnknownBlockType codeBlock; // @synthesize codeBlock=_codeBlock;
@property(copy, nonatomic) CDUnknownBlockType sendVoiceCodeBlock; // @synthesize sendVoiceCodeBlock=_sendVoiceCodeBlock;
@property(copy, nonatomic) CDUnknownBlockType sendCodeBlock; // @synthesize sendCodeBlock=_sendCodeBlock;
@property(nonatomic) long long voiceTimerCount; // @synthesize voiceTimerCount;
@property(retain, nonatomic) NSTimer *voiceCodeTimer; // @synthesize voiceCodeTimer;
@property(nonatomic) long long timerCount; // @synthesize timerCount;
@property(retain, nonatomic) NSTimer *codeTimer; // @synthesize codeTimer;
- (void).cxx_destruct;
- (void)didFireVoiceCodeTimer:(id)arg1;
- (void)didFireCodeTimer:(id)arg1;
- (void)getVoiceCodeTimer;
- (void)getCodeTimer;
- (void)startTimerIsVoice:(_Bool)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (void)sendVoiceCode:(id)arg1;
- (void)sendCode:(id)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (void)awakeFromNib;

@end

