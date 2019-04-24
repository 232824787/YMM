//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BDSTTSEventManager.h"

@class NSMutableDictionary;

@interface BDS_EventManager_iOSETTSModelDownloader : BDSTTSEventManager
{
    struct bds_shared_ptr<BDS_TTS::EventManager> _coreManager;
    struct bds_shared_ptr<BDS_TTS::Context> _coreContext;
    struct bds_shared_ptr<BDS_TTS::EventManager> _coreCallback;
    basic_string_90719d97 _coreLoadErrorMessage;
    NSMutableDictionary *_commandListeners;
    NSMutableDictionary *_downloadListeners;
    NSMutableDictionary *_downloadHandleDependDownloadListeners;
    NSMutableDictionary *_modelIDDependDownloadListeners;
    NSMutableDictionary *_updateHandleDependUpdateListeners;
}

+ (id)getInstance;
@property(retain, nonatomic) NSMutableDictionary *updateHandleDependUpdateListeners; // @synthesize updateHandleDependUpdateListeners=_updateHandleDependUpdateListeners;
@property(retain, nonatomic) NSMutableDictionary *modelIDDependDownloadListeners; // @synthesize modelIDDependDownloadListeners=_modelIDDependDownloadListeners;
@property(retain, nonatomic) NSMutableDictionary *downloadHandleDependDownloadListeners; // @synthesize downloadHandleDependDownloadListeners=_downloadHandleDependDownloadListeners;
@property(retain, nonatomic) NSMutableDictionary *downloadListeners; // @synthesize downloadListeners=_downloadListeners;
@property(retain, nonatomic) NSMutableDictionary *commandListeners; // @synthesize commandListeners=_commandListeners;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)sendFromCallback:(struct ModelManagerCallback *)arg1 message:(bds_shared_ptr_000fd8e2 *)arg2;
- (void)processLocalFileDetailsResponse:(bds_shared_ptr_000fd8e2 *)arg1;
- (void)processLocalModelListResponse:(bds_shared_ptr_000fd8e2 *)arg1;
- (void)callbackServerListResponse:(_Bool)arg1 message:(bds_shared_ptr_000fd8e2 *)arg2;
- (void)updateCallbackServerResponseWithMessage:(bds_shared_ptr_000fd8e2 *)arg1;
- (id)endDownloadForexternID:(id)arg1;
- (id)libver;
- (_Bool)setDelegate:(id)arg1;
- (void)sendCommand:(id)arg1 withParameters:(id)arg2;
- (id)checkMinimalParams:(id)arg1 parameters:(id)arg2;
- (id)init;

@end

