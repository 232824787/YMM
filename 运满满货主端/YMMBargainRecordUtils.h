//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, YMMBargainChatManager;

@interface YMMBargainRecordUtils : NSObject
{
    YMMBargainChatManager *_chatManager;
    NSString *_localPath;
    NSString *_saveTag;
}

+ (void)stopPlayVoice;
+ (id)shareInstance;
@property(retain, nonatomic) NSString *saveTag; // @synthesize saveTag=_saveTag;
@property(retain, nonatomic) NSString *localPath; // @synthesize localPath=_localPath;
@property(retain, nonatomic) YMMBargainChatManager *chatManager; // @synthesize chatManager=_chatManager;
- (void).cxx_destruct;
- (void)clearPathFlag;
- (void)playVoice:(id)arg1 inputFlag:(id)arg2 begin:(CDUnknownBlockType)arg3 end:(CDUnknownBlockType)arg4;
- (void)startPlayVoice:(id)arg1 inputFlag:(id)arg2 callBack:(CDUnknownBlockType)arg3;
- (void)playVoice:(id)arg1 cargoId:(id)arg2 conversationId:(id)arg3 inputFlag:(id)arg4 begin:(CDUnknownBlockType)arg5 end:(CDUnknownBlockType)arg6;
- (void)downLoadVoice:(id)arg1 cargoId:(id)arg2 conversationId:(id)arg3 inputFlag:(id)arg4 callBack:(CDUnknownBlockType)arg5;
- (long long)_canRecord;
- (void)didCancelRecordingVoiceAction:(id)arg1;
- (void)didStartRecordingVoiceAction:(id)arg1;
- (void)recordVoiceActionWithCallback:(CDUnknownBlockType)arg1;
- (id)voiceLocalPathWithCargoId:(id)arg1 conversionId:(id)arg2;

@end

