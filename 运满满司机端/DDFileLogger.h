//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DDAbstractLogger.h"

#import "DDLogger.h"

@class DDLogFileInfo, NSFileHandle, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString;

@interface DDFileLogger : DDAbstractLogger <DDLogger>
{
    id <DDLogFileManager> _logFileManager;
    DDLogFileInfo *_currentLogFileInfo;
    NSFileHandle *_currentLogFileHandle;
    NSObject<OS_dispatch_source> *_currentLogFileVnode;
    double _rollingFrequency;
    NSObject<OS_dispatch_source> *_rollingTimer;
    unsigned long long _maximumFileSize;
    NSObject<OS_dispatch_queue> *_completionQueue;
    _Bool _doNotReuseLogFiles;
    _Bool _automaticallyAppendNewlineForCustomFormatters;
}

@property(nonatomic) _Bool automaticallyAppendNewlineForCustomFormatters; // @synthesize automaticallyAppendNewlineForCustomFormatters=_automaticallyAppendNewlineForCustomFormatters;
@property(readonly, nonatomic) id <DDLogFileManager> logFileManager; // @synthesize logFileManager=_logFileManager;
@property _Bool doNotReuseLogFiles; // @synthesize doNotReuseLogFiles=_doNotReuseLogFiles;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *loggerName;
- (void)lt_flush;
- (void)flush;
- (void)willRemoveLogger;
- (_Bool)shouldArchiveRecentLogFileInfo:(id)arg1;
- (void)didLogMessage;
- (void)willLogMessage;
- (void)logMessage:(id)arg1;
- (id)lt_currentLogFileHandle;
- (void)lt_monitorCurrentLogFileForExternalChanges;
- (_Bool)lt_shouldUseLogFile:(id)arg1 isResuming:(_Bool)arg2;
- (id)lt_currentLogFileInfo;
@property(readonly, nonatomic) DDLogFileInfo *currentLogFileInfo;
- (_Bool)lt_shouldLogFileBeArchived:(id)arg1;
- (void)lt_maybeRollLogFileDueToSize;
- (void)lt_maybeRollLogFileDueToAge;
- (void)lt_rollLogFileNow;
- (void)rollLogFileWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)rollLogFile;
- (void)lt_scheduleTimerToRollLogFileDueToAge;
@property double rollingFrequency;
@property unsigned long long maximumFileSize;
- (void)dealloc;
- (void)lt_cleanup;
- (id)initWithLogFileManager:(id)arg1 completionQueue:(id)arg2;
- (id)initWithLogFileManager:(id)arg1;
- (id)init;
- (id)unwrapFromBuffer;
- (id)wrapWithBuffer;
- (id)lt_dataForMessage:(id)arg1;
- (void)lt_logData:(id)arg1;
- (void)logData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) id <DDLogFormatter> logFormatter;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *loggerQueue;
@property(readonly) Class superclass;

@end

